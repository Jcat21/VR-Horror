// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/MovieSceneAkAudioEventSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void UMovieSceneAkAudioEventSection::StaticRegisterNativesUMovieSceneAkAudioEventSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister()
	{
		return UMovieSceneAkAudioEventSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection()
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
				{ "IncludePath", "MovieSceneAkAudioEventSection.h" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "ToolTip", "A single floating point section that triggers a Wwise event." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDurationSourceID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "ToolTip", "The ID of the longest Wwise source that the Wwise event contains." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaxDurationSourceID = { UE4CodeGen_Private::EPropertyClass::Str, "MaxDurationSourceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxDurationSourceID), METADATA_PARAMS(NewProp_MaxDurationSourceID_MetaData, ARRAY_COUNT(NewProp_MaxDurationSourceID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSourceDuration_MetaData[] = {
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "ToolTip", "The duration of the longest Wwise source that the Wwise event contains (taking trim into account)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSourceDuration = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSourceDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxSourceDuration), METADATA_PARAMS(NewProp_MaxSourceDuration_MetaData, ARRAY_COUNT(NewProp_MaxSourceDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "ToolTip", "The name of the AkAudioEvent represented by this section" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopAtSectionEnd_MetaData[] = {
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "ToolTip", "Indicates whether the Wwise event should be stopped when the section stops in the Unreal Sequencer." },
			};
#endif
			auto NewProp_StopAtSectionEnd_SetBit = [](void* Obj){ ((UMovieSceneAkAudioEventSection*)Obj)->StopAtSectionEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopAtSectionEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "StopAtSectionEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneAkAudioEventSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_StopAtSectionEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_StopAtSectionEnd_MetaData, ARRAY_COUNT(NewProp_StopAtSectionEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrubTailLengthMs_MetaData[] = {
				{ "Category", "AkAudioEvent" },
				{ "ClampMax", "500" },
				{ "ClampMin", "30" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "ToolTip", "The length, in ms, of scrub snippets" },
				{ "UIMax", "500" },
				{ "UIMin", "30" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScrubTailLengthMs = { UE4CodeGen_Private::EPropertyClass::Int, "ScrubTailLengthMs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, ScrubTailLengthMs), METADATA_PARAMS(NewProp_ScrubTailLengthMs_MetaData, ARRAY_COUNT(NewProp_ScrubTailLengthMs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetriggerEvent_MetaData[] = {
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "ToolTip", "Indicates whether the Wwise event will be re-triggered when the end is reached." },
			};
#endif
			auto NewProp_RetriggerEvent_SetBit = [](void* Obj){ ((UMovieSceneAkAudioEventSection*)Obj)->RetriggerEvent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RetriggerEvent = { UE4CodeGen_Private::EPropertyClass::Bool, "RetriggerEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneAkAudioEventSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RetriggerEvent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RetriggerEvent_MetaData, ARRAY_COUNT(NewProp_RetriggerEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
				{ "NoResetToDefault", "" },
				{ "ToolTip", "The AkAudioEvent represented by this section" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event = { UE4CodeGen_Private::EPropertyClass::Object, "Event", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, Event), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(NewProp_Event_MetaData, ARRAY_COUNT(NewProp_Event_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDurationSourceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSourceDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopAtSectionEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScrubTailLengthMs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RetriggerEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Event,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAkAudioEventSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAkAudioEventSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieSceneAkAudioEventSection, 3631202118);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioEventSection(Z_Construct_UClass_UMovieSceneAkAudioEventSection, &UMovieSceneAkAudioEventSection::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioEventSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioEventSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
