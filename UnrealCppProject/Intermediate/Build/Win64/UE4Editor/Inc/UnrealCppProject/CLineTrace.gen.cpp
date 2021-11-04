// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Trace/CLineTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCLineTrace() {}
// Cross Module References
	UNREALCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACLineTrace_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACLineTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics
	{
		struct _Script_UnrealCppProject_eventTraceResult_Parms
		{
			AActor* InActor;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UnrealCppProject_eventTraceResult_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UnrealCppProject_eventTraceResult_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::NewProp_InColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trace/CLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealCppProject, nullptr, "TraceResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_UnrealCppProject_eventTraceResult_Parms), Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACLineTrace::execRestoreColor)
	{
		P_GET_OBJECT(ACPlayer,Z_Param_InPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreColor(Z_Param_InPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACLineTrace::execStartJump)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump(Z_Param_InActor,Z_Param_InColor);
		P_NATIVE_END;
	}
	void ACLineTrace::StaticRegisterNativesACLineTrace()
	{
		UClass* Class = ACLineTrace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RestoreColor", &ACLineTrace::execRestoreColor },
			{ "StartJump", &ACLineTrace::execStartJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics
	{
		struct CLineTrace_eventRestoreColor_Parms
		{
			ACPlayer* InPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::NewProp_InPlayer = { "InPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CLineTrace_eventRestoreColor_Parms, InPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::NewProp_InPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trace/CLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACLineTrace, nullptr, "RestoreColor", nullptr, nullptr, sizeof(CLineTrace_eventRestoreColor_Parms), Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACLineTrace_RestoreColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACLineTrace_RestoreColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACLineTrace_StartJump_Statics
	{
		struct CLineTrace_eventStartJump_Parms
		{
			AActor* InActor;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACLineTrace_StartJump_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CLineTrace_eventStartJump_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACLineTrace_StartJump_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CLineTrace_eventStartJump_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACLineTrace_StartJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACLineTrace_StartJump_Statics::NewProp_InColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACLineTrace_StartJump_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACLineTrace_StartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trace/CLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACLineTrace_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACLineTrace, nullptr, "StartJump", nullptr, nullptr, sizeof(CLineTrace_eventStartJump_Parms), Z_Construct_UFunction_ACLineTrace_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLineTrace_StartJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACLineTrace_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLineTrace_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACLineTrace_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACLineTrace_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACLineTrace_NoRegister()
	{
		return ACLineTrace::StaticClass();
	}
	struct Z_Construct_UClass_ACLineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTraceResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACLineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACLineTrace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACLineTrace_RestoreColor, "RestoreColor" }, // 2400033338
		{ &Z_Construct_UFunction_ACLineTrace_StartJump, "StartJump" }, // 4194771116
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLineTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Trace/CLineTrace.h" },
		{ "ModuleRelativePath", "Trace/CLineTrace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLineTrace_Statics::NewProp_OnTraceResult_MetaData[] = {
		{ "ModuleRelativePath", "Trace/CLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACLineTrace_Statics::NewProp_OnTraceResult = { "OnTraceResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLineTrace, OnTraceResult), Z_Construct_UDelegateFunction_UnrealCppProject_TraceResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACLineTrace_Statics::NewProp_OnTraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLineTrace_Statics::NewProp_OnTraceResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLineTrace_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "CLineTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Trace/CLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLineTrace_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLineTrace, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLineTrace_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLineTrace_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLineTrace_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "CLineTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Trace/CLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLineTrace_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLineTrace, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLineTrace_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLineTrace_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLineTrace_Statics::NewProp_OnTraceResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLineTrace_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLineTrace_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACLineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACLineTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACLineTrace_Statics::ClassParams = {
		&ACLineTrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACLineTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACLineTrace_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACLineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACLineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACLineTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACLineTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACLineTrace, 3215272141);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACLineTrace>()
	{
		return ACLineTrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACLineTrace(Z_Construct_UClass_ACLineTrace, &ACLineTrace::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACLineTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACLineTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
