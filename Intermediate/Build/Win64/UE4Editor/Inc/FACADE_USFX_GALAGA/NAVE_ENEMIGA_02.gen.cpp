// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/NAVE_ENEMIGA_02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNAVE_ENEMIGA_02() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_ANAVE_ENEMIGA_02_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_ANAVE_ENEMIGA_02();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_ANAVE_ENEMIGA_P();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void ANAVE_ENEMIGA_02::StaticRegisterNativesANAVE_ENEMIGA_02()
	{
	}
	UClass* Z_Construct_UClass_ANAVE_ENEMIGA_02_NoRegister()
	{
		return ANAVE_ENEMIGA_02::StaticClass();
	}
	struct Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANAVE_ENEMIGA_P,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NAVE_ENEMIGA_02.h" },
		{ "ModuleRelativePath", "NAVE_ENEMIGA_02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANAVE_ENEMIGA_02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics::ClassParams = {
		&ANAVE_ENEMIGA_02::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANAVE_ENEMIGA_02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANAVE_ENEMIGA_02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANAVE_ENEMIGA_02, 1132805265);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<ANAVE_ENEMIGA_02>()
	{
		return ANAVE_ENEMIGA_02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANAVE_ENEMIGA_02(Z_Construct_UClass_ANAVE_ENEMIGA_02, &ANAVE_ENEMIGA_02::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("ANAVE_ENEMIGA_02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANAVE_ENEMIGA_02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
