// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject2/Components/CMontagesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMontagesComponent() {}
// Cross Module References
	UNREALCPPPROJECT2_API UScriptStruct* Z_Construct_UScriptStruct_FMontageData();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UNREALCPPPROJECT2_API UEnum* Z_Construct_UEnum_UnrealCppProject2_EStateType();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCMontagesComponent_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCMontagesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FMontageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALCPPPROJECT2_API uint32 Get_Z_Construct_UScriptStruct_FMontageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontageData, Z_Construct_UPackage__Script_UnrealCppProject2(), TEXT("MontageData"), sizeof(FMontageData), Get_Z_Construct_UScriptStruct_FMontageData_Hash());
	}
	return Singleton;
}
template<> UNREALCPPPROJECT2_API UScriptStruct* StaticStruct<FMontageData>()
{
	return FMontageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMontageData(FMontageData::StaticStruct, TEXT("/Script/UnrealCppProject2"), TEXT("MontageData"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealCppProject2_StaticRegisterNativesFMontageData
{
	FScriptStruct_UnrealCppProject2_StaticRegisterNativesFMontageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MontageData")),new UScriptStruct::TCppStructOps<FMontageData>);
	}
} ScriptStruct_UnrealCppProject2_StaticRegisterNativesFMontageData;
	struct Z_Construct_UScriptStruct_FMontageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/CMontagesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMontageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_StartSection_MetaData[] = {
		{ "Category", "MontageData" },
		{ "ModuleRelativePath", "Components/CMontagesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontageData, StartSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_StartSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_StartSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_PlayRatio_MetaData[] = {
		{ "Category", "MontageData" },
		{ "ModuleRelativePath", "Components/CMontagesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_PlayRatio = { "PlayRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontageData, PlayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_PlayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_PlayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "MontageData" },
		{ "ModuleRelativePath", "Components/CMontagesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontageData, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "MontageData" },
		{ "ModuleRelativePath", "Components/CMontagesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontageData, Type), Z_Construct_UEnum_UnrealCppProject2_EStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_PlayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageData_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MontageData",
		sizeof(FMontageData),
		alignof(FMontageData),
		Z_Construct_UScriptStruct_FMontageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMontageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMontageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCppProject2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MontageData"), sizeof(FMontageData), Get_Z_Construct_UScriptStruct_FMontageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMontageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMontageData_Hash() { return 1126070245U; }
	void UCMontagesComponent::StaticRegisterNativesUCMontagesComponent()
	{
	}
	UClass* Z_Construct_UClass_UCMontagesComponent_NoRegister()
	{
		return UCMontagesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCMontagesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCMontagesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMontagesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CMontagesComponent.h" },
		{ "ModuleRelativePath", "Components/CMontagesComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMontagesComponent_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Components/CMontagesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCMontagesComponent_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCMontagesComponent, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCMontagesComponent_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCMontagesComponent_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCMontagesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMontagesComponent_Statics::NewProp_DataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCMontagesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCMontagesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCMontagesComponent_Statics::ClassParams = {
		&UCMontagesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCMontagesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCMontagesComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCMontagesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCMontagesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCMontagesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCMontagesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCMontagesComponent, 386775125);
	template<> UNREALCPPPROJECT2_API UClass* StaticClass<UCMontagesComponent>()
	{
		return UCMontagesComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCMontagesComponent(Z_Construct_UClass_UCMontagesComponent, &UCMontagesComponent::StaticClass, TEXT("/Script/UnrealCppProject2"), TEXT("UCMontagesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCMontagesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
