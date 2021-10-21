// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Debug/CLogActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCLogActor() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACLogActor_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACLogActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
// End Cross Module References
	void ACLogActor::StaticRegisterNativesACLogActor()
	{
	}
	UClass* Z_Construct_UClass_ACLogActor_NoRegister()
	{
		return ACLogActor::StaticClass();
	}
	struct Z_Construct_UClass_ACLogActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACLogActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLogActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/CLogActor.h" },
		{ "ModuleRelativePath", "Debug/CLogActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACLogActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACLogActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACLogActor_Statics::ClassParams = {
		&ACLogActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACLogActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACLogActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACLogActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACLogActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACLogActor, 572411268);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACLogActor>()
	{
		return ACLogActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACLogActor(Z_Construct_UClass_ACLogActor, &ACLogActor::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACLogActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACLogActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
