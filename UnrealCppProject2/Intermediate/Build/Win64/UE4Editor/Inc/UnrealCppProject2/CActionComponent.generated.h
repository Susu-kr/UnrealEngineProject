// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActionType : uint8;
class UCActionData;
#ifdef UNREALCPPPROJECT2_CActionComponent_generated_h
#error "CActionComponent.generated.h already included, missing '#pragma once' in CActionComponent.h"
#endif
#define UNREALCPPPROJECT2_CActionComponent_generated_h

#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_17_DELEGATE \
struct _Script_UnrealCppProject2_eventActionTypeChanged_Parms \
{ \
	EActionType InPrevType; \
	EActionType InNewType; \
}; \
static inline void FActionTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& ActionTypeChanged, EActionType InPrevType, EActionType InNewType) \
{ \
	_Script_UnrealCppProject2_eventActionTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	ActionTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_SPARSE_DATA
#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execIsTwoHandMode); \
	DECLARE_FUNCTION(execIsOneHandMode); \
	DECLARE_FUNCTION(execIsFistMode); \
	DECLARE_FUNCTION(execIsUnarmedMode);


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execIsTwoHandMode); \
	DECLARE_FUNCTION(execIsOneHandMode); \
	DECLARE_FUNCTION(execIsFistMode); \
	DECLARE_FUNCTION(execIsUnarmedMode);


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCActionComponent(); \
	friend struct Z_Construct_UClass_UCActionComponent_Statics; \
public: \
	DECLARE_CLASS(UCActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(UCActionComponent)


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCActionComponent(); \
	friend struct Z_Construct_UClass_UCActionComponent_Statics; \
public: \
	DECLARE_CLASS(UCActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(UCActionComponent)


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCActionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCActionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCActionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCActionComponent(UCActionComponent&&); \
	NO_API UCActionComponent(const UCActionComponent&); \
public:


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCActionComponent(UCActionComponent&&); \
	NO_API UCActionComponent(const UCActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCActionComponent)


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Datas() { return STRUCT_OFFSET(UCActionComponent, Datas); }


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_19_PROLOG
#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_RPC_WRAPPERS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_INCLASS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_INCLASS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT2_API UClass* StaticClass<class UCActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject2_Source_UnrealCppProject2_Components_CActionComponent_h


#define FOREACH_ENUM_EACTIONTYPE(op) \
	op(EActionType::Unarmed) \
	op(EActionType::Fist) \
	op(EActionType::OneHand) \
	op(EActionType::TwoHand) \
	op(EActionType::Max) 

enum class EActionType : uint8;
template<> UNREALCPPPROJECT2_API UEnum* StaticEnum<EActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
