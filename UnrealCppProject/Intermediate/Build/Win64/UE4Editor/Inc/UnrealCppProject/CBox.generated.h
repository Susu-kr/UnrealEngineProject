// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UNREALCPPPROJECT_CBox_generated_h
#error "CBox.generated.h already included, missing '#pragma once' in CBox.h"
#endif
#define UNREALCPPPROJECT_CBox_generated_h

#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPhysics);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPhysics);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACBox(); \
	friend struct Z_Construct_UClass_ACBox_Statics; \
public: \
	DECLARE_CLASS(ACBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACBox)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACBox(); \
	friend struct Z_Construct_UClass_ACBox_Statics; \
public: \
	DECLARE_CLASS(ACBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACBox)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBox(ACBox&&); \
	NO_API ACBox(const ACBox&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBox(ACBox&&); \
	NO_API ACBox(const ACBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACBox)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACBox, Scene); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACBox, Mesh); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ACBox, Text); }


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_7_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_Collision_CBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
