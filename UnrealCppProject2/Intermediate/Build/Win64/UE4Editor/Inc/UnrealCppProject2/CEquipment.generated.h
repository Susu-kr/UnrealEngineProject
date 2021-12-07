// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCPPPROJECT2_CEquipment_generated_h
#error "CEquipment.generated.h already included, missing '#pragma once' in CEquipment.h"
#endif
#define UNREALCPPPROJECT2_CEquipment_generated_h

#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_SPARSE_DATA
#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_RPC_WRAPPERS \
	virtual void Unequip_Implementation(); \
	virtual void End_Equip_Implementation(); \
	virtual void Begin_Equip_Implementation(); \
	virtual void Equip_Implementation(); \
 \
	DECLARE_FUNCTION(execUnequip); \
	DECLARE_FUNCTION(execEnd_Equip); \
	DECLARE_FUNCTION(execBegin_Equip); \
	DECLARE_FUNCTION(execEquip);


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnequip); \
	DECLARE_FUNCTION(execEnd_Equip); \
	DECLARE_FUNCTION(execBegin_Equip); \
	DECLARE_FUNCTION(execEquip);


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_EVENT_PARMS
#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_CALLBACK_WRAPPERS
#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEquipment(); \
	friend struct Z_Construct_UClass_ACEquipment_Statics; \
public: \
	DECLARE_CLASS(ACEquipment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(ACEquipment)


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_INCLASS \
private: \
	static void StaticRegisterNativesACEquipment(); \
	friend struct Z_Construct_UClass_ACEquipment_Statics; \
public: \
	DECLARE_CLASS(ACEquipment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(ACEquipment)


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACEquipment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEquipment(ACEquipment&&); \
	NO_API ACEquipment(const ACEquipment&); \
public:


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEquipment(ACEquipment&&); \
	NO_API ACEquipment(const ACEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEquipment)


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ACEquipment, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ACEquipment, State); } \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(ACEquipment, Status); }


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_8_PROLOG \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_EVENT_PARMS


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_RPC_WRAPPERS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_CALLBACK_WRAPPERS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_INCLASS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_CALLBACK_WRAPPERS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_INCLASS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT2_API UClass* StaticClass<class ACEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject2_Source_UnrealCppProject2_Actions_CEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
