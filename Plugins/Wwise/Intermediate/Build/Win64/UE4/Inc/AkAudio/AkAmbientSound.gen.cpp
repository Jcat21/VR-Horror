// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AkAmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAmbientSound() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkAmbSoundCheckpointRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAmbSoundCheckpointRecord(FAkAmbSoundCheckpointRecord::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAmbSoundCheckpointRecord"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAmbSoundCheckpointRecord")),new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ToolTip", "FAkAmbSoundCheckpointRecord" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyPlaying_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
			};
#endif
			auto NewProp_bCurrentlyPlaying_SetBit = [](void* Obj){ ((FAkAmbSoundCheckpointRecord*)Obj)->bCurrentlyPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurrentlyPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAkAmbSoundCheckpointRecord), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCurrentlyPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCurrentlyPlaying_MetaData, ARRAY_COUNT(NewProp_bCurrentlyPlaying_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCurrentlyPlaying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkAmbSoundCheckpointRecord",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkAmbSoundCheckpointRecord),
				alignof(FAkAmbSoundCheckpointRecord),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC() { return 2621700190U; }
	void AAkAmbientSound::StaticRegisterNativesAAkAmbientSound()
	{
		UClass* Class = AAkAmbientSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAmbientSound", &AAkAmbientSound::execStartAmbientSound },
			{ "StopAmbientSound", &AAkAmbientSound::execStopAmbientSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkAmbientSound" },
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ToolTip", "* Start an Ak ambient sound." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, "StartAmbientSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkAmbientSound" },
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ToolTip", "* Stop an Ak ambient sound." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, "StopAmbientSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister()
	{
		return AAkAmbientSound::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound, "StartAmbientSound" }, // 3448276723
				{ &Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound, "StopAmbientSound" }, // 1470696533
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "AkAmbientSound" },
				{ "BlueprintType", "true" },
				{ "HideCategories", "Audio" },
				{ "IncludePath", "AkAmbientSound.h" },
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ToolTip", "AAkAmbientSound" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[] = {
				{ "Category", "AkAmbientSound" },
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ToolTip", "Automatically post the associated AkAudioEvent on BeginPlay" },
			};
#endif
			auto NewProp_AutoPost_SetBit = [](void* Obj){ ((AAkAmbientSound*)Obj)->AutoPost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPost = { UE4CodeGen_Private::EPropertyClass::Bool, "AutoPost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010020000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAkAmbientSound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutoPost_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AutoPost_MetaData, ARRAY_COUNT(NewProp_AutoPost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerIsDestroyed_MetaData[] = {
				{ "Category", "AkAmbientSound" },
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ToolTip", "Stop playback if the owner is destroyed" },
			};
#endif
			auto NewProp_StopWhenOwnerIsDestroyed_SetBit = [](void* Obj){ ((AAkAmbientSound*)Obj)->StopWhenOwnerIsDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerIsDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "StopWhenOwnerIsDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010020000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAkAmbientSound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_StopWhenOwnerIsDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_StopWhenOwnerIsDestroyed_MetaData, ARRAY_COUNT(NewProp_StopWhenOwnerIsDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[] = {
				{ "Category", "AkAmbientSound" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "AkComponent to handle playback" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AkComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AAkAmbientSound, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(NewProp_AkComponent_MetaData, ARRAY_COUNT(NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
				{ "ToolTip", "AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent = { UE4CodeGen_Private::EPropertyClass::Object, "AkAudioEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(AAkAmbientSound, AkAudioEvent_DEPRECATED), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(NewProp_AkAudioEvent_MetaData, ARRAY_COUNT(NewProp_AkAudioEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoPost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopWhenOwnerIsDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkAudioEvent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAkAmbientSound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAkAmbientSound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkAmbientSound, 648394381);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAmbientSound(Z_Construct_UClass_AAkAmbientSound, &AAkAmbientSound::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
