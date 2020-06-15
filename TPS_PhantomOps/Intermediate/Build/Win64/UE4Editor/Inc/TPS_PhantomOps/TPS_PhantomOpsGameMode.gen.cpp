// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS_PhantomOps/TPS_PhantomOpsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPS_PhantomOpsGameMode() {}
// Cross Module References
	TPS_PHANTOMOPS_API UClass* Z_Construct_UClass_ATPS_PhantomOpsGameMode_NoRegister();
	TPS_PHANTOMOPS_API UClass* Z_Construct_UClass_ATPS_PhantomOpsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TPS_PhantomOps();
// End Cross Module References
	void ATPS_PhantomOpsGameMode::StaticRegisterNativesATPS_PhantomOpsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATPS_PhantomOpsGameMode_NoRegister()
	{
		return ATPS_PhantomOpsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS_PhantomOps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TPS_PhantomOpsGameMode.h" },
		{ "ModuleRelativePath", "TPS_PhantomOpsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPS_PhantomOpsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics::ClassParams = {
		&ATPS_PhantomOpsGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPS_PhantomOpsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPS_PhantomOpsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPS_PhantomOpsGameMode, 1882845615);
	template<> TPS_PHANTOMOPS_API UClass* StaticClass<ATPS_PhantomOpsGameMode>()
	{
		return ATPS_PhantomOpsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPS_PhantomOpsGameMode(Z_Construct_UClass_ATPS_PhantomOpsGameMode, &ATPS_PhantomOpsGameMode::StaticClass, TEXT("/Script/TPS_PhantomOps"), TEXT("ATPS_PhantomOpsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPS_PhantomOpsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
