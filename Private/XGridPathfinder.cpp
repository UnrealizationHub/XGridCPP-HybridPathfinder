// Fill out your copyright notice in the Description page of Project Settings.


#include "XGridPathfinder.h"




// Heuristic Function (Manhattan Distance)
float ManhattanDistanceEq(const FVector2D& A, const FVector2D& B)
{
    return FMath::Abs(A.X - B.X) + FMath::Abs(A.Y - B.Y);
}

TArray<FVector2D> UXGridPathfinder::Pathfind(const TArray<int32>& grid, int32 width, int32 height, FVector2D start, FVector2D end, bool is_player_unit)
{
    TSet<TSharedPtr<FNodeModule>> OpenSet;
    TMap<FVector2D, TSharedPtr<FNodeModule>> ClosedSet;
    TSharedPtr<FNodeModule> StartNode = MakeShareable(new FNodeModule(start));
    TSharedPtr<FNodeModule> EndNode = MakeShareable(new FNodeModule(end));
    StartNode->G = 0;
    StartNode->H = ManhattanDistanceEq(start, end);
    OpenSet.Add(StartNode);

    while (OpenSet.Num() > 0)
    {
        TSharedPtr<FNodeModule> CurrentNode = *OpenSet.CreateConstIterator();
        for (const TSharedPtr<FNodeModule>& Node : OpenSet)
        {
            if (Node->F() < CurrentNode->F())
            {
                CurrentNode = Node;
            }
        }

        if (CurrentNode->Position == EndNode->Position)
        {
            TArray<FVector2D> Path;
            while (CurrentNode->Parent.IsValid())
            {
                Path.Add(CurrentNode->Position);
                CurrentNode = CurrentNode->Parent;
            }
            Algo::Reverse(Path);
            return Path;
        }

        OpenSet.Remove(CurrentNode);
        ClosedSet.Add(CurrentNode->Position, CurrentNode);

        TArray<FVector2D> Directions = { FVector2D(0, -1), FVector2D(1, 0), FVector2D(0, 1), FVector2D(-1, 0) };
        for (const FVector2D& Direction : Directions)
        {
            FVector2D ChildPosition = CurrentNode->Position + Direction;
            int32 Index = static_cast<int32>(ChildPosition.Y) * width + static_cast<int32>(ChildPosition.X);


            int occupied = 0;
            if (is_player_unit)
                occupied = 1;
            else
                occupied = 2;

            if (ChildPosition.X >= 0 && ChildPosition.X < width &&
                ChildPosition.Y >= 0 && ChildPosition.Y < height &&
                (grid[Index] == 0 || grid[Index] == occupied))
            {
                TSharedPtr<FNodeModule> ChildNode = MakeShareable(new FNodeModule(ChildPosition));
                ChildNode->Parent = CurrentNode;

                if (ClosedSet.Contains(ChildPosition))
                {
                    continue;
                }

                float TentativeG = CurrentNode->G + 1;

                if (OpenSet.Contains(ChildNode))
                {
                    for (TSharedPtr<FNodeModule>& Node : OpenSet)
                    {
                        if (*Node == *ChildNode && TentativeG < Node->G)
                        {
                            Node->G = TentativeG;
                            Node->Parent = CurrentNode;
                            Node->H = ManhattanDistanceEq(ChildPosition, end);
                        }
                    }
                }
                else
                {
                    ChildNode->G = TentativeG;
                    ChildNode->H = ManhattanDistanceEq(ChildPosition, end);
                    OpenSet.Add(ChildNode);
                }
            }
        }
    }

    return {};
}

void UXGridPathfinder::AsyncPathfind(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end, bool is_opponent)
{
    double TimeInitial = FPlatformTime::Seconds();
    Async(EAsyncExecution::ThreadPool, [this, grid, Width, Height, start, end, is_opponent, TimeInitial]()
        {

            TArray<FVector2D> Path = Pathfind(grid, Width, Height, start, end, is_opponent);
            //FVector2D Start = Path[0];

            double TimeAfter = FPlatformTime::Seconds();
            double Duration = TimeAfter - TimeInitial;

            // Switch back to the main thread to call the Blueprint event
            AsyncTask(ENamedThreads::GameThread, [this, Path, Duration]()
                {
                    OnPathfindingComplete.Broadcast(Path, Duration);
                });
        });

}

