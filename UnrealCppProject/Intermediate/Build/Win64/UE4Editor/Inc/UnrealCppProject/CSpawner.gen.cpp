// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Actor/CSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSpawner() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawner_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawnActor_NoRegister();
// End Cross Module References
	void ACSpawner::StaticRegisterNativesACSpawner()
	{
	}
	UClass* Z_Construct_UClass_ACSpawner_NoRegister()
	{
		return ACSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_spawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/CSpawner.h" },
		{ "ModuleRelativePath", "Actor/CSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSpawner_Statics::NewProp_spawnClass_MetaData[] = {
		{ "Category", "CSpawner" },
		{ "ModuleRelativePath", "Actor/CSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSpawner_Statics::NewProp_spawnClass = { "spawnClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(spawnClass, ACSpawner), STRUCT_OFFSET(ACSpawner, spawnClass), Z_Construct_UClass_ACSpawnActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACSpawner_Statics::NewProp_spawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSpawner_Statics::NewProp_spawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSpawner_Statics::NewProp_spawnClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACSpawner_Statics::ClassParams = {
		&ACSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACSpawner, 461279833);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACSpawner>()
	{
		return ACSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACSpawner(Z_Construct_UClass_ACSpawner, &ACSpawner::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
