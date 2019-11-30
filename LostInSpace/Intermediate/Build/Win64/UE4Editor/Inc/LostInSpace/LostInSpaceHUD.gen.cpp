// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostInSpace/LostInSpaceHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLostInSpaceHUD() {}
// Cross Module References
	LOSTINSPACE_API UClass* Z_Construct_UClass_ALostInSpaceHUD_NoRegister();
	LOSTINSPACE_API UClass* Z_Construct_UClass_ALostInSpaceHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_LostInSpace();
// End Cross Module References
	void ALostInSpaceHUD::StaticRegisterNativesALostInSpaceHUD()
	{
	}
	UClass* Z_Construct_UClass_ALostInSpaceHUD_NoRegister()
	{
		return ALostInSpaceHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALostInSpaceHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALostInSpaceHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LostInSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALostInSpaceHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LostInSpaceHUD.h" },
		{ "ModuleRelativePath", "LostInSpaceHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALostInSpaceHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALostInSpaceHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALostInSpaceHUD_Statics::ClassParams = {
		&ALostInSpaceHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALostInSpaceHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALostInSpaceHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALostInSpaceHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALostInSpaceHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALostInSpaceHUD, 977421228);
	template<> LOSTINSPACE_API UClass* StaticClass<ALostInSpaceHUD>()
	{
		return ALostInSpaceHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALostInSpaceHUD(Z_Construct_UClass_ALostInSpaceHUD, &ALostInSpaceHUD::StaticClass, TEXT("/Script/LostInSpace"), TEXT("ALostInSpaceHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALostInSpaceHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
