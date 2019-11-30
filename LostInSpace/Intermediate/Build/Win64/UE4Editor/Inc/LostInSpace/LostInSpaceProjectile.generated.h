// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LOSTINSPACE_LostInSpaceProjectile_generated_h
#error "LostInSpaceProjectile.generated.h already included, missing '#pragma once' in LostInSpaceProjectile.h"
#endif
#define LOSTINSPACE_LostInSpaceProjectile_generated_h

#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALostInSpaceProjectile(); \
	friend struct Z_Construct_UClass_ALostInSpaceProjectile_Statics; \
public: \
	DECLARE_CLASS(ALostInSpaceProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LostInSpace"), NO_API) \
	DECLARE_SERIALIZER(ALostInSpaceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALostInSpaceProjectile(); \
	friend struct Z_Construct_UClass_ALostInSpaceProjectile_Statics; \
public: \
	DECLARE_CLASS(ALostInSpaceProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LostInSpace"), NO_API) \
	DECLARE_SERIALIZER(ALostInSpaceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALostInSpaceProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALostInSpaceProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALostInSpaceProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALostInSpaceProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALostInSpaceProjectile(ALostInSpaceProjectile&&); \
	NO_API ALostInSpaceProjectile(const ALostInSpaceProjectile&); \
public:


#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALostInSpaceProjectile(ALostInSpaceProjectile&&); \
	NO_API ALostInSpaceProjectile(const ALostInSpaceProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALostInSpaceProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALostInSpaceProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALostInSpaceProjectile)


#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALostInSpaceProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALostInSpaceProjectile, ProjectileMovement); }


#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_9_PROLOG
#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_RPC_WRAPPERS \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_INCLASS \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_INCLASS_NO_PURE_DECLS \
	LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOSTINSPACE_API UClass* StaticClass<class ALostInSpaceProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostInSpace_Source_LostInSpace_LostInSpaceProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
