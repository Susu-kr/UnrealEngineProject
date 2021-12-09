// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject2/Actions/CAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAttachment() {}
// Cross Module References
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACAttachment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACAttachment::execAttachTo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachTo(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	static FName NAME_ACAttachment_OnEquip = FName(TEXT("OnEquip"));
	void ACAttachment::OnEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACAttachment_OnEquip),NULL);
	}
	static FName NAME_ACAttachment_OnUnequip = FName(TEXT("OnUnequip"));
	void ACAttachment::OnUnequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACAttachment_OnUnequip),NULL);
	}
	void ACAttachment::StaticRegisterNativesACAttachment()
	{
		UClass* Class = ACAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachTo", &ACAttachment::execAttachTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACAttachment_AttachTo_Statics
	{
		struct CAttachment_eventAttachTo_Parms
		{
			FName InSocketName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACAttachment_AttachTo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAttachment_eventAttachTo_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAttachment_AttachTo_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_AttachTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "AttachTo", nullptr, nullptr, sizeof(CAttachment_eventAttachTo_Parms), Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_AttachTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_AttachTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_AttachTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACAttachment_OnUnequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAttachment, nullptr, "OnUnequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAttachment_OnUnequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAttachment_OnUnequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACAttachment_NoRegister()
	{
		return ACAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ACAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_ACAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACAttachment_AttachTo, "AttachTo" }, // 2760863187
		{ &Z_Construct_UFunction_ACAttachment_OnEquip, "OnEquip" }, // 1130013448
		{ &Z_Construct_UFunction_ACAttachment_OnUnequip, "OnUnequip" }, // 2311577543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CAttachment.h" },
		{ "ModuleRelativePath", "Actions/CAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "CAttachment" },
		{ "ModuleRelativePath", "Actions/CAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAttachment, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Statics::NewProp_OwnerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACAttachment_Statics::ClassParams = {
		&ACAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACAttachment, 1564622128);
	template<> UNREALCPPPROJECT2_API UClass* StaticClass<ACAttachment>()
	{
		return ACAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACAttachment(Z_Construct_UClass_ACAttachment, &ACAttachment::StaticClass, TEXT("/Script/UnrealCppProject2"), TEXT("ACAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
