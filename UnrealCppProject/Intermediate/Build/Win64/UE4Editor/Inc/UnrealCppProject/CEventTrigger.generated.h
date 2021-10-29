// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALCPPPROJECT_CEventTrigger_generated_h
#error "CEventTrigger.generated.h already included, missing '#pragma once' in CEventTrigger.h"
#endif
#define UNREALCPPPROJECT_CEventTrigger_generated_h

#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEventTrigger(); \
	friend struct Z_Construct_UClass_ACEventTrigger_Statics; \
public: \
	DECLARE_CLASS(ACEventTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACEventTrigger)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACEventTrigger(); \
	friend struct Z_Construct_UClass_ACEventTrigger_Statics; \
public: \
	DECLARE_CLASS(ACEventTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACEventTrigger)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACEventTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACEventTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEventTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEventTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEventTrigger(ACEventTrigger&&); \
	NO_API ACEventTrigger(const ACEventTrigger&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEventTrigger(ACEventTrigger&&); \
	NO_API ACEventTrigger(const ACEventTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEventTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEventTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEventTrigger)


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACEventTrigger, Scene); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(ACEventTrigger, Box); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ACEventTrigger, Text); }


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_7_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACEventTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_Collision_CEventTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
