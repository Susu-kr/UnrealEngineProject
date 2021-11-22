// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UNREALCPPPROJECT_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define UNREALCPPPROJECT_CPlayer_generated_h

#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeColor);


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeColor);


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_EVENT_PARMS
#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_CALLBACK_WRAPPERS
#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__CrossHairClass() { return STRUCT_OFFSET(ACPlayer, CrossHairClass); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACPlayer, Camera); }


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_9_PROLOG \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_EVENT_PARMS


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_CALLBACK_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_CALLBACK_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_CPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
