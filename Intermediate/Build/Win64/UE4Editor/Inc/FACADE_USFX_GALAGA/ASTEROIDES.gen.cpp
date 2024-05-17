// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/ASTEROIDES.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASTEROIDES() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AASTEROIDES_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AASTEROIDES();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void AASTEROIDES::StaticRegisterNativesAASTEROIDES()
	{
	}
	UClass* Z_Construct_UClass_AASTEROIDES_NoRegister()
	{
		return AASTEROIDES::StaticClass();
	}
	struct Z_Construct_UClass_AASTEROIDES_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASTEROIDES_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASTEROIDES_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ASTEROIDES.h" },
		{ "ModuleRelativePath", "ASTEROIDES.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASTEROIDES_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASTEROIDES>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AASTEROIDES_Statics::ClassParams = {
		&AASTEROIDES::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AASTEROIDES_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASTEROIDES_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASTEROIDES()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AASTEROIDES_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AASTEROIDES, 2574422806);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<AASTEROIDES>()
	{
		return AASTEROIDES::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AASTEROIDES(Z_Construct_UClass_AASTEROIDES, &AASTEROIDES::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("AASTEROIDES"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASTEROIDES);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
