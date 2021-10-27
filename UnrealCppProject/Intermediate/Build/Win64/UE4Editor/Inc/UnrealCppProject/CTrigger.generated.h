// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALCPPPROJECT_CTrigger_generated_h
#error "CTrigger.generated.h already included, missing '#pragma once' in CTrigger.h"
#endif
#define UNREALCPPPROJECT_CTrigger_generated_h

#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACTrigger(); \
	friend struct Z_Construct_UClass_ACTrigger_Statics; \
public: \
	DECLARE_CLASS(ACTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACTrigger)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACTrigger(); \
	friend struct Z_Construct_UClass_ACTrigger_Statics; \
public: \
	DECLARE_CLASS(ACTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACTrigger)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACTrigger(ACTrigger&&); \
	NO_API ACTrigger(const ACTrigger&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACTrigger(ACTrigger&&); \
	NO_API ACTrigger(const ACTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACTrigger)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACTrigger, Scene); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(ACTrigger, Box); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ACTrigger, Text); }


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_10_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_Collision_CTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
