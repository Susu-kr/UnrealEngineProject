// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Actor/CSpawnActor_Sphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSpawnActor_Sphere() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawnActor_Sphere_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawnActor_Sphere();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawnActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
// End Cross Module References
	void ACSpawnActor_Sphere::StaticRegisterNativesACSpawnActor_Sphere()
	{
	}
	UClass* Z_Construct_UClass_ACSpawnActor_Sphere_NoRegister()
	{
		return ACSpawnActor_Sphere::StaticClass();
	}
	struct Z_Construct_UClass_ACSpawnActor_Sphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSpawnActor_Sphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACSpawnActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSpawnActor_Sphere_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actor/CSpawnActor_Sphere.h" },
		{ "ModuleRelativePath", "Actor/CSpawnActor_Sphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSpawnActor_Sphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSpawnActor_Sphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACSpawnActor_Sphere_Statics::ClassParams = {
		&ACSpawnActor_Sphere::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACSpawnActor_Sphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSpawnActor_Sphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSpawnActor_Sphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACSpawnActor_Sphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACSpawnActor_Sphere, 1378667509);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACSpawnActor_Sphere>()
	{
		return ACSpawnActor_Sphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACSpawnActor_Sphere(Z_Construct_UClass_ACSpawnActor_Sphere, &ACSpawnActor_Sphere::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACSpawnActor_Sphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSpawnActor_Sphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
