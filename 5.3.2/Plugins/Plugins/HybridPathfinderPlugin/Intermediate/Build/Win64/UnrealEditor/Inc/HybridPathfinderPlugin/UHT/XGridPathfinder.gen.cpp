// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HybridPathfinderPlugin/Public/XGridPathfinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXGridPathfinder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	HYBRIDPATHFINDERPLUGIN_API UClass* Z_Construct_UClass_UXGridPathfinder();
	HYBRIDPATHFINDERPLUGIN_API UClass* Z_Construct_UClass_UXGridPathfinder_NoRegister();
	HYBRIDPATHFINDERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature();
	HYBRIDPATHFINDERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature();
	HYBRIDPATHFINDERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HybridPathfinderPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms
		{
			TArray<FVector2D> Path;
			float Duration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Path_MetaData), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HybridPathfinderPlugin, nullptr, "OnPathfindingCompleteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::_Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::_Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPathfindingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPathfindingCompleteDelegate, TArray<FVector2D> const& Path, float Duration)
{
	struct _Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms
	{
		TArray<FVector2D> Path;
		float Duration;
	};
	_Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms Parms;
	Parms.Path=Path;
	Parms.Duration=Duration;
	OnPathfindingCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms
		{
			TArray<FVector2D> Path;
			float Duration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Path_MetaData), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HybridPathfinderPlugin, nullptr, "OnPathfindingWithDensityCompleteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::_Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::_Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPathfindingWithDensityCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPathfindingWithDensityCompleteDelegate, TArray<FVector2D> const& Path, float Duration)
{
	struct _Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms
	{
		TArray<FVector2D> Path;
		float Duration;
	};
	_Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms Parms;
	Parms.Path=Path;
	Parms.Duration=Duration;
	OnPathfindingWithDensityCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms
		{
			TArray<FVector2D> DownPath;
			TArray<FVector2D> RightPath;
			TArray<FVector2D> LeftPath;
			TArray<FVector2D> UpPath;
			float Duration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DownPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RightPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_DownPath_Inner = { "DownPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_DownPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_DownPath = { "DownPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms, DownPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_DownPath_MetaData), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_DownPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_RightPath_Inner = { "RightPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_RightPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_RightPath = { "RightPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms, RightPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_RightPath_MetaData), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_RightPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_LeftPath_Inner = { "LeftPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_LeftPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_LeftPath = { "LeftPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms, LeftPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_LeftPath_MetaData), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_LeftPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_UpPath_Inner = { "UpPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_UpPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_UpPath = { "UpPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms, UpPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_UpPath_MetaData), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_UpPath_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_DownPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_DownPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_RightPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_RightPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_LeftPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_LeftPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_UpPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_UpPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HybridPathfinderPlugin, nullptr, "OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOmnidirectionalPathfindingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOmnidirectionalPathfindingCompleteDelegate, TArray<FVector2D> const& DownPath, TArray<FVector2D> const& RightPath, TArray<FVector2D> const& LeftPath, TArray<FVector2D> const& UpPath, float Duration)
{
	struct _Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms
	{
		TArray<FVector2D> DownPath;
		TArray<FVector2D> RightPath;
		TArray<FVector2D> LeftPath;
		TArray<FVector2D> UpPath;
		float Duration;
	};
	_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms Parms;
	Parms.DownPath=DownPath;
	Parms.RightPath=RightPath;
	Parms.LeftPath=LeftPath;
	Parms.UpPath=UpPath;
	Parms.Duration=Duration;
	OnOmnidirectionalPathfindingCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UXGridPathfinder::execAsynchOmnidirectionalPathfind)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_grid);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_STRUCT(FVector2D,Z_Param_start);
		P_GET_STRUCT(FVector2D,Z_Param_end);
		P_GET_UBOOL(Z_Param_is_player_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsynchOmnidirectionalPathfind(Z_Param_Out_grid,Z_Param_Width,Z_Param_Height,Z_Param_start,Z_Param_end,Z_Param_is_player_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXGridPathfinder::execAsyncPathfindWithDirectionalVariety)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_grid);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_STRUCT(FVector2D,Z_Param_start);
		P_GET_STRUCT(FVector2D,Z_Param_end);
		P_GET_TARRAY(FVector2D,Z_Param_directions);
		P_GET_UBOOL(Z_Param_is_player_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncPathfindWithDirectionalVariety(Z_Param_Out_grid,Z_Param_Width,Z_Param_Height,Z_Param_start,Z_Param_end,Z_Param_directions,Z_Param_is_player_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXGridPathfinder::execPathfindWithDirectionalVariety)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_grid);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_STRUCT(FVector2D,Z_Param_start);
		P_GET_STRUCT(FVector2D,Z_Param_end);
		P_GET_TARRAY(FVector2D,Z_Param_directions);
		P_GET_UBOOL(Z_Param_is_player_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=P_THIS->PathfindWithDirectionalVariety(Z_Param_Out_grid,Z_Param_Width,Z_Param_Height,Z_Param_start,Z_Param_end,Z_Param_directions,Z_Param_is_player_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXGridPathfinder::execAsyncPathfindWithDensity)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_grid);
		P_GET_TARRAY_REF(int32,Z_Param_Out_DensityMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_STRUCT(FVector2D,Z_Param_start);
		P_GET_STRUCT(FVector2D,Z_Param_end);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Density_Weight);
		P_GET_UBOOL(Z_Param_is_player_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncPathfindWithDensity(Z_Param_Out_grid,Z_Param_Out_DensityMap,Z_Param_Width,Z_Param_Height,Z_Param_start,Z_Param_end,Z_Param_Density_Weight,Z_Param_is_player_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXGridPathfinder::execPathfindWithDensityMap)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_grid);
		P_GET_TARRAY_REF(int32,Z_Param_Out_DensityMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_STRUCT(FVector2D,Z_Param_start);
		P_GET_STRUCT(FVector2D,Z_Param_end);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Density_Weight);
		P_GET_UBOOL(Z_Param_is_player_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=P_THIS->PathfindWithDensityMap(Z_Param_Out_grid,Z_Param_Out_DensityMap,Z_Param_Width,Z_Param_Height,Z_Param_start,Z_Param_end,Z_Param_Density_Weight,Z_Param_is_player_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXGridPathfinder::execAsyncPathfind)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_grid);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_STRUCT(FVector2D,Z_Param_start);
		P_GET_STRUCT(FVector2D,Z_Param_end);
		P_GET_UBOOL(Z_Param_is_player_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncPathfind(Z_Param_Out_grid,Z_Param_Width,Z_Param_Height,Z_Param_start,Z_Param_end,Z_Param_is_player_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXGridPathfinder::execPathfind)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_grid);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_STRUCT(FVector2D,Z_Param_start);
		P_GET_STRUCT(FVector2D,Z_Param_end);
		P_GET_UBOOL(Z_Param_is_player_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=P_THIS->Pathfind(Z_Param_Out_grid,Z_Param_Width,Z_Param_Height,Z_Param_start,Z_Param_end,Z_Param_is_player_unit);
		P_NATIVE_END;
	}
	void UXGridPathfinder::StaticRegisterNativesUXGridPathfinder()
	{
		UClass* Class = UXGridPathfinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsynchOmnidirectionalPathfind", &UXGridPathfinder::execAsynchOmnidirectionalPathfind },
			{ "AsyncPathfind", &UXGridPathfinder::execAsyncPathfind },
			{ "AsyncPathfindWithDensity", &UXGridPathfinder::execAsyncPathfindWithDensity },
			{ "AsyncPathfindWithDirectionalVariety", &UXGridPathfinder::execAsyncPathfindWithDirectionalVariety },
			{ "Pathfind", &UXGridPathfinder::execPathfind },
			{ "PathfindWithDensityMap", &UXGridPathfinder::execPathfindWithDensityMap },
			{ "PathfindWithDirectionalVariety", &UXGridPathfinder::execPathfindWithDirectionalVariety },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics
	{
		struct XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms
		{
			TArray<int32> grid;
			int32 Width;
			int32 Height;
			FVector2D start;
			FVector2D end;
			bool is_player_unit;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static void NewProp_is_player_unit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_player_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_grid_MetaData), Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_grid_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms, start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms, end), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_is_player_unit_SetBit(void* Obj)
	{
		((XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms*)Obj)->is_player_unit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_is_player_unit = { "is_player_unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms), &Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_is_player_unit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::NewProp_is_player_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXGridPathfinder, nullptr, "AsynchOmnidirectionalPathfind", nullptr, nullptr, Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::XGridPathfinder_eventAsynchOmnidirectionalPathfind_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics
	{
		struct XGridPathfinder_eventAsyncPathfind_Parms
		{
			TArray<int32> grid;
			int32 Width;
			int32 Height;
			FVector2D start;
			FVector2D end;
			bool is_player_unit;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static void NewProp_is_player_unit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_player_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfind_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_grid_MetaData), Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_grid_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfind_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfind_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfind_Parms, start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfind_Parms, end), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_is_player_unit_SetBit(void* Obj)
	{
		((XGridPathfinder_eventAsyncPathfind_Parms*)Obj)->is_player_unit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_is_player_unit = { "is_player_unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XGridPathfinder_eventAsyncPathfind_Parms), &Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_is_player_unit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::NewProp_is_player_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXGridPathfinder, nullptr, "AsyncPathfind", nullptr, nullptr, Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::XGridPathfinder_eventAsyncPathfind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::XGridPathfinder_eventAsyncPathfind_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics
	{
		struct XGridPathfinder_eventAsyncPathfindWithDensity_Parms
		{
			TArray<int32> grid;
			TArray<int32> DensityMap;
			int32 Width;
			int32 Height;
			FVector2D start;
			FVector2D end;
			float Density_Weight;
			bool is_player_unit;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DensityMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DensityMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density_Weight;
		static void NewProp_is_player_unit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_player_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDensity_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_grid_MetaData), Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_grid_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_DensityMap_Inner = { "DensityMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_DensityMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_DensityMap = { "DensityMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDensity_Parms, DensityMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_DensityMap_MetaData), Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_DensityMap_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDensity_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDensity_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDensity_Parms, start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDensity_Parms, end), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_Density_Weight = { "Density_Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDensity_Parms, Density_Weight), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_is_player_unit_SetBit(void* Obj)
	{
		((XGridPathfinder_eventAsyncPathfindWithDensity_Parms*)Obj)->is_player_unit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_is_player_unit = { "is_player_unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XGridPathfinder_eventAsyncPathfindWithDensity_Parms), &Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_is_player_unit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_DensityMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_DensityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_Density_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::NewProp_is_player_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXGridPathfinder, nullptr, "AsyncPathfindWithDensity", nullptr, nullptr, Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::XGridPathfinder_eventAsyncPathfindWithDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::XGridPathfinder_eventAsyncPathfindWithDensity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics
	{
		struct XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms
		{
			TArray<int32> grid;
			int32 Width;
			int32 Height;
			FVector2D start;
			FVector2D end;
			TArray<FVector2D> directions;
			bool is_player_unit;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static const UECodeGen_Private::FStructPropertyParams NewProp_directions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_directions;
		static void NewProp_is_player_unit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_player_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_grid_MetaData), Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_grid_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms, start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms, end), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_directions_Inner = { "directions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_directions = { "directions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms, directions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_is_player_unit_SetBit(void* Obj)
	{
		((XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms*)Obj)->is_player_unit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_is_player_unit = { "is_player_unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms), &Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_is_player_unit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_directions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_directions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::NewProp_is_player_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXGridPathfinder, nullptr, "AsyncPathfindWithDirectionalVariety", nullptr, nullptr, Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::XGridPathfinder_eventAsyncPathfindWithDirectionalVariety_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics
	{
		struct XGridPathfinder_eventPathfind_Parms
		{
			TArray<int32> grid;
			int32 Width;
			int32 Height;
			FVector2D start;
			FVector2D end;
			bool is_player_unit;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static void NewProp_is_player_unit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_player_unit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfind_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_grid_MetaData), Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_grid_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfind_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfind_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfind_Parms, start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfind_Parms, end), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_is_player_unit_SetBit(void* Obj)
	{
		((XGridPathfinder_eventPathfind_Parms*)Obj)->is_player_unit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_is_player_unit = { "is_player_unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XGridPathfinder_eventPathfind_Parms), &Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_is_player_unit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfind_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_is_player_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXGridPathfinder, nullptr, "Pathfind", nullptr, nullptr, Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::XGridPathfinder_eventPathfind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::XGridPathfinder_eventPathfind_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXGridPathfinder_Pathfind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXGridPathfinder_Pathfind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics
	{
		struct XGridPathfinder_eventPathfindWithDensityMap_Parms
		{
			TArray<int32> grid;
			TArray<int32> DensityMap;
			int32 Width;
			int32 Height;
			FVector2D start;
			FVector2D end;
			float Density_Weight;
			bool is_player_unit;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DensityMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DensityMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density_Weight;
		static void NewProp_is_player_unit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_player_unit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_grid_MetaData), Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_grid_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_DensityMap_Inner = { "DensityMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_DensityMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_DensityMap = { "DensityMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, DensityMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_DensityMap_MetaData), Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_DensityMap_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, end), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_Density_Weight = { "Density_Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, Density_Weight), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_is_player_unit_SetBit(void* Obj)
	{
		((XGridPathfinder_eventPathfindWithDensityMap_Parms*)Obj)->is_player_unit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_is_player_unit = { "is_player_unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XGridPathfinder_eventPathfindWithDensityMap_Parms), &Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_is_player_unit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDensityMap_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_DensityMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_DensityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_Density_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_is_player_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXGridPathfinder, nullptr, "PathfindWithDensityMap", nullptr, nullptr, Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::XGridPathfinder_eventPathfindWithDensityMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::XGridPathfinder_eventPathfindWithDensityMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics
	{
		struct XGridPathfinder_eventPathfindWithDirectionalVariety_Parms
		{
			TArray<int32> grid;
			int32 Width;
			int32 Height;
			FVector2D start;
			FVector2D end;
			TArray<FVector2D> directions;
			bool is_player_unit;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_end;
		static const UECodeGen_Private::FStructPropertyParams NewProp_directions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_directions;
		static void NewProp_is_player_unit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_player_unit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms, grid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_grid_MetaData), Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_grid_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms, Width), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms, Height), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms, start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms, end), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_directions_Inner = { "directions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_directions = { "directions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms, directions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_is_player_unit_SetBit(void* Obj)
	{
		((XGridPathfinder_eventPathfindWithDirectionalVariety_Parms*)Obj)->is_player_unit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_is_player_unit = { "is_player_unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms), &Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_is_player_unit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XGridPathfinder_eventPathfindWithDirectionalVariety_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_directions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_directions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_is_player_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXGridPathfinder, nullptr, "PathfindWithDirectionalVariety", nullptr, nullptr, Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::XGridPathfinder_eventPathfindWithDirectionalVariety_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::XGridPathfinder_eventPathfindWithDirectionalVariety_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXGridPathfinder);
	UClass* Z_Construct_UClass_UXGridPathfinder_NoRegister()
	{
		return UXGridPathfinder::StaticClass();
	}
	struct Z_Construct_UClass_UXGridPathfinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPathfindingComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPathfindingComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPathfindingWithDensityComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPathfindingWithDensityComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOmnidirectionalPathfindComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOmnidirectionalPathfindComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXGridPathfinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HybridPathfinderPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UXGridPathfinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXGridPathfinder_AsynchOmnidirectionalPathfind, "AsynchOmnidirectionalPathfind" }, // 794936369
		{ &Z_Construct_UFunction_UXGridPathfinder_AsyncPathfind, "AsyncPathfind" }, // 2466468756
		{ &Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDensity, "AsyncPathfindWithDensity" }, // 821686640
		{ &Z_Construct_UFunction_UXGridPathfinder_AsyncPathfindWithDirectionalVariety, "AsyncPathfindWithDirectionalVariety" }, // 523689232
		{ &Z_Construct_UFunction_UXGridPathfinder_Pathfind, "Pathfind" }, // 2153498073
		{ &Z_Construct_UFunction_UXGridPathfinder_PathfindWithDensityMap, "PathfindWithDensityMap" }, // 561627728
		{ &Z_Construct_UFunction_UXGridPathfinder_PathfindWithDirectionalVariety, "PathfindWithDirectionalVariety" }, // 386665450
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXGridPathfinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XGridPathfinder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingComplete_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingComplete = { "OnPathfindingComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXGridPathfinder, OnPathfindingComplete), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingComplete_MetaData), Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingComplete_MetaData) }; // 1723668805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingWithDensityComplete_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingWithDensityComplete = { "OnPathfindingWithDensityComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXGridPathfinder, OnPathfindingWithDensityComplete), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnPathfindingWithDensityCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingWithDensityComplete_MetaData), Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingWithDensityComplete_MetaData) }; // 704490505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnOmnidirectionalPathfindComplete_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/XGridPathfinder.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnOmnidirectionalPathfindComplete = { "OnOmnidirectionalPathfindComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UXGridPathfinder, OnOmnidirectionalPathfindComplete), Z_Construct_UDelegateFunction_HybridPathfinderPlugin_OnOmnidirectionalPathfindingCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnOmnidirectionalPathfindComplete_MetaData), Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnOmnidirectionalPathfindComplete_MetaData) }; // 1911417062
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXGridPathfinder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnPathfindingWithDensityComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXGridPathfinder_Statics::NewProp_OnOmnidirectionalPathfindComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXGridPathfinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXGridPathfinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXGridPathfinder_Statics::ClassParams = {
		&UXGridPathfinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXGridPathfinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::Class_MetaDataParams), Z_Construct_UClass_UXGridPathfinder_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXGridPathfinder_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UXGridPathfinder()
	{
		if (!Z_Registration_Info_UClass_UXGridPathfinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXGridPathfinder.OuterSingleton, Z_Construct_UClass_UXGridPathfinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXGridPathfinder.OuterSingleton;
	}
	template<> HYBRIDPATHFINDERPLUGIN_API UClass* StaticClass<UXGridPathfinder>()
	{
		return UXGridPathfinder::StaticClass();
	}
	UXGridPathfinder::UXGridPathfinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXGridPathfinder);
	UXGridPathfinder::~UXGridPathfinder() {}
	struct Z_CompiledInDeferFile_FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXGridPathfinder, UXGridPathfinder::StaticClass, TEXT("UXGridPathfinder"), &Z_Registration_Info_UClass_UXGridPathfinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXGridPathfinder), 958684070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_3561289255(TEXT("/Script/HybridPathfinderPlugin"),
		Z_CompiledInDeferFile_FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
