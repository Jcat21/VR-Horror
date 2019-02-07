// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/MovieSceneFloatChannelSerializationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannelSerializationHelper() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
// End Cross Module References
class UScriptStruct* FMovieSceneFloatChannelSerializationHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatChannelSerializationHelper"), sizeof(FMovieSceneFloatChannelSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper(FMovieSceneFloatChannelSerializationHelper::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneFloatChannelSerializationHelper"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatChannelSerializationHelper
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatChannelSerializationHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFloatChannelSerializationHelper")),new UScriptStruct::TCppStructOps<FMovieSceneFloatChannelSerializationHelper>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatChannelSerializationHelper;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFloatChannelSerializationHelper"), sizeof(FMovieSceneFloatChannelSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatChannelSerializationHelper>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			auto NewProp_bHasDefaultValue_SetBit = [](void* Obj){ ((FMovieSceneFloatChannelSerializationHelper*)Obj)->bHasDefaultValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasDefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneFloatChannelSerializationHelper), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasDefaultValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasDefaultValue_MetaData, ARRAY_COUNT(NewProp_bHasDefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Values), METADATA_PARAMS(NewProp_Values_MetaData, ARRAY_COUNT(NewProp_Values_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Values", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Times), METADATA_PARAMS(NewProp_Times_MetaData, ARRAY_COUNT(NewProp_Times_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap = { UE4CodeGen_Private::EPropertyClass::Byte, "PostInfinityExtrap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(NewProp_PostInfinityExtrap_MetaData, ARRAY_COUNT(NewProp_PostInfinityExtrap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap = { UE4CodeGen_Private::EPropertyClass::Byte, "PreInfinityExtrap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(NewProp_PreInfinityExtrap_MetaData, ARRAY_COUNT(NewProp_PreInfinityExtrap_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasDefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Values_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostInfinityExtrap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreInfinityExtrap,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneFloatChannelSerializationHelper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneFloatChannelSerializationHelper),
				alignof(FMovieSceneFloatChannelSerializationHelper),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_CRC() { return 2021668526U; }
class UScriptStruct* FMovieSceneFloatValueSerializationHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneFloatValueSerializationHelper"), sizeof(FMovieSceneFloatValueSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFloatValueSerializationHelper(FMovieSceneFloatValueSerializationHelper::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneFloatValueSerializationHelper"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatValueSerializationHelper
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatValueSerializationHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFloatValueSerializationHelper")),new UScriptStruct::TCppStructOps<FMovieSceneFloatValueSerializationHelper>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneFloatValueSerializationHelper;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFloatValueSerializationHelper"), sizeof(FMovieSceneFloatValueSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatValueSerializationHelper>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, METADATA_PARAMS(NewProp_Tangent_MetaData, ARRAY_COUNT(NewProp_Tangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TangentMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(NewProp_TangentMode_MetaData, ARRAY_COUNT(NewProp_TangentMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InterpMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(NewProp_InterpMode_MetaData, ARRAY_COUNT(NewProp_InterpMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneFloatValueSerializationHelper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneFloatValueSerializationHelper),
				alignof(FMovieSceneFloatValueSerializationHelper),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_CRC() { return 3809668283U; }
class UScriptStruct* FMovieSceneTangentDataSerializationHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneTangentDataSerializationHelper"), sizeof(FMovieSceneTangentDataSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTangentDataSerializationHelper(FMovieSceneTangentDataSerializationHelper::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneTangentDataSerializationHelper"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneTangentDataSerializationHelper
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneTangentDataSerializationHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTangentDataSerializationHelper")),new UScriptStruct::TCppStructOps<FMovieSceneTangentDataSerializationHelper>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneTangentDataSerializationHelper;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTangentDataSerializationHelper"), sizeof(FMovieSceneTangentDataSerializationHelper), Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTangentDataSerializationHelper>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight = { UE4CodeGen_Private::EPropertyClass::Float, "LeaveTangentWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangentWeight), METADATA_PARAMS(NewProp_LeaveTangentWeight_MetaData, ARRAY_COUNT(NewProp_LeaveTangentWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight = { UE4CodeGen_Private::EPropertyClass::Float, "ArriveTangentWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangentWeight), METADATA_PARAMS(NewProp_ArriveTangentWeight_MetaData, ARRAY_COUNT(NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TangentWeightMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(NewProp_TangentWeightMode_MetaData, ARRAY_COUNT(NewProp_TangentWeightMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent = { UE4CodeGen_Private::EPropertyClass::Float, "LeaveTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangent), METADATA_PARAMS(NewProp_LeaveTangent_MetaData, ARRAY_COUNT(NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent = { UE4CodeGen_Private::EPropertyClass::Float, "ArriveTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangent), METADATA_PARAMS(NewProp_ArriveTangent_MetaData, ARRAY_COUNT(NewProp_ArriveTangent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaveTangentWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArriveTangentWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentWeightMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaveTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArriveTangent,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTangentDataSerializationHelper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTangentDataSerializationHelper),
				alignof(FMovieSceneTangentDataSerializationHelper),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_CRC() { return 1757277086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
