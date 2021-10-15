// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Actor/CSpawnActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSpawnActor() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawnActor_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACSpawnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACSpawnActor::execChangeColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeColor();
		P_NATIVE_END;
	}
	void ACSpawnActor::StaticRegisterNativesACSpawnActor()
	{
		UClass* Class = ACSpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeColor", &ACSpawnActor::execChangeColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSpawnActor_ChangeColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSpawnActor_ChangeColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/CSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSpawnActor_ChangeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSpawnActor, nullptr, "ChangeColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSpawnActor_ChangeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSpawnActor_ChangeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSpawnActor_ChangeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACSpawnActor_ChangeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACSpawnActor_NoRegister()
	{
		return ACSpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_ACSpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACSpawnActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACSpawnActor_ChangeColor, "ChangeColor" }, // 2281597278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSpawnActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/CSpawnActor.h" },
		{ "ModuleRelativePath", "Actor/CSpawnActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSpawnActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "CSpawnActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/CSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSpawnActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSpawnActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSpawnActor_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSpawnActor_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSpawnActor_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSpawnActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACSpawnActor_Statics::ClassParams = {
		&ACSpawnActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACSpawnActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSpawnActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSpawnActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSpawnActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACSpawnActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACSpawnActor, 3207128281);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACSpawnActor>()
	{
		return ACSpawnActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACSpawnActor(Z_Construct_UClass_ACSpawnActor, &ACSpawnActor::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACSpawnActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSpawnActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
