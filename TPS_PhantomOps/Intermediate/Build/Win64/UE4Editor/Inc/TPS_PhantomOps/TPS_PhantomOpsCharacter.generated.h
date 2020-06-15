// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_PHANTOMOPS_TPS_PhantomOpsCharacter_generated_h
#error "TPS_PhantomOpsCharacter.generated.h already included, missing '#pragma once' in TPS_PhantomOpsCharacter.h"
#endif
#define TPS_PHANTOMOPS_TPS_PhantomOpsCharacter_generated_h

#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_SPARSE_DATA
#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_RPC_WRAPPERS
#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPS_PhantomOpsCharacter(); \
	friend struct Z_Construct_UClass_ATPS_PhantomOpsCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPS_PhantomOpsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS_PhantomOps"), NO_API) \
	DECLARE_SERIALIZER(ATPS_PhantomOpsCharacter)


#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATPS_PhantomOpsCharacter(); \
	friend struct Z_Construct_UClass_ATPS_PhantomOpsCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPS_PhantomOpsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS_PhantomOps"), NO_API) \
	DECLARE_SERIALIZER(ATPS_PhantomOpsCharacter)


#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPS_PhantomOpsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPS_PhantomOpsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPS_PhantomOpsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPS_PhantomOpsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPS_PhantomOpsCharacter(ATPS_PhantomOpsCharacter&&); \
	NO_API ATPS_PhantomOpsCharacter(const ATPS_PhantomOpsCharacter&); \
public:


#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPS_PhantomOpsCharacter(ATPS_PhantomOpsCharacter&&); \
	NO_API ATPS_PhantomOpsCharacter(const ATPS_PhantomOpsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPS_PhantomOpsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPS_PhantomOpsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPS_PhantomOpsCharacter)


#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATPS_PhantomOpsCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATPS_PhantomOpsCharacter, FollowCamera); }


#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_9_PROLOG
#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_SPARSE_DATA \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_RPC_WRAPPERS \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_INCLASS \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_SPARSE_DATA \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_PHANTOMOPS_API UClass* StaticClass<class ATPS_PhantomOpsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_PhantomOps_Source_TPS_PhantomOps_TPS_PhantomOpsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
