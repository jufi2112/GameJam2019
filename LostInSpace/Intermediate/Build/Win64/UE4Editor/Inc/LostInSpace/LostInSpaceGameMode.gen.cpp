// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostInSpace/LostInSpaceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLostInSpaceGameMode() {}
// Cross Module References
	LOSTINSPACE_API UClass* Z_Construct_UClass_ALostInSpaceGameMode_NoRegister();
	LOSTINSPACE_API UClass* Z_Construct_UClass_ALostInSpaceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LostInSpace();
// End Cross Module References
	void ALostInSpaceGameMode::StaticRegisterNativesALostInSpaceGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALostInSpaceGameMode_NoRegister()
	{
		return ALostInSpaceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALostInSpaceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALostInSpaceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LostInSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALostInSpaceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LostInSpaceGameMode.h" },
		{ "ModuleRelativePath", "LostInSpaceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALostInSpaceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALostInSpaceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALostInSpaceGameMode_Statics::ClassParams = {
		&ALostInSpaceGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ALostInSpaceGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALostInSpaceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALostInSpaceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALostInSpaceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALostInSpaceGameMode, 9086025);
	template<> LOSTINSPACE_API UClass* StaticClass<ALostInSpaceGameMode>()
	{
		return ALostInSpaceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALostInSpaceGameMode(Z_Construct_UClass_ALostInSpaceGameMode, &ALostInSpaceGameMode::StaticClass, TEXT("/Script/LostInSpace"), TEXT("ALostInSpaceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALostInSpaceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
