// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject2/Widgets/CUserWidget_ActionList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_ActionList() {}
// Cross Module References
	UNREALCPPPROJECT2_API UFunction* Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2();
	UNREALCPPPROJECT2_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidget_Action_Data();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCUserWidget_ActionList_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCUserWidget_ActionList();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealCppProject2, nullptr, "UserWidget_ActionItem_Clicked__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UnrealCppProject2_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FUserWidget_Action_Data::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALCPPPROJECT2_API uint32 Get_Z_Construct_UScriptStruct_FUserWidget_Action_Data_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserWidget_Action_Data, Z_Construct_UPackage__Script_UnrealCppProject2(), TEXT("UserWidget_Action_Data"), sizeof(FUserWidget_Action_Data), Get_Z_Construct_UScriptStruct_FUserWidget_Action_Data_Hash());
	}
	return Singleton;
}
template<> UNREALCPPPROJECT2_API UScriptStruct* StaticStruct<FUserWidget_Action_Data>()
{
	return FUserWidget_Action_Data::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserWidget_Action_Data(FUserWidget_Action_Data::StaticStruct, TEXT("/Script/UnrealCppProject2"), TEXT("UserWidget_Action_Data"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealCppProject2_StaticRegisterNativesFUserWidget_Action_Data
{
	FScriptStruct_UnrealCppProject2_StaticRegisterNativesFUserWidget_Action_Data()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserWidget_Action_Data")),new UScriptStruct::TCppStructOps<FUserWidget_Action_Data>);
	}
} ScriptStruct_UnrealCppProject2_StaticRegisterNativesFUserWidget_Action_Data;
	struct Z_Construct_UScriptStruct_FUserWidget_Action_Data_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidget_Action_Data_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserWidget_Action_Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserWidget_Action_Data>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserWidget_Action_Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
		nullptr,
		&NewStructOps,
		"UserWidget_Action_Data",
		sizeof(FUserWidget_Action_Data),
		alignof(FUserWidget_Action_Data),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidget_Action_Data_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidget_Action_Data_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserWidget_Action_Data()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserWidget_Action_Data_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCppProject2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserWidget_Action_Data"), sizeof(FUserWidget_Action_Data), Get_Z_Construct_UScriptStruct_FUserWidget_Action_Data_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserWidget_Action_Data_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserWidget_Action_Data_Hash() { return 4138742190U; }
	void UCUserWidget_ActionList::StaticRegisterNativesUCUserWidget_ActionList()
	{
	}
	UClass* Z_Construct_UClass_UCUserWidget_ActionList_NoRegister()
	{
		return UCUserWidget_ActionList::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_ActionList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_ActionList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_ActionList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CUserWidget_ActionList.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionList.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_ActionList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_ActionList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_ActionList_Statics::ClassParams = {
		&UCUserWidget_ActionList::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_ActionList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_ActionList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_ActionList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_ActionList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_ActionList, 2597947416);
	template<> UNREALCPPPROJECT2_API UClass* StaticClass<UCUserWidget_ActionList>()
	{
		return UCUserWidget_ActionList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_ActionList(Z_Construct_UClass_UCUserWidget_ActionList, &UCUserWidget_ActionList::StaticClass, TEXT("/Script/UnrealCppProject2"), TEXT("UCUserWidget_ActionList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_ActionList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
