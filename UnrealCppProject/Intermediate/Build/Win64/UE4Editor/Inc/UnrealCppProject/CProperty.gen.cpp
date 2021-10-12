// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Actor/CProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCProperty() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACProperty_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACProperty();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
// End Cross Module References
	void ACProperty::StaticRegisterNativesACProperty()
	{
	}
	UClass* Z_Construct_UClass_ACProperty_NoRegister()
	{
		return ACProperty::StaticClass();
	}
	struct Z_Construct_UClass_ACProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACProperty_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/CProperty.h" },
		{ "ModuleRelativePath", "Actor/CProperty.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACProperty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACProperty_Statics::ClassParams = {
		&ACProperty::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACProperty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACProperty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACProperty, 124191877);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACProperty>()
	{
		return ACProperty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACProperty(Z_Construct_UClass_ACProperty, &ACProperty::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
