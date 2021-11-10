// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/CRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRifle() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACRifle_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACRifle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ACRifle::StaticRegisterNativesACRifle()
	{
	}
	UClass* Z_Construct_UClass_ACRifle_NoRegister()
	{
		return ACRifle::StaticClass();
	}
	struct Z_Construct_UClass_ACRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolsterSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HolsterSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CRifle.h" },
		{ "ModuleRelativePath", "CRifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRifle_Statics::NewProp_HolsterSocket_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "CRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACRifle_Statics::NewProp_HolsterSocket = { "HolsterSocket", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACRifle, HolsterSocket), METADATA_PARAMS(Z_Construct_UClass_ACRifle_Statics::NewProp_HolsterSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACRifle_Statics::NewProp_HolsterSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRifle_Statics::NewProp_HandSocket_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "CRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACRifle_Statics::NewProp_HandSocket = { "HandSocket", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACRifle, HandSocket), METADATA_PARAMS(Z_Construct_UClass_ACRifle_Statics::NewProp_HandSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACRifle_Statics::NewProp_HandSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACRifle_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Rifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACRifle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACRifle, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACRifle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACRifle_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRifle_Statics::NewProp_HolsterSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRifle_Statics::NewProp_HandSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACRifle_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACRifle_Statics::ClassParams = {
		&ACRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACRifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACRifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACRifle, 3121098412);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACRifle>()
	{
		return ACRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACRifle(Z_Construct_UClass_ACRifle, &ACRifle::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif