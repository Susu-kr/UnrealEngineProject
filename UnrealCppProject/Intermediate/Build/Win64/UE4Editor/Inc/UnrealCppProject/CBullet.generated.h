// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREALCPPPROJECT_CBullet_generated_h
#error "CBullet.generated.h already included, missing '#pragma once' in CBullet.h"
#endif
#define UNREALCPPPROJECT_CBullet_generated_h

#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACBullet(); \
	friend struct Z_Construct_UClass_ACBullet_Statics; \
public: \
	DECLARE_CLASS(ACBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACBullet)


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACBullet(); \
	friend struct Z_Construct_UClass_ACBullet_Statics; \
public: \
	DECLARE_CLASS(ACBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACBullet)


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBullet(ACBullet&&); \
	NO_API ACBullet(const ACBullet&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBullet(ACBullet&&); \
	NO_API ACBullet(const ACBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACBullet)


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACBullet, Mesh); } \
	FORCEINLINE static uint32 __PPO__Projectile() { return STRUCT_OFFSET(ACBullet, Projectile); }


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_7_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_CBullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_CBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
