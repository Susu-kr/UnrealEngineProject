// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UNREALCPPPROJECT_CLight_generated_h
#error "CLight.generated.h already included, missing '#pragma once' in CLight.h"
#endif
#define UNREALCPPPROJECT_CLight_generated_h

#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRandomLight); \
	DECLARE_FUNCTION(execOffLight); \
	DECLARE_FUNCTION(execOnLight);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRandomLight); \
	DECLARE_FUNCTION(execOffLight); \
	DECLARE_FUNCTION(execOnLight);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACLight(); \
	friend struct Z_Construct_UClass_ACLight_Statics; \
public: \
	DECLARE_CLASS(ACLight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACLight)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACLight(); \
	friend struct Z_Construct_UClass_ACLight_Statics; \
public: \
	DECLARE_CLASS(ACLight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACLight)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACLight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLight(ACLight&&); \
	NO_API ACLight(const ACLight&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLight(ACLight&&); \
	NO_API ACLight(const ACLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACLight)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACLight, Scene); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ACLight, Text); } \
	FORCEINLINE static uint32 __PPO__Light() { return STRUCT_OFFSET(ACLight, Light); } \
	FORCEINLINE static uint32 __PPO__Light2() { return STRUCT_OFFSET(ACLight, Light2); }


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_7_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_Collision_CLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
