// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
#ifdef UNREALCPPPROJECT2_CStateComponent_generated_h
#error "CStateComponent.generated.h already included, missing '#pragma once' in CStateComponent.h"
#endif
#define UNREALCPPPROJECT2_CStateComponent_generated_h

#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_16_DELEGATE \
struct _Script_UnrealCppProject2_eventStateTypeChanged_Parms \
{ \
	EStateType InPrevType; \
	EStateType InNewType; \
}; \
static inline void FStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTypeChanged, EStateType InPrevType, EStateType InNewType) \
{ \
	_Script_UnrealCppProject2_eventStateTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	StateTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_SPARSE_DATA
#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBackstepMode); \
	DECLARE_FUNCTION(execIsRollMode); \
	DECLARE_FUNCTION(execIsIdleMode);


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBackstepMode); \
	DECLARE_FUNCTION(execIsRollMode); \
	DECLARE_FUNCTION(execIsIdleMode);


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public:


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCStateComponent)


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_18_PROLOG
#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_RPC_WRAPPERS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_INCLASS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_INCLASS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT2_API UClass* StaticClass<class UCStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject2_Source_UnrealCppProject2_Components_CStateComponent_h


#define FOREACH_ENUM_ESTATETYPE(op) \
	op(EStateType::Idle) \
	op(EStateType::Roll) \
	op(EStateType::Backstep) \
	op(EStateType::Max) 

enum class EStateType : uint8;
template<> UNREALCPPPROJECT2_API UEnum* StaticEnum<EStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
