// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_USFX_GALAGA/OBSTACULOS_ESPACIALES_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOBSTACULOS_ESPACIALES_P() {}
// Cross Module References
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_NoRegister();
	FACADE_USFX_GALAGA_API UClass* Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_USFX_GALAGA();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AOBSTACULOS_ESPACIALES_P::StaticRegisterNativesAOBSTACULOS_ESPACIALES_P()
	{
	}
	UClass* Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_NoRegister()
	{
		return AOBSTACULOS_ESPACIALES_P::StaticClass();
	}
	struct Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaulSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaulSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_Estructura_Espacial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Estructura_Espacial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colision_Estructura_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colision_Estructura;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SonidoColision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SonidoColision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticulaColision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticulaColision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_USFX_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OBSTACULOS_ESPACIALES_P.h" },
		{ "ModuleRelativePath", "OBSTACULOS_ESPACIALES_P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_DefaulSceneRoot_MetaData[] = {
		{ "Category", "OBSTACULOS_ESPACIALES_P" },
		{ "Comment", "//Componente de escena que sirve como ra?z del actor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OBSTACULOS_ESPACIALES_P.h" },
		{ "ToolTip", "Componente de escena que sirve como ra?z del actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_DefaulSceneRoot = { "DefaulSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOBSTACULOS_ESPACIALES_P, DefaulSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_DefaulSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_DefaulSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Mesh_Estructura_Espacial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "//Componente de malla est?tica y lo adjunta al componente ra?z\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OBSTACULOS_ESPACIALES_P.h" },
		{ "ToolTip", "Componente de malla est?tica y lo adjunta al componente ra?z" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Mesh_Estructura_Espacial = { "Mesh_Estructura_Espacial", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOBSTACULOS_ESPACIALES_P, Mesh_Estructura_Espacial), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Mesh_Estructura_Espacial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Mesh_Estructura_Espacial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Colision_Estructura_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "//Componente de colisi?n de caja y lo adjunta al componente ra?z\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OBSTACULOS_ESPACIALES_P.h" },
		{ "ToolTip", "Componente de colisi?n de caja y lo adjunta al componente ra?z" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Colision_Estructura = { "Colision_Estructura", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOBSTACULOS_ESPACIALES_P, Colision_Estructura), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Colision_Estructura_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Colision_Estructura_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_SonidoColision_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Componente de sonido que se activa cuando hay una colision\n" },
		{ "ModuleRelativePath", "OBSTACULOS_ESPACIALES_P.h" },
		{ "ToolTip", "Componente de sonido que se activa cuando hay una colision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_SonidoColision = { "SonidoColision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOBSTACULOS_ESPACIALES_P, SonidoColision), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_SonidoColision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_SonidoColision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_ParticulaColision_MetaData[] = {
		{ "Category", "Particula" },
		{ "Comment", "// Particula que se activa cuando hay una colision\n" },
		{ "ModuleRelativePath", "OBSTACULOS_ESPACIALES_P.h" },
		{ "ToolTip", "Particula que se activa cuando hay una colision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_ParticulaColision = { "ParticulaColision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOBSTACULOS_ESPACIALES_P, ParticulaColision), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_ParticulaColision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_ParticulaColision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_DefaulSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Mesh_Estructura_Espacial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_Colision_Estructura,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_SonidoColision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::NewProp_ParticulaColision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOBSTACULOS_ESPACIALES_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::ClassParams = {
		&AOBSTACULOS_ESPACIALES_P::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOBSTACULOS_ESPACIALES_P, 3155351345);
	template<> FACADE_USFX_GALAGA_API UClass* StaticClass<AOBSTACULOS_ESPACIALES_P>()
	{
		return AOBSTACULOS_ESPACIALES_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOBSTACULOS_ESPACIALES_P(Z_Construct_UClass_AOBSTACULOS_ESPACIALES_P, &AOBSTACULOS_ESPACIALES_P::StaticClass, TEXT("/Script/FACADE_USFX_GALAGA"), TEXT("AOBSTACULOS_ESPACIALES_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOBSTACULOS_ESPACIALES_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
