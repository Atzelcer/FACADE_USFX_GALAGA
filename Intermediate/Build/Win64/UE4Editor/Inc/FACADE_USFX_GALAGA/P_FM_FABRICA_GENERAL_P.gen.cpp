// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/P_FM_FABRICA_GENERAL_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_FM_FABRICA_GENERAL_P() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void AP_FM_FABRICA_GENERAL_P::StaticRegisterNativesAP_FM_FABRICA_GENERAL_P()
	{
	}
	UClass* Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_NoRegister()
	{
		return AP_FM_FABRICA_GENERAL_P::StaticClass();
	}
	struct Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_FM_FABRICA_GENERAL_P.h" },
		{ "ModuleRelativePath", "P_FM_FABRICA_GENERAL_P.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_FM_FABRICA_GENERAL_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics::ClassParams = {
		&AP_FM_FABRICA_GENERAL_P::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_FM_FABRICA_GENERAL_P, 2659869759);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<AP_FM_FABRICA_GENERAL_P>()
	{
		return AP_FM_FABRICA_GENERAL_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_FM_FABRICA_GENERAL_P(Z_Construct_UClass_AP_FM_FABRICA_GENERAL_P, &AP_FM_FABRICA_GENERAL_P::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("AP_FM_FABRICA_GENERAL_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_FM_FABRICA_GENERAL_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
