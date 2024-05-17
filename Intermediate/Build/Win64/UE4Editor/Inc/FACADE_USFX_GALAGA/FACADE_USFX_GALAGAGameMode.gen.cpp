// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/FACADE_USFX_GALAGAGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFACADE_USFX_GALAGAGameMode() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
// End Cross Module References
	void AFACADE_USFX_GALAGAGameMode::StaticRegisterNativesAFACADE_USFX_GALAGAGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_NoRegister()
	{
		return AFACADE_USFX_GALAGAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FACADE_USFX_GALAGAGameMode.h" },
		{ "ModuleRelativePath", "FACADE_USFX_GALAGAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFACADE_USFX_GALAGAGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics::ClassParams = {
		&AFACADE_USFX_GALAGAGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFACADE_USFX_GALAGAGameMode, 1637924725);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<AFACADE_USFX_GALAGAGameMode>()
	{
		return AFACADE_USFX_GALAGAGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFACADE_USFX_GALAGAGameMode(Z_Construct_UClass_AFACADE_USFX_GALAGAGameMode, &AFACADE_USFX_GALAGAGameMode::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("AFACADE_USFX_GALAGAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFACADE_USFX_GALAGAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