TArray<FVector2D> UXGridPathfinder::PathfindWithDensityMap(const TArray<int32>& grid, const TArray<int32>& densityMap, int32 Width, int32 Height, FVector2D start, FVector2D end, float Density_Weight, bool is_player_unit)
{

    TSet<TSharedPtr<FNodeModule>> OpenSet;
    TMap<FVector2D, TSharedPtr<FNodeModule>> ClosedSet;
    TSharedPtr<FNodeModule> StartNode = MakeShareable(new FNodeModule(start));
    TSharedPtr<FNodeModule> EndNode = MakeShareable(new FNodeModule(end));
    StartNode->G = 0;
    StartNode->H = ManhattanDistanceEq(start, end);
    OpenSet.Add(StartNode);

    while (OpenSet.Num() > 0)
    {
        TSharedPtr<FNodeModule> CurrentNode = *OpenSet.CreateConstIterator();
        for (const TSharedPtr<FNodeModule>& Node : OpenSet)
        {
            if (Node->F() < CurrentNode->F())
            {
                CurrentNode = Node;
            }
        }

        if (CurrentNode->Position == EndNode->Position)
        {
            TArray<FVector2D> Path;
            while (CurrentNode->Parent.IsValid())
            {
                Path.Add(CurrentNode->Position);
                CurrentNode = CurrentNode->Parent;
            }
            Algo::Reverse(Path);
            return Path;
        }

        OpenSet.Remove(CurrentNode);
        ClosedSet.Add(CurrentNode->Position, CurrentNode);

        TArray<FVector2D> Directions = { FVector2D(0, -1), FVector2D(1, 0), FVector2D(0, 1), FVector2D(-1, 0) };
        for (const FVector2D& Direction : Directions)
        {
            FVector2D ChildPosition = CurrentNode->Position + Direction;
            int32 Index = static_cast<int32>(ChildPosition.Y) * Width + static_cast<int32>(ChildPosition.X);

            int occupied = is_player_unit ? 1 : 2;

            if (ChildPosition.X >= 0 && ChildPosition.X < Width &&
                ChildPosition.Y >= 0 && ChildPosition.Y < Height &&
                (grid[Index] == 0 || grid[Index] == occupied))
            {
                TSharedPtr<FNodeModule> ChildNode = MakeShareable(new FNodeModule(ChildPosition));
                ChildNode->Parent = CurrentNode;

                if (ClosedSet.Contains(ChildPosition))
                {
                    continue;
                }

                float TentativeG = CurrentNode->G + 1;
                float DensityPenalty = densityMap[Index] * Density_Weight; // Add density score to the cost
                TentativeG += DensityPenalty;

                if (OpenSet.Contains(ChildNode))
                {
                    for (TSharedPtr<FNodeModule>& Node : OpenSet)
                    {
                        if (*Node == *ChildNode && TentativeG < Node->G)
                        {
                            Node->G = TentativeG;
                            Node->Parent = CurrentNode;
                            Node->H = ManhattanDistanceEq(ChildPosition, end);
                        }
                    }
                }
                else
                {
                    ChildNode->G = TentativeG;
                    ChildNode->H = ManhattanDistanceEq(ChildPosition, end);
                    OpenSet.Add(ChildNode);
                }
            }
        }
    }

    return {};
}

void UXGridPathfinder::AsyncPathfindWithDensity(const TArray<int32>& grid, const TArray<int32>& DensityMap, int32 Width, int32 Height, FVector2D start, FVector2D end, float Density_Weight, bool is_player_unit)
{
    double TimeInitial = FPlatformTime::Seconds();
    Async(EAsyncExecution::ThreadPool, [this, grid, DensityMap, Width, Height, start, end, Density_Weight, is_player_unit, TimeInitial]()
        {

            TArray<FVector2D> Path = PathfindWithDensityMap(grid, DensityMap, Width, Height, start, end, Density_Weight, is_player_unit);
            //FVector2D Start = Path[0];

            double TimeAfter = FPlatformTime::Seconds();
            double Duration = TimeAfter - TimeInitial;

            // Switch back to the main thread to call the Blueprint event
            AsyncTask(ENamedThreads::GameThread, [this, Path, Duration]()
                {
                    OnPathfindingWithDensityComplete.Broadcast(Path, Duration);
                });
        });
}

TArray<FVector2D> UXGridPathfinder::PathfindWithDirectionalVariety(const TArray<int32>& grid, int32 width, int32 height, FVector2D start, FVector2D end, TArray<FVector2D> directions, bool is_player_unit)
{
    TSet<TSharedPtr<FNodeModule>> OpenSet;
    TMap<FVector2D, TSharedPtr<FNodeModule>> ClosedSet;
    TSharedPtr<FNodeModule> StartNode = MakeShareable(new FNodeModule(start));
    TSharedPtr<FNodeModule> EndNode = MakeShareable(new FNodeModule(end));
    StartNode->G = 0;
    StartNode->H = ManhattanDistanceEq(start, end);
    OpenSet.Add(StartNode);

    while (OpenSet.Num() > 0)
    {
        if (OpenSet.Num() > width * height)
        {
            UE_LOG(LogTemp, Warning, TEXT("Number of nodes in the open set exceeds maximum grid cells"));
            return {};
        }
        TSharedPtr<FNodeModule> CurrentNode = *OpenSet.CreateConstIterator();
        for (const TSharedPtr<FNodeModule>& Node : OpenSet)
        {
            if (Node->F() < CurrentNode->F())
            {
                CurrentNode = Node;
            }
        }

        if (CurrentNode->Position == EndNode->Position)
        {
            TArray<FVector2D> Path;
            while (CurrentNode->Parent.IsValid())
            {
                Path.Add(CurrentNode->Position);
                CurrentNode = CurrentNode->Parent;
            }
            Algo::Reverse(Path);
            return Path;
        }

        OpenSet.Remove(CurrentNode);
        ClosedSet.Add(CurrentNode->Position, CurrentNode);

        TArray<FVector2D> Directions = directions;
        for (const FVector2D& Direction : Directions)
        {
            FVector2D ChildPosition = CurrentNode->Position + Direction;
            int32 Index = static_cast<int32>(ChildPosition.Y) * width + static_cast<int32>(ChildPosition.X);


            int occupied = 0;
            if (is_player_unit)
                occupied = 1;
            else
                occupied = 2;

            if (ChildPosition.X >= 0 && ChildPosition.X < width &&
                ChildPosition.Y >= 0 && ChildPosition.Y < height &&
                (grid[Index] == 0 || grid[Index] == occupied))
            {
                TSharedPtr<FNodeModule> ChildNode = MakeShareable(new FNodeModule(ChildPosition));
                ChildNode->Parent = CurrentNode;

                if (ClosedSet.Contains(ChildPosition))
                {
                    continue;
                }

                float TentativeG = CurrentNode->G + 1;

                if (OpenSet.Contains(ChildNode))
                {
                    for (TSharedPtr<FNodeModule>& Node : OpenSet)
                    {
                        if (*Node == *ChildNode && TentativeG < Node->G)
                        {
                            Node->G = TentativeG;
                            Node->Parent = CurrentNode;
                            Node->H = ManhattanDistanceEq(ChildPosition, end);
                        }
                    }
                }
                else
                {
                    ChildNode->G = TentativeG;
                    ChildNode->H = ManhattanDistanceEq(ChildPosition, end);
                    OpenSet.Add(ChildNode);
                }
            }
        }
    }

    return {};
}

void UXGridPathfinder::AsyncPathfindWithDirectionalVariety(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end, TArray<FVector2D> directions, bool is_opponent)
{
    double TimeInitial = FPlatformTime::Seconds();
    Async(EAsyncExecution::ThreadPool, [this, grid, Width, Height, start, end, directions, is_opponent, TimeInitial]()
        {

            TArray<FVector2D> Path = PathfindWithDirectionalVariety(grid, Width, Height, start, end, directions, is_opponent);
            //FVector2D Start = Path[0];

            double TimeAfter = FPlatformTime::Seconds();
            double Duration = TimeAfter - TimeInitial;

            // Switch back to the main thread to call the Blueprint event
            AsyncTask(ENamedThreads::GameThread, [this, Path, Duration]()
                {
                    OnPathfindingComplete.Broadcast(Path, Duration);
                });
        });

}


void UXGridPathfinder::AsynchOmnidirectionalPathfind(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end, bool is_player_unit)
{
    double TimeInitial = FPlatformTime::Seconds();
    Async(EAsyncExecution::ThreadPool, [this, grid, Width, Height, start, end, is_player_unit, TimeInitial]()
        {

            TArray<FVector2D> DownFirst = { FVector2D(0, -1), FVector2D(1, 0), FVector2D(0, 1), FVector2D(-1, 0) };
            TArray<FVector2D> RightFirst = { FVector2D(1, 0), FVector2D(0, 1), FVector2D(-1, 0), FVector2D(0, -1) };
            TArray<FVector2D> LeftFirst = { FVector2D(-1, 0), FVector2D(0, -1), FVector2D(1, 0), FVector2D(0, 1) };
            TArray<FVector2D> UpFirst = { FVector2D(0, 1), FVector2D(-1, 0), FVector2D(0, -1), FVector2D(1, 0) };

            TArray<FVector2D> DownPath = PathfindWithDirectionalVariety(grid, Width, Height, start, end, DownFirst, is_player_unit);
            TArray<FVector2D> RightPath = PathfindWithDirectionalVariety(grid, Width, Height, start, end, RightFirst, is_player_unit);
            TArray<FVector2D> LeftPath = PathfindWithDirectionalVariety(grid, Width, Height, start, end, LeftFirst, is_player_unit);
            TArray<FVector2D> UpPath = PathfindWithDirectionalVariety(grid, Width, Height, start, end, UpFirst, is_player_unit);

            double TimeAfter = FPlatformTime::Seconds();
            double Duration = TimeAfter - TimeInitial;
            
            // Switch back to the main thread to call the Blueprint event
            AsyncTask(ENamedThreads::GameThread, [this, DownPath, RightPath, LeftPath, UpPath, Duration]()
                {
                    OnOmnidirectionalPathfindComplete.Broadcast(DownPath, RightPath, LeftPath, UpPath, Duration);
                });
        }); 
        
}

