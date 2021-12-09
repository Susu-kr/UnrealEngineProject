// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject2/Actions/CDoAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction() {}
// Cross Module References
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACDoAction_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACDoAction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	void ACDoAction::StaticRegisterNativesACDoAction()
	{
	}
	UClass* Z_Construct_UClass_ACDoAction_NoRegister()
	{
		return ACDoAction::StaticClass();
	}
	struct Z_Construct_UClass_ACDoAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDoAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CDoAction.h" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CDoAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACDoAction_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CDoAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACDoAction_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "CDoAction" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACDoAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDoAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDoAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDoAction_Statics::ClassParams = {
		&ACDoAction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACDoAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDoAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDoAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDoAction, 2824295876);
	template<> UNREALCPPPROJECT2_API UClass* StaticClass<ACDoAction>()
	{
		return ACDoAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDoAction(Z_Construct_UClass_ACDoAction, &ACDoAction::StaticClass, TEXT("/Script/UnrealCppProject2"), TEXT("ACDoAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDoAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
