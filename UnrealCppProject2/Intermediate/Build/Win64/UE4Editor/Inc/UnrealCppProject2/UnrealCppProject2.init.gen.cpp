// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCppProject2_init() {}
	UNREALCPPPROJECT2_API UFunction* Z_Construct_UDelegateFunction_UnrealCppProject2_EquipmentDelegate__DelegateSignature();
	UNREALCPPPROJECT2_API UFunction* Z_Construct_UDelegateFunction_UnrealCppProject2_UnequipmentDelegate__DelegateSignature();
	UNREALCPPPROJECT2_API UFunction* Z_Construct_UDelegateFunction_UnrealCppProject2_StateTypeChanged__DelegateSignature();
	UNREALCPPPROJECT2_API UFunction* Z_Construct_UDelegateFunction_UnrealCppProject2_ActionTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealCppProject2()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealCppProject2_EquipmentDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealCppProject2_UnequipmentDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealCppProject2_StateTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealCppProject2_ActionTypeChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealCppProject2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x565AB6E3,
				0x8C0F5556,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
