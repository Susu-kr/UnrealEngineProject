// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Collision/CLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCLight() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACLight_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACLight();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACLight::execOnRandomLight)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->OnRandomLight(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACLight::execOffLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACLight::execOnLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLight();
		P_NATIVE_END;
	}
	void ACLight::StaticRegisterNativesACLight()
	{
		UClass* Class = ACLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OffLight", &ACLight::execOffLight },
			{ "OnLight", &ACLight::execOnLight },
			{ "OnRandomLight", &ACLight::execOnRandomLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACLight_OffLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACLight_OffLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACLight_OffLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACLight, nullptr, "OffLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACLight_OffLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLight_OffLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACLight_OffLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACLight_OffLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACLight_OnLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACLight_OnLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACLight_OnLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACLight, nullptr, "OnLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACLight_OnLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLight_OnLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACLight_OnLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACLight_OnLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACLight_OnRandomLight_Statics
	{
		struct CLight_eventOnRandomLight_Parms
		{
			FLinearColor color;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACLight_OnRandomLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CLight_eventOnRandomLight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACLight_OnRandomLight_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CLight_eventOnRandomLight_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACLight_OnRandomLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACLight_OnRandomLight_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACLight_OnRandomLight_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACLight_OnRandomLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACLight_OnRandomLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACLight, nullptr, "OnRandomLight", nullptr, nullptr, sizeof(CLight_eventOnRandomLight_Parms), Z_Construct_UFunction_ACLight_OnRandomLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLight_OnRandomLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACLight_OnRandomLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLight_OnRandomLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACLight_OnRandomLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACLight_OnRandomLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACLight_NoRegister()
	{
		return ACLight::StaticClass();
	}
	struct Z_Construct_UClass_ACLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACLight_OffLight, "OffLight" }, // 3895991705
		{ &Z_Construct_UFunction_ACLight_OnLight, "OnLight" }, // 1135116275
		{ &Z_Construct_UFunction_ACLight_OnRandomLight, "OnRandomLight" }, // 4226412795
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collision/CLight.h" },
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLight_Statics::NewProp_Light2_MetaData[] = {
		{ "Category", "CLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLight_Statics::NewProp_Light2 = { "Light2", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLight, Light2), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLight_Statics::NewProp_Light2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLight_Statics::NewProp_Light2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLight_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "CLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLight_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLight, Light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLight_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLight_Statics::NewProp_Light_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLight_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "CLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLight_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLight, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLight_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLight_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACLight_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "CLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collision/CLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLight_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACLight, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACLight_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACLight_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLight_Statics::NewProp_Light2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLight_Statics::NewProp_Light,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLight_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLight_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACLight_Statics::ClassParams = {
		&ACLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACLight, 1947174362);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACLight>()
	{
		return ACLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACLight(Z_Construct_UClass_ACLight, &ACLight::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
