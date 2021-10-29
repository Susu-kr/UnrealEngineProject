// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject/Collision/CParticles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCParticles() {}
// Cross Module References
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACParticles_NoRegister();
	UNREALCPPPROJECT_API UClass* Z_Construct_UClass_ACParticles();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACParticles::execPlayParticle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayParticle(Z_Param_InIndex);
		P_NATIVE_END;
	}
	void ACParticles::StaticRegisterNativesACParticles()
	{
		UClass* Class = ACParticles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayParticle", &ACParticles::execPlayParticle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACParticles_PlayParticle_Statics
	{
		struct CParticles_eventPlayParticle_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACParticles_PlayParticle_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CParticles_eventPlayParticle_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACParticles_PlayParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACParticles_PlayParticle_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACParticles_PlayParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collision/CParticles.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACParticles_PlayParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACParticles, nullptr, "PlayParticle", nullptr, nullptr, sizeof(CParticles_eventPlayParticle_Parms), Z_Construct_UFunction_ACParticles_PlayParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACParticles_PlayParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACParticles_PlayParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACParticles_PlayParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACParticles_PlayParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACParticles_PlayParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACParticles_NoRegister()
	{
		return ACParticles::StaticClass();
	}
	struct Z_Construct_UClass_ACParticles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particles;
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
	UObject* (*const Z_Construct_UClass_ACParticles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACParticles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACParticles_PlayParticle, "PlayParticle" }, // 3100883126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACParticles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collision/CParticles.h" },
		{ "ModuleRelativePath", "Collision/CParticles.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACParticles_Statics::NewProp_Particles_MetaData[] = {
		{ "Category", "CParticles" },
		{ "ModuleRelativePath", "Collision/CParticles.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACParticles_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0040000000030001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Particles, ACParticles), STRUCT_OFFSET(ACParticles, Particles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACParticles_Statics::NewProp_Particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACParticles_Statics::NewProp_Particles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACParticles_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "CParticles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collision/CParticles.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACParticles_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACParticles, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACParticles_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACParticles_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACParticles_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "CParticles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collision/CParticles.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACParticles_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACParticles, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACParticles_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACParticles_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACParticles_Statics::NewProp_Particles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACParticles_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACParticles_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACParticles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACParticles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACParticles_Statics::ClassParams = {
		&ACParticles::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACParticles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACParticles_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACParticles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACParticles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACParticles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACParticles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACParticles, 3342544109);
	template<> UNREALCPPPROJECT_API UClass* StaticClass<ACParticles>()
	{
		return ACParticles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACParticles(Z_Construct_UClass_ACParticles, &ACParticles::StaticClass, TEXT("/Script/UnrealCppProject"), TEXT("ACParticles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACParticles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
