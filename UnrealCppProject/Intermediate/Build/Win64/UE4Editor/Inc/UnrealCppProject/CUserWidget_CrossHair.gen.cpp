// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Widgets/CUserWidget_CrossHair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_CrossHair() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_UCUserWidget_CrossHair_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_UCUserWidget_CrossHair();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
// End Cross Module References
	static FName NAME_UCUserWidget_CrossHair_OffFocus = FName(TEXT("OffFocus"));
	void UCUserWidget_CrossHair::OffFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_CrossHair_OffFocus),NULL);
	}
	static FName NAME_UCUserWidget_CrossHair_OnFocus = FName(TEXT("OnFocus"));
	void UCUserWidget_CrossHair::OnFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_CrossHair_OnFocus),NULL);
	}
	void UCUserWidget_CrossHair::StaticRegisterNativesUCUserWidget_CrossHair()
	{
	}
	struct Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_CrossHair.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_CrossHair, nullptr, "OffFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_CrossHair.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_CrossHair, nullptr, "OnFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUserWidget_CrossHair_NoRegister()
	{
		return UCUserWidget_CrossHair::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_CrossHair_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_CrossHair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUserWidget_CrossHair_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_CrossHair_OffFocus, "OffFocus" }, // 3912595394
		{ &Z_Construct_UFunction_UCUserWidget_CrossHair_OnFocus, "OnFocus" }, // 1401249257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_CrossHair_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CUserWidget_CrossHair.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_CrossHair.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_CrossHair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_CrossHair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_CrossHair_Statics::ClassParams = {
		&UCUserWidget_CrossHair::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_CrossHair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_CrossHair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_CrossHair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_CrossHair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_CrossHair, 2439769032);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<UCUserWidget_CrossHair>()
	{
		return UCUserWidget_CrossHair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_CrossHair(Z_Construct_UClass_UCUserWidget_CrossHair, &UCUserWidget_CrossHair::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("UCUserWidget_CrossHair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_CrossHair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
