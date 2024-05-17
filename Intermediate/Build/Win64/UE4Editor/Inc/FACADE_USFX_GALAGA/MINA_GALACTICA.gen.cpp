// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/MINA_GALACTICA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMINA_GALACTICA() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AMINA_GALACTICA_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AMINA_GALACTICA();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void AMINA_GALACTICA::StaticRegisterNativesAMINA_GALACTICA()
	{
	}
	UClass* Z_Construct_UClass_AMINA_GALACTICA_NoRegister()
	{
		return AMINA_GALACTICA::StaticClass();
	}
	struct Z_Construct_UClass_AMINA_GALACTICA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMINA_GALACTICA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMINA_GALACTICA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MINA_GALACTICA.h" },
		{ "ModuleRelativePath", "MINA_GALACTICA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMINA_GALACTICA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMINA_GALACTICA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMINA_GALACTICA_Statics::ClassParams = {
		&AMINA_GALACTICA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMINA_GALACTICA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMINA_GALACTICA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMINA_GALACTICA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMINA_GALACTICA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMINA_GALACTICA, 904013453);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<AMINA_GALACTICA>()
	{
		return AMINA_GALACTICA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMINA_GALACTICA(Z_Construct_UClass_AMINA_GALACTICA, &AMINA_GALACTICA::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("AMINA_GALACTICA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMINA_GALACTICA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
