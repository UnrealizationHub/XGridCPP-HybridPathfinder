// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef HYBRIDPATHFINDERPLUGIN_XGridPathfinder_generated_h
#error "XGridPathfinder.generated.h already included, missing '#pragma once' in XGridPathfinder.h"
#endif
#define HYBRIDPATHFINDERPLUGIN_XGridPathfinder_generated_h

#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_17_DELEGATE \
struct _Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms \
{ \
	TArray<FVector2D> DownPath; \
	TArray<FVector2D> RightPath; \
	TArray<FVector2D> LeftPath; \
	TArray<FVector2D> UpPath; \
	float Duration; \
}; \
static inline void FOnOmnidirectionalPathfindingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnOmnidirectionalPathfindingCompleteDelegate, TArray<FVector2D> const& DownPath, TArray<FVector2D> const& RightPath, TArray<FVector2D> const& LeftPath, TArray<FVector2D> const& UpPath, float Duration) \
{ \
	_Script_HybridPathfinderPlugin_eventOnOmnidirectionalPathfindingCompleteDelegate_Parms Parms; \
	Parms.DownPath=DownPath; \
	Parms.RightPath=RightPath; \
	Parms.LeftPath=LeftPath; \
	Parms.UpPath=UpPath; \
	Parms.Duration=Duration; \
	OnOmnidirectionalPathfindingCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_15_DELEGATE \
struct _Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms \
{ \
	TArray<FVector2D> Path; \
	float Duration; \
}; \
static inline void FOnPathfindingWithDensityCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPathfindingWithDensityCompleteDelegate, TArray<FVector2D> const& Path, float Duration) \
{ \
	_Script_HybridPathfinderPlugin_eventOnPathfindingWithDensityCompleteDelegate_Parms Parms; \
	Parms.Path=Path; \
	Parms.Duration=Duration; \
	OnPathfindingWithDensityCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_13_DELEGATE \
struct _Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms \
{ \
	TArray<FVector2D> Path; \
	float Duration; \
}; \
static inline void FOnPathfindingCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPathfindingCompleteDelegate, TArray<FVector2D> const& Path, float Duration) \
{ \
	_Script_HybridPathfinderPlugin_eventOnPathfindingCompleteDelegate_Parms Parms; \
	Parms.Path=Path; \
	Parms.Duration=Duration; \
	OnPathfindingCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_SPARSE_DATA
#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsynchOmnidirectionalPathfind); \
	DECLARE_FUNCTION(execAsyncPathfindWithDirectionalVariety); \
	DECLARE_FUNCTION(execPathfindWithDirectionalVariety); \
	DECLARE_FUNCTION(execAsyncPathfindWithDensity); \
	DECLARE_FUNCTION(execPathfindWithDensityMap); \
	DECLARE_FUNCTION(execAsyncPathfind); \
	DECLARE_FUNCTION(execPathfind);


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsynchOmnidirectionalPathfind); \
	DECLARE_FUNCTION(execAsyncPathfindWithDirectionalVariety); \
	DECLARE_FUNCTION(execPathfindWithDirectionalVariety); \
	DECLARE_FUNCTION(execAsyncPathfindWithDensity); \
	DECLARE_FUNCTION(execPathfindWithDensityMap); \
	DECLARE_FUNCTION(execAsyncPathfind); \
	DECLARE_FUNCTION(execPathfind);


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXGridPathfinder(); \
	friend struct Z_Construct_UClass_UXGridPathfinder_Statics; \
public: \
	DECLARE_CLASS(UXGridPathfinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HybridPathfinderPlugin"), NO_API) \
	DECLARE_SERIALIZER(UXGridPathfinder)


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUXGridPathfinder(); \
	friend struct Z_Construct_UClass_UXGridPathfinder_Statics; \
public: \
	DECLARE_CLASS(UXGridPathfinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HybridPathfinderPlugin"), NO_API) \
	DECLARE_SERIALIZER(UXGridPathfinder)


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXGridPathfinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXGridPathfinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXGridPathfinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXGridPathfinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXGridPathfinder(UXGridPathfinder&&); \
	NO_API UXGridPathfinder(const UXGridPathfinder&); \
public:


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXGridPathfinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXGridPathfinder(UXGridPathfinder&&); \
	NO_API UXGridPathfinder(const UXGridPathfinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXGridPathfinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXGridPathfinder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXGridPathfinder)


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_PRIVATE_PROPERTY_OFFSET
#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_22_PROLOG
#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_PRIVATE_PROPERTY_OFFSET \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_SPARSE_DATA \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_RPC_WRAPPERS \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_INCLASS \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_PRIVATE_PROPERTY_OFFSET \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_SPARSE_DATA \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_INCLASS_NO_PURE_DECLS \
	XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYBRIDPATHFINDERPLUGIN_API UClass* StaticClass<class UXGridPathfinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XGrid_Plugins_Plugins_HybridPathfinderPlugin_Source_HybridPathfinderPlugin_Public_XGridPathfinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
