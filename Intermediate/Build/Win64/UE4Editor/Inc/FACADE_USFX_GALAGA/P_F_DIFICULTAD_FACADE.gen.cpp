// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/P_F_DIFICULTAD_FACADE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_F_DIFICULTAD_FACADE() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AP_F_DIFICULTAD_FACADE();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void AP_F_DIFICULTAD_FACADE::StaticRegisterNativesAP_F_DIFICULTAD_FACADE()
	{
	}
	UClass* Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_NoRegister()
	{
		return AP_F_DIFICULTAD_FACADE::StaticClass();
	}
	struct Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_F_DIFICULTAD_FACADE.h" },
		{ "ModuleRelativePath", "P_F_DIFICULTAD_FACADE.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_F_DIFICULTAD_FACADE>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics::ClassParams = {
		&AP_F_DIFICULTAD_FACADE::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_F_DIFICULTAD_FACADE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_F_DIFICULTAD_FACADE_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_F_DIFICULTAD_FACADE, 2237624792);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<AP_F_DIFICULTAD_FACADE>()
	{
		return AP_F_DIFICULTAD_FACADE::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_F_DIFICULTAD_FACADE(Z_Construct_UClass_AP_F_DIFICULTAD_FACADE, &AP_F_DIFICULTAD_FACADE::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("AP_F_DIFICULTAD_FACADE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_F_DIFICULTAD_FACADE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
