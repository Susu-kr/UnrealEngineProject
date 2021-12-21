// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCPPPROJECT2_ICharacter_generated_h
#error "ICharacter.generated.h already included, missing '#pragma once' in ICharacter.h"
#endif
#define UNREALCPPPROJECT2_ICharacter_generated_h

#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_SPARSE_DATA
#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_RPC_WRAPPERS
#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALCPPPROJECT2_API UICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALCPPPROJECT2_API, UICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALCPPPROJECT2_API UICharacter(UICharacter&&); \
	UNREALCPPPROJECT2_API UICharacter(const UICharacter&); \
public:


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALCPPPROJECT2_API UICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALCPPPROJECT2_API UICharacter(UICharacter&&); \
	UNREALCPPPROJECT2_API UICharacter(const UICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALCPPPROJECT2_API, UICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICharacter)


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUICharacter(); \
	friend struct Z_Construct_UClass_UICharacter_Statics; \
public: \
	DECLARE_CLASS(UICharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealCppProject2"), UNREALCPPPROJECT2_API) \
	DECLARE_SERIALIZER(UICharacter)


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_GENERATED_UINTERFACE_BODY() \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_GENERATED_UINTERFACE_BODY() \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IICharacter() {} \
public: \
	typedef UICharacter UClassType; \
	typedef IICharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IICharacter() {} \
public: \
	typedef UICharacter UClassType; \
	typedef IICharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_7_PROLOG
#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_RPC_WRAPPERS \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_SPARSE_DATA \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT2_API UClass* StaticClass<class UICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject2_Source_UnrealCppProject2_Characters_ICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
