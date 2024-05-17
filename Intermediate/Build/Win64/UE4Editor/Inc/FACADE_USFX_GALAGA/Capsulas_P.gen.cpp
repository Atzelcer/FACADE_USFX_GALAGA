// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/Capsulas_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulas_P() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_ACapsulas_P_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_ACapsulas_P();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void ACapsulas_P::StaticRegisterNativesACapsulas_P()
	{
	}
	UClass* Z_Construct_UClass_ACapsulas_P_NoRegister()
	{
		return ACapsulas_P::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulas_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulas_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulas_P_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Capsulas_P.h" },
		{ "ModuleRelativePath", "Capsulas_P.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulas_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulas_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulas_P_Statics::ClassParams = {
		&ACapsulas_P::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulas_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulas_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulas_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulas_P, 3052202573);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<ACapsulas_P>()
	{
		return ACapsulas_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulas_P(Z_Construct_UClass_ACapsulas_P, &ACapsulas_P::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("ACapsulas_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulas_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
