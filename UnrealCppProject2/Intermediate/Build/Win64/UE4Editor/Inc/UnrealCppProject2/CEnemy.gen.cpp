// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject2/Characters/CEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy() {}
// Cross Module References
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACEnemy_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UICharacter_NoRegister();
// End Cross Module References
	void ACEnemy::StaticRegisterNativesACEnemy()
	{
	}
	UClass* Z_Construct_UClass_ACEnemy_NoRegister()
	{
		return ACEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy.h" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACEnemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UICharacter_NoRegister, (int32)VTABLE_OFFSET(ACEnemy, IICharacter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_Statics::ClassParams = {
		&ACEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemy, 1909758104);
	template<> UNREALCPPPROJECT2_API UClass* StaticClass<ACEnemy>()
	{
		return ACEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemy(Z_Construct_UClass_ACEnemy, &ACEnemy::StaticClass, TEXT("/Script/UnrealCppProject2"), TEXT("ACEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
