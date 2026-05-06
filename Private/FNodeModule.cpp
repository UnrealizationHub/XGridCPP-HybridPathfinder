// Fill out your copyright notice in the Description page of Project Settings.


#include "FNodeModule.h"

FNodeModule::FNodeModule()
{
}

FNodeModule::~FNodeModule()
{
}

float FNodeModule::F() const
{
	return G + H;
}

bool FNodeModule::operator==(const FNodeModule& Other)
{
	return Position == Other.Position;
}

bool FNodeModule::operator<(const FNodeModule& Other)
{
	return F() < Other.F();
}

bool FNodeModule::operator>(const FNodeModule& Other)
{
	return F() > Other.F();
}

bool FNodeModule::operator<=(const FNodeModule& Other)
{
	return F() <= Other.F();
}

bool FNodeModule::operator>=(const FNodeModule& Other)
{
	return F() >= Other.F();
}



uint32 FNodeModule::GetTypeHash(const FNodeModule& Node)
{
	return ::GetTypeHash(Node.Position);
}
