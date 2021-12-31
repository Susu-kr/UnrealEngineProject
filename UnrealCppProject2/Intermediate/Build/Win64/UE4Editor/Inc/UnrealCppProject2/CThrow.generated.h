// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UPrimitiveComponent;
class AActor;
#ifdef UNREALCPPPROJECT2_CThrow_generated_h
#error "CThrow.generated.h already included, missing '#pragma once' in CThrow.h"
#endif
#define UNREALCPPPROJECT2_CThrow_generated_h

#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_7_DELEGATE \
struct _Script_UnrealCppProject2_eventThrowBeginOverlap_Parms \
{ \
	FHitResult InHitResult; \
}; \
static inline void FThrowBeginOverlap_DelegateWrapper(const FMulticastScriptDelegate& ThrowBeginOverlap, FHitResult InHitResult) \
{ \
	_Script_UnrealCppProject2_eventThrowBeginOverlap_Parms Parms; \
	Parms.InHitResult=InHitResult; \
	ThrowBeginOverlap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_SPARSE_DATA
#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACThrow(); \
	friend struct Z_Construct_UClass_ACThrow_Statics; \
public: \
	DECLARE_CLASS(ACThrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(ACThrow)


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACThrow(); \
	friend struct Z_Construct_UClass_ACThrow_Statics; \
public: \
	DECLARE_CLASS(ACThrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), NO_API) \
	DECLARE_SERIALIZER(ACThrow)


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACThrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACThrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACThrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACThrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACThrow(ACThrow&&); \
	NO_API ACThrow(const ACThrow&); \
public:


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACThrow(ACThrow&&); \
	NO_API ACThrow(const ACThrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACThrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACThrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACThrow)


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Explosion() { return STRUCT_OFFSET(ACThrow, Explosion); } \
	FORCEINLINE static uint32 __PPO__ExplosionTransform() { return STRUCT_OFFSET(ACThrow, ExplosionTransform); } \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(ACThrow, Sphere); } \
	FORCEINLINE static uint32 __PPO__Particle() { return STRUCT_OFFSET(ACThrow, Particle); } \
	FORCEINLINE static uint32 __PPO__Projectile() { return STRUCT_OFFSET(ACThrow, Projectile); }


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_9_PROLOG
#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_RPC_WRAPPERS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_INCLASS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT2_API UClass* StaticClass<class ACThrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject2_Source_UnrealCppProject2_Actions_CThrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
