// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCPPPROJECT_IRifle_generated_h
#error "IRifle.generated.h already included, missing '#pragma once' in IRifle.h"
#endif
#define UNREALCPPPROJECT_IRifle_generated_h

#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_RPC_WRAPPERS
#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALCPPPROJECT_API UIRifle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALCPPPROJECT_API, UIRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALCPPPROJECT_API UIRifle(UIRifle&&); \
	UNREALCPPPROJECT_API UIRifle(const UIRifle&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALCPPPROJECT_API UIRifle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALCPPPROJECT_API UIRifle(UIRifle&&); \
	UNREALCPPPROJECT_API UIRifle(const UIRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALCPPPROJECT_API, UIRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRifle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRifle)


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIRifle(); \
	friend struct Z_Construct_UClass_UIRifle_Statics; \
public: \
	DECLARE_CLASS(UIRifle, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), UNREALCPPPROJECT_API) \
	DECLARE_SERIALIZER(UIRifle)


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIRifle() {} \
public: \
	typedef UIRifle UClassType; \
	typedef IIRifle ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IIRifle() {} \
public: \
	typedef UIRifle UClassType; \
	typedef IIRifle ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_7_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_IRifle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_IRifle_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class UIRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_IRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
