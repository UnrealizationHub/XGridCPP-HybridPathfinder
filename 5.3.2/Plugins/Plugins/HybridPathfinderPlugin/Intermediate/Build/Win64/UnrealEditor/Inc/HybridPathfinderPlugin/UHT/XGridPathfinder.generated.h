// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XGridPathfinder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HYBRIDPATHFINDERPLUGIN_XGridPathfinder_generated_h
#error "XGridPathfinder.generated.h already included, missing '#pragma once' in XGridPathfinder.h"
#endif
#define HYBRIDPATHFINDERPLUGIN_XGridPathfinder_generated_h

#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_16_DELEGATE \
HYBRIDPATHFINDERPLUGIN_API void FOnPathfindingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPathfindingCompleteDelegate, TArray<FVector2D> const& Path, float Duration);


#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_18_DELEGATE \
HYBRIDPATHFINDERPLUGIN_API void FOnPathfindingWithDensityCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPathfindingWithDensityCompleteDelegate, TArray<FVector2D> const& Path, float Duration);


#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_20_DELEGATE \
HYBRIDPATHFINDERPLUGIN_API void FOnOmnidirectionalPathfindingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOmnidirectionalPathfindingCompleteDelegate, TArray<FVector2D> const& DownPath, TArray<FVector2D> const& RightPath, TArray<FVector2D> const& LeftPath, TArray<FVector2D> const& UpPath, float Duration);


#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_SPARSE_DATA
#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsynchOmnidirectionalPathfind); \
	DECLARE_FUNCTION(execAsyncPathfindWithDirectionalVariety); \
	DECLARE_FUNCTION(execPathfindWithDirectionalVariety); \
	DECLARE_FUNCTION(execAsyncPathfindWithDensity); \
	DECLARE_FUNCTION(execPathfindWithDensityMap); \
	DECLARE_FUNCTION(execAsyncPathfind); \
	DECLARE_FUNCTION(execPathfind);


#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_ACCESSORS
#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXGridPathfinder(); \
	friend struct Z_Construct_UClass_UXGridPathfinder_Statics; \
public: \
	DECLARE_CLASS(UXGridPathfinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HybridPathfinderPlugin"), NO_API) \
	DECLARE_SERIALIZER(UXGridPathfinder)


#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXGridPathfinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXGridPathfinder(UXGridPathfinder&&); \
	NO_API UXGridPathfinder(const UXGridPathfinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXGridPathfinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXGridPathfinder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXGridPathfinder) \
	NO_API virtual ~UXGridPathfinder();


#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_22_PROLOG
#define FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_SPARSE_DATA \
	FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_ACCESSORS \
	FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYBRIDPATHFINDERPLUGIN_API UClass* StaticClass<class UXGridPathfinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ascot_Desktop_XGrid_From_UE5_Blank_5_3_2_XGrid_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
