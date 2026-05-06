// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class HYBRIDPATHFINDERPLUGIN_API FNodeModule
{
public:
	FNodeModule();
	~FNodeModule();

    FNodeModule(FVector2D InPosition) : Position(InPosition) {}
//    FNodeModule(const FNodeModule& Copy);

    float F() const;
    bool operator==(const FNodeModule& Other);
    bool operator<(const FNodeModule& Other);
    bool operator>(const FNodeModule& Other);
    bool operator<=(const FNodeModule& Other);
    bool operator>=(const FNodeModule& Other);
//    void operator=(const FNodeModule& Other);

    uint32 GetTypeHash(const FNodeModule& Node);

    FVector2D Position;
    float G = FLT_MAX;
    float H = 0;
    bool InOpenSet = false;
    bool InClosedSet = false;
    TSharedPtr<FNodeModule> Parent;

};
