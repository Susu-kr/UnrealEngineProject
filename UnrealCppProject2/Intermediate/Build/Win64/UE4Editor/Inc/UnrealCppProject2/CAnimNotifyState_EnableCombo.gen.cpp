// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject2/Notifies/CAnimNotifyState_EnableCombo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotifyState_EnableCombo() {}
// Cross Module References
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCAnimNotifyState_EnableCombo_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCAnimNotifyState_EnableCombo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2();
// End Cross Module References
	void UCAnimNotifyState_EnableCombo::StaticRegisterNativesUCAnimNotifyState_EnableCombo()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotifyState_EnableCombo_NoRegister()
	{
		return UCAnimNotifyState_EnableCombo::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotifyState_EnableCombo.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotifyState_EnableCombo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotifyState_EnableCombo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics::ClassParams = {
		&UCAnimNotifyState_EnableCombo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotifyState_EnableCombo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotifyState_EnableCombo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotifyState_EnableCombo, 2969454949);
	template<> UNREALCPPPROJECT2_API UClass* StaticClass<UCAnimNotifyState_EnableCombo>()
	{
		return UCAnimNotifyState_EnableCombo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotifyState_EnableCombo(Z_Construct_UClass_UCAnimNotifyState_EnableCombo, &UCAnimNotifyState_EnableCombo::StaticClass, TEXT("/Script/UnrealCppProject2"), TEXT("UCAnimNotifyState_EnableCombo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotifyState_EnableCombo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
