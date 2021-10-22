// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Debug/CDrawDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDrawDebug() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACDrawDebug_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACDrawDebug();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACDrawDebug::StaticRegisterNativesACDrawDebug()
	{
	}
	UClass* Z_Construct_UClass_ACDrawDebug_NoRegister()
	{
		return ACDrawDebug::StaticClass();
	}
	struct Z_Construct_UClass_ACDrawDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDrawDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDrawDebug_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/CDrawDebug.h" },
		{ "ModuleRelativePath", "Debug/CDrawDebug.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "DrawDebug" },
		{ "ModuleRelativePath", "Debug/CDrawDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDrawDebug, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "DrawDebug" },
		{ "ModuleRelativePath", "Debug/CDrawDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDrawDebug, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDrawDebug_Statics::NewProp_InitLocation_MetaData[] = {
		{ "Category", "DrawDebug" },
		{ "ModuleRelativePath", "Debug/CDrawDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACDrawDebug_Statics::NewProp_InitLocation = { "InitLocation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InitLocation, ACDrawDebug), STRUCT_OFFSET(ACDrawDebug, InitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACDrawDebug_Statics::NewProp_InitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDrawDebug_Statics::NewProp_InitLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACDrawDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDrawDebug_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDrawDebug_Statics::NewProp_InitLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDrawDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDrawDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDrawDebug_Statics::ClassParams = {
		&ACDrawDebug::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACDrawDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACDrawDebug_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACDrawDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDrawDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDrawDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDrawDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDrawDebug, 3283566880);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACDrawDebug>()
	{
		return ACDrawDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDrawDebug(Z_Construct_UClass_ACDrawDebug, &ACDrawDebug::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACDrawDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDrawDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
