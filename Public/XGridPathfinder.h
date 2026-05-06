// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASync/Async.h"
#include "FNodeModule.h"
#include "Delegates/Delegate.h"
#include "XGridPathfinder.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPathfindingCompleteDelegate, const TArray<FVector2D>&, Path, float, Duration);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPathfindingWithDensityCompleteDelegate, const TArray<FVector2D>&, Path, float, Duration);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnOmnidirectionalPathfindingCompleteDelegate, const TArray<FVector2D>&, DownPath, const TArray<FVector2D>&, RightPath, const TArray<FVector2D>&, LeftPath, const TArray<FVector2D>&, UpPath, float, Duration);

/**
 *
 */
UCLASS(Blueprintable)
class UXGridPathfinder : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		TArray<FVector2D> Pathfind(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end,  bool is_player_unit);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		void AsyncPathfind(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end, bool is_player_unit);

	UPROPERTY(BlueprintAssignable, Category = "Pathfinding")
		FOnPathfindingCompleteDelegate OnPathfindingComplete;

	UPROPERTY(BlueprintAssignable, Category = "Pathfinding")
		FOnPathfindingWithDensityCompleteDelegate OnPathfindingWithDensityComplete;

	UPROPERTY(BlueprintAssignable, Category = "Pathfinding")
		FOnOmnidirectionalPathfindingCompleteDelegate OnOmnidirectionalPathfindComplete;

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		TArray<FVector2D> PathfindWithDensityMap(const TArray<int32>& grid, const TArray<int32>& DensityMap, int32 Width, int32 Height, FVector2D start, FVector2D end, float Density_Weight, bool is_player_unit);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		void AsyncPathfindWithDensity(const TArray<int32>& grid, const TArray<int32>& DensityMap, int32 Width, int32 Height, FVector2D start, FVector2D end, float Density_Weight, bool is_player_unit);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		TArray<FVector2D> PathfindWithDirectionalVariety(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end, TArray<FVector2D> directions, bool is_player_unit);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		void AsyncPathfindWithDirectionalVariety(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end, TArray<FVector2D> directions, bool is_player_unit);

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
		void AsynchOmnidirectionalPathfind(const TArray<int32>& grid, int32 Width, int32 Height, FVector2D start, FVector2D end, bool is_player_unit);


};