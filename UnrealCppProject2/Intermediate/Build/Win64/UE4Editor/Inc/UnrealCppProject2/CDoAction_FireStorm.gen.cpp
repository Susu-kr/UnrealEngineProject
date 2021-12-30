// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCppProject2/Actions/CDoAction_FireStorm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_FireStorm() {}
// Cross Module References
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACDoAction_FireStorm_NoRegister();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACDoAction_FireStorm();
	UNREALCPPPROJECT2_API UClass* Z_Construct_UClass_ACDoAction();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2();
// End Cross Module References
	DEFINE_FUNCTION(ACDoAction_FireStorm::execHitted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hitted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACDoAction_FireStorm::execFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish();
		P_NATIVE_END;
	}
	void ACDoAction_FireStorm::StaticRegisterNativesACDoAction_FireStorm()
	{
		UClass* Class = ACDoAction_FireStorm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finish", &ACDoAction_FireStorm::execFinish },
			{ "Hitted", &ACDoAction_FireStorm::execHitted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACDoAction_FireStorm_Finish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_FireStorm_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction_FireStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_FireStorm_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction_FireStorm, nullptr, "Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_FireStorm_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_FireStorm_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_FireStorm_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_FireStorm_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACDoAction_FireStorm_Hitted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_FireStorm_Hitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction_FireStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_FireStorm_Hitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction_FireStorm, nullptr, "Hitted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_FireStorm_Hitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_FireStorm_Hitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_FireStorm_Hitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_FireStorm_Hitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACDoAction_FireStorm_NoRegister()
	{
		return ACDoAction_FireStorm::StaticClass();
	}
	struct Z_Construct_UClass_ACDoAction_FireStorm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HittedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HittedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDoAction_FireStorm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCppProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACDoAction_FireStorm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACDoAction_FireStorm_Finish, "Finish" }, // 3775202278
		{ &Z_Construct_UFunction_ACDoAction_FireStorm_Hitted, "Hitted" }, // 3366175993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_FireStorm_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CDoAction_FireStorm.h" },
		{ "ModuleRelativePath", "Actions/CDoAction_FireStorm.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_HittedTime_MetaData[] = {
		{ "Category", "CDoAction_FireStorm" },
		{ "ModuleRelativePath", "Actions/CDoAction_FireStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_HittedTime = { "HittedTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction_FireStorm, HittedTime), METADATA_PARAMS(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_HittedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_HittedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CDoAction_FireStorm" },
		{ "ModuleRelativePath", "Actions/CDoAction_FireStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction_FireStorm, Speed), METADATA_PARAMS(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "CDoAction_FireStorm" },
		{ "ModuleRelativePath", "Actions/CDoAction_FireStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction_FireStorm, Distance), METADATA_PARAMS(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "CDoAction_FireStorm" },
		{ "ModuleRelativePath", "Actions/CDoAction_FireStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction_FireStorm, Time), METADATA_PARAMS(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACDoAction_FireStorm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_HittedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_FireStorm_Statics::NewProp_Time,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDoAction_FireStorm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDoAction_FireStorm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDoAction_FireStorm_Statics::ClassParams = {
		&ACDoAction_FireStorm::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACDoAction_FireStorm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_FireStorm_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACDoAction_FireStorm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_FireStorm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDoAction_FireStorm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDoAction_FireStorm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDoAction_FireStorm, 3424135623);
	template<> UNREALCPPPROJECT2_API UClass* StaticClass<ACDoAction_FireStorm>()
	{
		return ACDoAction_FireStorm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDoAction_FireStorm(Z_Construct_UClass_ACDoAction_FireStorm, &ACDoAction_FireStorm::StaticClass, TEXT("/Script/UnrealCppProject2"), TEXT("ACDoAction_FireStorm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDoAction_FireStorm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
