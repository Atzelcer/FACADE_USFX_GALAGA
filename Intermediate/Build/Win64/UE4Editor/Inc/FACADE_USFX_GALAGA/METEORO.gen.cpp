// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/METEORO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMETEORO() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AMETEORO_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AMETEORO();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void AMETEORO::StaticRegisterNativesAMETEORO()
	{
	}
	UClass* Z_Construct_UClass_AMETEORO_NoRegister()
	{
		return AMETEORO::StaticClass();
	}
	struct Z_Construct_UClass_AMETEORO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMETEORO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMETEORO_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "METEORO.h" },
		{ "ModuleRelativePath", "METEORO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMETEORO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMETEORO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMETEORO_Statics::ClassParams = {
		&AMETEORO::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMETEORO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMETEORO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMETEORO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMETEORO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMETEORO, 3665755809);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<AMETEORO>()
	{
		return AMETEORO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMETEORO(Z_Construct_UClass_AMETEORO, &AMETEORO::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("AMETEORO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMETEORO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
