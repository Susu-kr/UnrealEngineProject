// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UNREALCPPPROJECT_CSpotLight_generated_h
#error "CSpotLight.generated.h already included, missing '#pragma once' in CSpotLight.h"
#endif
#define UNREALCPPPROJECT_CSpotLight_generated_h

#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLightColor);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLightColor);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSpotLight(); \
	friend struct Z_Construct_UClass_ACSpotLight_Statics; \
public: \
	DECLARE_CLASS(ACSpotLight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACSpotLight)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACSpotLight(); \
	friend struct Z_Construct_UClass_ACSpotLight_Statics; \
public: \
	DECLARE_CLASS(ACSpotLight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACSpotLight)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSpotLight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSpotLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSpotLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSpotLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSpotLight(ACSpotLight&&); \
	NO_API ACSpotLight(const ACSpotLight&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSpotLight(ACSpotLight&&); \
	NO_API ACSpotLight(const ACSpotLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSpotLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSpotLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSpotLight)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACSpotLight, Scene); } \
	FORCEINLINE static uint32 __PPO__SpotLights() { return STRUCT_OFFSET(ACSpotLight, SpotLights); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ACSpotLight, Text); }


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_7_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACSpotLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_Collision_CSpotLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
