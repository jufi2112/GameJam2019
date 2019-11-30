// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOSTINSPACE_LostInSpaceCharacter_generated_h
#error "LostInSpaceCharacter.generated.h already included, missing '#pragma once' in LostInSpaceCharacter.h"
#endif
#define LOSTINSPACE_LostInSpaceCharacter_generated_h

#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_RPC_WRAPPERS
#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALostInSpaceCharacter(); \
	friend struct Z_Construct_UClass_ALostInSpaceCharacter_Statics; \
public: \
	DECLARE_CLASS(ALostInSpaceCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LostInSpace"), NO_API) \
	DECLARE_SERIALIZER(ALostInSpaceCharacter)


#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALostInSpaceCharacter(); \
	friend struct Z_Construct_UClass_ALostInSpaceCharacter_Statics; \
public: \
	DECLARE_CLASS(ALostInSpaceCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LostInSpace"), NO_API) \
	DECLARE_SERIALIZER(ALostInSpaceCharacter)


#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALostInSpaceCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALostInSpaceCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALostInSpaceCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALostInSpaceCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALostInSpaceCharacter(ALostInSpaceCharacter&&); \
	NO_API ALostInSpaceCharacter(const ALostInSpaceCharacter&); \
public:


#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALostInSpaceCharacter(ALostInSpaceCharacter&&); \
	NO_API ALostInSpaceCharacter(const ALostInSpaceCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALostInSpaceCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALostInSpaceCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALostInSpaceCharacter)


#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ALostInSpaceCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ALostInSpaceCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ALostInSpaceCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ALostInSpaceCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ALostInSpaceCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ALostInSpaceCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ALostInSpaceCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ALostInSpaceCharacter, L_MotionController); }


#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_11_PROLOG
#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_RPC_WRAPPERS \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_INCLASS \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_INCLASS_NO_PURE_DECLS \
	LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOSTINSPACE_API UClass* StaticClass<class ALostInSpaceCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostInSpace_Source_LostInSpace_LostInSpaceCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
