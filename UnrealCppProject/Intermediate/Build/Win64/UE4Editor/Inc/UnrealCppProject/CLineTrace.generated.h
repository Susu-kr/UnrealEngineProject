// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FLinearColor;
#ifdef UNREALCPPPROJECT_CLineTrace_generated_h
#error "CLineTrace.generated.h already included, missing '#pragma once' in CLineTrace.h"
#endif
#define UNREALCPPPROJECT_CLineTrace_generated_h

#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_7_DELEGATE \
struct _Script_UnrealCppProject_eventTraceResult_Parms \
{ \
	AActor* InActor; \
	FLinearColor InColor; \
}; \
static inline void FTraceResult_DelegateWrapper(const FMulticastScriptDelegate& TraceResult, AActor* InActor, FLinearColor InColor) \
{ \
	_Script_UnrealCppProject_eventTraceResult_Parms Parms; \
	Parms.InActor=InActor; \
	Parms.InColor=InColor; \
	TraceResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_SPARSE_DATA
#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_RPC_WRAPPERS
#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACLineTrace(); \
	friend struct Z_Construct_UClass_ACLineTrace_Statics; \
public: \
	DECLARE_CLASS(ACLineTrace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACLineTrace)


#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACLineTrace(); \
	friend struct Z_Construct_UClass_ACLineTrace_Statics; \
public: \
	DECLARE_CLASS(ACLineTrace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCppProject"), NO_API) \
	DECLARE_SERIALIZER(ACLineTrace)


#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACLineTrace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACLineTrace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLineTrace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLineTrace(ACLineTrace&&); \
	NO_API ACLineTrace(const ACLineTrace&); \
public:


#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLineTrace(ACLineTrace&&); \
	NO_API ACLineTrace(const ACLineTrace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLineTrace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACLineTrace)


#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACLineTrace, Scene); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ACLineTrace, Text); }


#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_9_PROLOG
#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_RPC_WRAPPERS \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_INCLASS \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_SPARSE_DATA \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPPPROJECT_API UClass* StaticClass<class ACLineTrace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCppProject_Source_UnrealCppProject_Trace_CLineTrace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
