// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/MovieSceneAkAudioRTPCSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	void UMovieSceneAkAudioRTPCSection::StaticRegisterNativesUMovieSceneAkAudioRTPCSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister()
	{
		return UMovieSceneAkAudioRTPCSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneAkAudioRTPCSection.h" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "A single floating point section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatChannelSerializationHelper_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatChannelSerializationHelper = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatChannelSerializationHelper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper), Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, METADATA_PARAMS(NewProp_FloatChannelSerializationHelper_MetaData, ARRAY_COUNT(NewProp_FloatChannelSerializationHelper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
				{ "ToolTip", "Curve data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_FloatCurve_MetaData, ARRAY_COUNT(NewProp_FloatCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "AkAudioRTPC" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
				{ "NoResetToDefault", "" },
				{ "ToolTip", "Name of the RTPC to modify." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatChannelSerializationHelper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAkAudioRTPCSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAkAudioRTPCSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioRTPCSection, 348068896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioRTPCSection(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection, &UMovieSceneAkAudioRTPCSection::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioRTPCSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
