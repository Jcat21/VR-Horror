// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AkGameplayTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayTypes() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkResult();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnAkBankCallback_Parms
		{
			EAkResult Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkBankCallback_Parms, Result), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, "OnAkBankCallback__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_AkAudio_eventOnAkBankCallback_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnAkPostEventCallback_Parms
		{
			EAkCallbackType CallbackType;
			UAkCallbackInfo* CallbackInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo = { UE4CodeGen_Private::EPropertyClass::Object, "CallbackInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallbackType = { UE4CodeGen_Private::EPropertyClass::Enum, "CallbackType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallbackInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallbackType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallbackType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, "OnAkPostEventCallback__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_AkAudio_eventOnAkPostEventCallback_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAkMidiCcValues_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiCcValues, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkMidiCcValues"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkMidiCcValues(EAkMidiCcValues_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkMidiCcValues"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkMidiCcValues_CRC() { return 3801861943U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkMidiCcValues"), 0, Get_Z_Construct_UEnum_AkAudio_EAkMidiCcValues_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkMidiCcValues::AkMidiCcBankSelectCoarse", (int64)EAkMidiCcValues::AkMidiCcBankSelectCoarse },
				{ "EAkMidiCcValues::AkMidiCcModWheelCoarse", (int64)EAkMidiCcValues::AkMidiCcModWheelCoarse },
				{ "EAkMidiCcValues::AkMidiCcBreathCtrlCoarse", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlCoarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl3Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl3Coarse },
				{ "EAkMidiCcValues::AkMidiCcFootPedalCoarse", (int64)EAkMidiCcValues::AkMidiCcFootPedalCoarse },
				{ "EAkMidiCcValues::AkMidiCcPortamentoCoarse", (int64)EAkMidiCcValues::AkMidiCcPortamentoCoarse },
				{ "EAkMidiCcValues::AkMidiCcDataEntryCoarse", (int64)EAkMidiCcValues::AkMidiCcDataEntryCoarse },
				{ "EAkMidiCcValues::AkMidiCcVolumeCoarse", (int64)EAkMidiCcValues::AkMidiCcVolumeCoarse },
				{ "EAkMidiCcValues::AkMidiCcBalanceCoarse", (int64)EAkMidiCcValues::AkMidiCcBalanceCoarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl9Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl9Coarse },
				{ "EAkMidiCcValues::AkMidiCcPanPositionCoarse", (int64)EAkMidiCcValues::AkMidiCcPanPositionCoarse },
				{ "EAkMidiCcValues::AkMidiCcExpressionCoarse", (int64)EAkMidiCcValues::AkMidiCcExpressionCoarse },
				{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse },
				{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl14Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl14Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl15Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl15Coarse },
				{ "EAkMidiCcValues::AkMidiCcGenSlider1", (int64)EAkMidiCcValues::AkMidiCcGenSlider1 },
				{ "EAkMidiCcValues::AkMidiCcGenSlider2", (int64)EAkMidiCcValues::AkMidiCcGenSlider2 },
				{ "EAkMidiCcValues::AkMidiCcGenSlider3", (int64)EAkMidiCcValues::AkMidiCcGenSlider3 },
				{ "EAkMidiCcValues::AkMidiCcGenSlider4", (int64)EAkMidiCcValues::AkMidiCcGenSlider4 },
				{ "EAkMidiCcValues::AkMidiCcCtrl20Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl20Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl21Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl21Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl22Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl22Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl23Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl23Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl24Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl24Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl25Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl25Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl26Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl26Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl27Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl27Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl28Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl28Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl29Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl29Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl30Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl30Coarse },
				{ "EAkMidiCcValues::AkMidiCcCtrl31Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl31Coarse },
				{ "EAkMidiCcValues::AkMidiCcBankSelectFine", (int64)EAkMidiCcValues::AkMidiCcBankSelectFine },
				{ "EAkMidiCcValues::AkMidiCcModWheelFine", (int64)EAkMidiCcValues::AkMidiCcModWheelFine },
				{ "EAkMidiCcValues::AkMidiCcBreathCtrlFine", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlFine },
				{ "EAkMidiCcValues::AkMidiCcCtrl3Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl3Fine },
				{ "EAkMidiCcValues::AkMidiCcFootPedalFine", (int64)EAkMidiCcValues::AkMidiCcFootPedalFine },
				{ "EAkMidiCcValues::AkMidiCcPortamentoFine", (int64)EAkMidiCcValues::AkMidiCcPortamentoFine },
				{ "EAkMidiCcValues::AkMidiCcDataEntryFine", (int64)EAkMidiCcValues::AkMidiCcDataEntryFine },
				{ "EAkMidiCcValues::AkMidiCcVolumeFine", (int64)EAkMidiCcValues::AkMidiCcVolumeFine },
				{ "EAkMidiCcValues::AkMidiCcBalanceFine", (int64)EAkMidiCcValues::AkMidiCcBalanceFine },
				{ "EAkMidiCcValues::AkMidiCcCtrl9Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl9Fine },
				{ "EAkMidiCcValues::AkMidiCcPanPositionFine", (int64)EAkMidiCcValues::AkMidiCcPanPositionFine },
				{ "EAkMidiCcValues::AkMidiCcExpressionFine", (int64)EAkMidiCcValues::AkMidiCcExpressionFine },
				{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Fine },
				{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl14Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl14Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl15Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl15Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl20Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl20Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl21Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl21Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl22Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl22Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl23Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl23Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl24Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl24Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl25Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl25Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl26Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl26Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl27Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl27Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl28Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl28Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl29Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl29Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl30Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl30Fine },
				{ "EAkMidiCcValues::AkMidiCcCtrl31Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl31Fine },
				{ "EAkMidiCcValues::AkMidiCcHoldPedal", (int64)EAkMidiCcValues::AkMidiCcHoldPedal },
				{ "EAkMidiCcValues::AkMidiCcPortamentoOnOff", (int64)EAkMidiCcValues::AkMidiCcPortamentoOnOff },
				{ "EAkMidiCcValues::AkMidiCcSustenutoPedal", (int64)EAkMidiCcValues::AkMidiCcSustenutoPedal },
				{ "EAkMidiCcValues::AkMidiCcSoftPedal", (int64)EAkMidiCcValues::AkMidiCcSoftPedal },
				{ "EAkMidiCcValues::AkMidiCcLegatoPedal", (int64)EAkMidiCcValues::AkMidiCcLegatoPedal },
				{ "EAkMidiCcValues::AkMidiCcHoldPedal2", (int64)EAkMidiCcValues::AkMidiCcHoldPedal2 },
				{ "EAkMidiCcValues::AkMidiCcSoundVariation", (int64)EAkMidiCcValues::AkMidiCcSoundVariation },
				{ "EAkMidiCcValues::AkMidiCcSoundTimbre", (int64)EAkMidiCcValues::AkMidiCcSoundTimbre },
				{ "EAkMidiCcValues::AkMidiCcSoundReleaseTime", (int64)EAkMidiCcValues::AkMidiCcSoundReleaseTime },
				{ "EAkMidiCcValues::AkMidiCcSoundAttackTime", (int64)EAkMidiCcValues::AkMidiCcSoundAttackTime },
				{ "EAkMidiCcValues::AkMidiCcSoundBrightness", (int64)EAkMidiCcValues::AkMidiCcSoundBrightness },
				{ "EAkMidiCcValues::AkMidiCcSoundCtrl6", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl6 },
				{ "EAkMidiCcValues::AkMidiCcSoundCtrl7", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl7 },
				{ "EAkMidiCcValues::AkMidiCcSoundCtrl8", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl8 },
				{ "EAkMidiCcValues::AkMidiCcSoundCtrl9", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl9 },
				{ "EAkMidiCcValues::AkMidiCcSoundCtrl10", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl10 },
				{ "EAkMidiCcValues::AkMidiCcGeneralButton1", (int64)EAkMidiCcValues::AkMidiCcGeneralButton1 },
				{ "EAkMidiCcValues::AkMidiCcGeneralButton2", (int64)EAkMidiCcValues::AkMidiCcGeneralButton2 },
				{ "EAkMidiCcValues::AkMidiCcGeneralButton3", (int64)EAkMidiCcValues::AkMidiCcGeneralButton3 },
				{ "EAkMidiCcValues::AkMidiCcGeneralButton4", (int64)EAkMidiCcValues::AkMidiCcGeneralButton4 },
				{ "EAkMidiCcValues::AkMidiCcReverbLevel", (int64)EAkMidiCcValues::AkMidiCcReverbLevel },
				{ "EAkMidiCcValues::AkMidiCcTremoloLevel", (int64)EAkMidiCcValues::AkMidiCcTremoloLevel },
				{ "EAkMidiCcValues::AkMidiCcChorusLevel", (int64)EAkMidiCcValues::AkMidiCcChorusLevel },
				{ "EAkMidiCcValues::AkMidiCcCelesteLevel", (int64)EAkMidiCcValues::AkMidiCcCelesteLevel },
				{ "EAkMidiCcValues::AkMidiCcPhaserLevel", (int64)EAkMidiCcValues::AkMidiCcPhaserLevel },
				{ "EAkMidiCcValues::AkMidiCcDataButtonP1", (int64)EAkMidiCcValues::AkMidiCcDataButtonP1 },
				{ "EAkMidiCcValues::AkMidiCcDataButtonM1", (int64)EAkMidiCcValues::AkMidiCcDataButtonM1 },
				{ "EAkMidiCcValues::AkMidiCcNonRegisterCoarse", (int64)EAkMidiCcValues::AkMidiCcNonRegisterCoarse },
				{ "EAkMidiCcValues::AkMidiCcNonRegisterFine", (int64)EAkMidiCcValues::AkMidiCcNonRegisterFine },
				{ "EAkMidiCcValues::AkMidiCcAllSoundOff", (int64)EAkMidiCcValues::AkMidiCcAllSoundOff },
				{ "EAkMidiCcValues::AkMidiCcAllControllersOff", (int64)EAkMidiCcValues::AkMidiCcAllControllersOff },
				{ "EAkMidiCcValues::AkMidiCcLocalKeyboard", (int64)EAkMidiCcValues::AkMidiCcLocalKeyboard },
				{ "EAkMidiCcValues::AkMidiCcAllNotesOff", (int64)EAkMidiCcValues::AkMidiCcAllNotesOff },
				{ "EAkMidiCcValues::AkMidiCcOmniModeOff", (int64)EAkMidiCcValues::AkMidiCcOmniModeOff },
				{ "EAkMidiCcValues::AkMidiCcOmniModeOn", (int64)EAkMidiCcValues::AkMidiCcOmniModeOn },
				{ "EAkMidiCcValues::AkMidiCcOmniMonophonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniMonophonicOn },
				{ "EAkMidiCcValues::AkMidiCcOmniPolyphonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniPolyphonicOn },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "List of Continuous Controller (cc) values" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAkMidiCcValues",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAkMidiCcValues",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkMidiEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiEventType, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkMidiEventType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkMidiEventType(EAkMidiEventType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkMidiEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkMidiEventType_CRC() { return 2690416581U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkMidiEventType"), 0, Get_Z_Construct_UEnum_AkAudio_EAkMidiEventType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkMidiEventType::AkMidiEventTypeInvalid", (int64)EAkMidiEventType::AkMidiEventTypeInvalid },
				{ "EAkMidiEventType::AkMidiEventTypeNoteOff", (int64)EAkMidiEventType::AkMidiEventTypeNoteOff },
				{ "EAkMidiEventType::AkMidiEventTypeNoteOn", (int64)EAkMidiEventType::AkMidiEventTypeNoteOn },
				{ "EAkMidiEventType::AkMidiEventTypeNoteAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeNoteAftertouch },
				{ "EAkMidiEventType::AkMidiEventTypeController", (int64)EAkMidiEventType::AkMidiEventTypeController },
				{ "EAkMidiEventType::AkMidiEventTypeProgramChange", (int64)EAkMidiEventType::AkMidiEventTypeProgramChange },
				{ "EAkMidiEventType::AkMidiEventTypeChannelAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeChannelAftertouch },
				{ "EAkMidiEventType::AkMidiEventTypePitchBend", (int64)EAkMidiEventType::AkMidiEventTypePitchBend },
				{ "EAkMidiEventType::AkMidiEventTypeSysex", (int64)EAkMidiEventType::AkMidiEventTypeSysex },
				{ "EAkMidiEventType::AkMidiEventTypeEscape", (int64)EAkMidiEventType::AkMidiEventTypeEscape },
				{ "EAkMidiEventType::AkMidiEventTypeMeta", (int64)EAkMidiEventType::AkMidiEventTypeMeta },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "List of MIDI event types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAkMidiEventType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAkMidiEventType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkCallbackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCallbackType, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCallbackType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkCallbackType(EAkCallbackType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkCallbackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkCallbackType_CRC() { return 1172313294U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkCallbackType"), 0, Get_Z_Construct_UEnum_AkAudio_EAkCallbackType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkCallbackType::EndOfEvent", (int64)EAkCallbackType::EndOfEvent },
				{ "EAkCallbackType::Marker", (int64)EAkCallbackType::Marker },
				{ "EAkCallbackType::Duration", (int64)EAkCallbackType::Duration },
				{ "EAkCallbackType::Starvation", (int64)EAkCallbackType::Starvation },
				{ "EAkCallbackType::MusicPlayStarted", (int64)EAkCallbackType::MusicPlayStarted },
				{ "EAkCallbackType::MusicSyncBeat", (int64)EAkCallbackType::MusicSyncBeat },
				{ "EAkCallbackType::MusicSyncBar", (int64)EAkCallbackType::MusicSyncBar },
				{ "EAkCallbackType::MusicSyncEntry", (int64)EAkCallbackType::MusicSyncEntry },
				{ "EAkCallbackType::MusicSyncExit", (int64)EAkCallbackType::MusicSyncExit },
				{ "EAkCallbackType::MusicSyncGrid", (int64)EAkCallbackType::MusicSyncGrid },
				{ "EAkCallbackType::MusicSyncUserCue", (int64)EAkCallbackType::MusicSyncUserCue },
				{ "EAkCallbackType::MusicSyncPoint", (int64)EAkCallbackType::MusicSyncPoint },
				{ "EAkCallbackType::MIDIEvent", (int64)EAkCallbackType::MIDIEvent },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitmask", "" },
				{ "BlueprintType", "true" },
				{ "Duration.ToolTip", "Callback triggered when the duration of the sound is known by the sound engine. AkCallbackInfo can be cast to AkDurationCallbackInfo." },
				{ "EndOfEvent.ToolTip", "Callback triggered when reaching the end of an event. AkCallbackInfo can be cast to AkEventCallbackInfo." },
				{ "Marker.ToolTip", "Callback triggered when encountering a marker during playback. AkCallbackInfo can be cast to AkMarkerCallbackInfo." },
				{ "MIDIEvent.ToolTip", "Enable notifications for MIDI events. AkCallbackInfo can be cast to AkMIDIEventCallbackInfo." },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "MusicPlayStarted.ToolTip", "Callback triggered when a Play or Seek command has been executed (Seek commands are issued from AK::SoundEngine::SeekOnEvent()). Applies to objects of the Interactive-Music Hierarchy only. AkCallbackInfo can be cast to AkEventCallbackInfo." },
				{ "MusicSyncBar.ToolTip", "Enable notifications on Music Bar. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
				{ "MusicSyncBeat.ToolTip", "Enable notifications on Music Beat. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
				{ "MusicSyncEntry.ToolTip", "Enable notifications on Music Entry Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
				{ "MusicSyncExit.ToolTip", "Enable notifications on Music Exit Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
				{ "MusicSyncGrid.ToolTip", "Enable notifications on Music Grid. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
				{ "MusicSyncPoint.ToolTip", "Enable notifications on Music switch transition synchronization point. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
				{ "MusicSyncUserCue.ToolTip", "Enable notifications on Music Custom Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
				{ "Starvation.ToolTip", "Callback triggered when playback skips a frame due to stream starvation. AkCallbackInfo can be cast to AkEventCallbackInfo." },
				{ "ToolTip", "Begin - Ak Callback Blueprint classes and structures. Known limitations:\n- AkDynamicSequenceItemCallbackInfo is not exposed because Dynamic sequences are not part of this integration\n- AkSpeakerVolumeMatrixCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n- AkMusicPlaylistCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n\n=============================================================================/// Type of callback. Used as a bitfield in methods AK::SoundEngine::PostEvent() and AK::SoundEngine::DynamicSequence::Open()." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAkCallbackType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAkCallbackType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkResult, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkResult(EAkResult_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkResult_CRC() { return 554338479U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkResult"), 0, Get_Z_Construct_UEnum_AkAudio_EAkResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkResult::NotImplemented", (int64)EAkResult::NotImplemented },
				{ "EAkResult::Success", (int64)EAkResult::Success },
				{ "EAkResult::Fail", (int64)EAkResult::Fail },
				{ "EAkResult::PartialSuccess", (int64)EAkResult::PartialSuccess },
				{ "EAkResult::NotCompatible", (int64)EAkResult::NotCompatible },
				{ "EAkResult::AlreadyConnected", (int64)EAkResult::AlreadyConnected },
				{ "EAkResult::NameNotSet", (int64)EAkResult::NameNotSet },
				{ "EAkResult::InvalidFile", (int64)EAkResult::InvalidFile },
				{ "EAkResult::AudioFileHeaderTooLarge", (int64)EAkResult::AudioFileHeaderTooLarge },
				{ "EAkResult::MaxReached", (int64)EAkResult::MaxReached },
				{ "EAkResult::InputsInUsed", (int64)EAkResult::InputsInUsed },
				{ "EAkResult::OutputsInUsed", (int64)EAkResult::OutputsInUsed },
				{ "EAkResult::InvalidName", (int64)EAkResult::InvalidName },
				{ "EAkResult::NameAlreadyInUse", (int64)EAkResult::NameAlreadyInUse },
				{ "EAkResult::InvalidID", (int64)EAkResult::InvalidID },
				{ "EAkResult::IDNotFound", (int64)EAkResult::IDNotFound },
				{ "EAkResult::InvalidInstanceID", (int64)EAkResult::InvalidInstanceID },
				{ "EAkResult::NoMoreData", (int64)EAkResult::NoMoreData },
				{ "EAkResult::NoSourceAvailable", (int64)EAkResult::NoSourceAvailable },
				{ "EAkResult::StateGroupAlreadyExists", (int64)EAkResult::StateGroupAlreadyExists },
				{ "EAkResult::InvalidStateGroup", (int64)EAkResult::InvalidStateGroup },
				{ "EAkResult::ChildAlreadyHasAParent", (int64)EAkResult::ChildAlreadyHasAParent },
				{ "EAkResult::InvalidLanguage", (int64)EAkResult::InvalidLanguage },
				{ "EAkResult::CannotAddItseflAsAChild", (int64)EAkResult::CannotAddItseflAsAChild },
				{ "EAkResult::Reserved1", (int64)EAkResult::Reserved1 },
				{ "EAkResult::Reserved2", (int64)EAkResult::Reserved2 },
				{ "EAkResult::Reserved3", (int64)EAkResult::Reserved3 },
				{ "EAkResult::Reserved4", (int64)EAkResult::Reserved4 },
				{ "EAkResult::Reserved5", (int64)EAkResult::Reserved5 },
				{ "EAkResult::UserNotInList", (int64)EAkResult::UserNotInList },
				{ "EAkResult::NoTransitionPoint", (int64)EAkResult::NoTransitionPoint },
				{ "EAkResult::InvalidParameter", (int64)EAkResult::InvalidParameter },
				{ "EAkResult::ParameterAdjusted", (int64)EAkResult::ParameterAdjusted },
				{ "EAkResult::IsA3DSound", (int64)EAkResult::IsA3DSound },
				{ "EAkResult::NotA3DSound", (int64)EAkResult::NotA3DSound },
				{ "EAkResult::ElementAlreadyInList", (int64)EAkResult::ElementAlreadyInList },
				{ "EAkResult::PathNotFound", (int64)EAkResult::PathNotFound },
				{ "EAkResult::PathNoVertices", (int64)EAkResult::PathNoVertices },
				{ "EAkResult::PathNotRunning", (int64)EAkResult::PathNotRunning },
				{ "EAkResult::PathNotPaused", (int64)EAkResult::PathNotPaused },
				{ "EAkResult::PathNodeAlreadyInList", (int64)EAkResult::PathNodeAlreadyInList },
				{ "EAkResult::PathNodeNotInList", (int64)EAkResult::PathNodeNotInList },
				{ "EAkResult::VoiceNotFound", (int64)EAkResult::VoiceNotFound },
				{ "EAkResult::DataNeeded", (int64)EAkResult::DataNeeded },
				{ "EAkResult::NoDataNeeded", (int64)EAkResult::NoDataNeeded },
				{ "EAkResult::DataReady", (int64)EAkResult::DataReady },
				{ "EAkResult::NoDataReady", (int64)EAkResult::NoDataReady },
				{ "EAkResult::NoMoreSlotAvailable", (int64)EAkResult::NoMoreSlotAvailable },
				{ "EAkResult::SlotNotFound", (int64)EAkResult::SlotNotFound },
				{ "EAkResult::ProcessingOnly", (int64)EAkResult::ProcessingOnly },
				{ "EAkResult::MemoryLeak", (int64)EAkResult::MemoryLeak },
				{ "EAkResult::CorruptedBlockList", (int64)EAkResult::CorruptedBlockList },
				{ "EAkResult::InsufficientMemory", (int64)EAkResult::InsufficientMemory },
				{ "EAkResult::Cancelled", (int64)EAkResult::Cancelled },
				{ "EAkResult::UnknownBankID", (int64)EAkResult::UnknownBankID },
				{ "EAkResult::IsProcessing", (int64)EAkResult::IsProcessing },
				{ "EAkResult::BankReadError", (int64)EAkResult::BankReadError },
				{ "EAkResult::InvalidSwitchType", (int64)EAkResult::InvalidSwitchType },
				{ "EAkResult::VoiceDone", (int64)EAkResult::VoiceDone },
				{ "EAkResult::UnknownEnvironment", (int64)EAkResult::UnknownEnvironment },
				{ "EAkResult::EnvironmentInUse", (int64)EAkResult::EnvironmentInUse },
				{ "EAkResult::UnknownObject", (int64)EAkResult::UnknownObject },
				{ "EAkResult::NoConversionNeeded", (int64)EAkResult::NoConversionNeeded },
				{ "EAkResult::FormatNotReady", (int64)EAkResult::FormatNotReady },
				{ "EAkResult::WrongBankVersion", (int64)EAkResult::WrongBankVersion },
				{ "EAkResult::DataReadyNoProcess", (int64)EAkResult::DataReadyNoProcess },
				{ "EAkResult::FileNotFound", (int64)EAkResult::FileNotFound },
				{ "EAkResult::DeviceNotReady", (int64)EAkResult::DeviceNotReady },
				{ "EAkResult::CouldNotCreateSecBuffer", (int64)EAkResult::CouldNotCreateSecBuffer },
				{ "EAkResult::BankAlreadyLoaded", (int64)EAkResult::BankAlreadyLoaded },
				{ "EAkResult::Reserved6", (int64)EAkResult::Reserved6 },
				{ "EAkResult::RenderedFX", (int64)EAkResult::RenderedFX },
				{ "EAkResult::ProcessNeeded", (int64)EAkResult::ProcessNeeded },
				{ "EAkResult::ProcessDone", (int64)EAkResult::ProcessDone },
				{ "EAkResult::MemManagerNotInitialized", (int64)EAkResult::MemManagerNotInitialized },
				{ "EAkResult::StreamMgrNotInitialized", (int64)EAkResult::StreamMgrNotInitialized },
				{ "EAkResult::SSEInstructionsNotSupported", (int64)EAkResult::SSEInstructionsNotSupported },
				{ "EAkResult::Busy", (int64)EAkResult::Busy },
				{ "EAkResult::UnsupportedChannelConfig", (int64)EAkResult::UnsupportedChannelConfig },
				{ "EAkResult::PluginMediaNotAvailable", (int64)EAkResult::PluginMediaNotAvailable },
				{ "EAkResult::MustBeVirtualized", (int64)EAkResult::MustBeVirtualized },
				{ "EAkResult::CommandTooLarge", (int64)EAkResult::CommandTooLarge },
				{ "EAkResult::RejectedByFilter", (int64)EAkResult::RejectedByFilter },
				{ "EAkResult::InvalidCustomPlatformName", (int64)EAkResult::InvalidCustomPlatformName },
				{ "EAkResult::DLLCannotLoad", (int64)EAkResult::DLLCannotLoad },
				{ "EAkResult::DLLPathNotFound", (int64)EAkResult::DLLPathNotFound },
				{ "EAkResult::NoJavaVM", (int64)EAkResult::NoJavaVM },
				{ "EAkResult::OpenSLError", (int64)EAkResult::OpenSLError },
				{ "EAkResult::PluginNotRegistered", (int64)EAkResult::PluginNotRegistered },
				{ "EAkResult::DataAlignmentError", (int64)EAkResult::DataAlignmentError },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyConnected.\"The stream is already connected to another node.\"", "" },
				{ "AudioFileHeaderTooLarge.\"The file header is too large.\"", "" },
				{ "BankAlreadyLoaded.\"The bank load failed because the bank is already loaded.\"", "" },
				{ "BankReadError.\"Error while reading a bank.\"", "" },
				{ "BlueprintType", "true" },
				{ "Busy.\"The system is busy and could not process the request.\"", "" },
				{ "Cancelled.\"The requested action was cancelled (not an error).\"", "" },
				{ "CannotAddItseflAsAChild.\"It is not possible to add itself as its own child.\"", "" },
				{ "ChildAlreadyHasAParent.\"The child already has a parent.\"", "" },
				{ "CommandTooLarge.\"SDK command is too large to fit in the command queue.\"", "" },
				{ "CorruptedBlockList.\"The memory manager's block list has been corrupted.\"", "" },
				{ "CouldNotCreateSecBuffer.\"The direct sound secondary buffer creation failed.\"", "" },
				{ "DataAlignmentError.\"A pointer to audio data was not aligned to the platform's required alignment (check AkTypes.h in the platform-specific folder)\"", "" },
				{ "DataNeeded.\"The consumer needs more.\"", "" },
				{ "DataReady.\"The provider has available data.\"", "" },
				{ "DataReadyNoProcess.\"The provider has some data but does not process it (virtual voices).\"", "" },
				{ "DeviceNotReady.\"IO device not ready (may be because the tray is open)\"", "" },
				{ "DLLCannotLoad.\"Plugin DLL could not be loaded, either because it is not found or one dependency is missing.\"", "" },
				{ "DLLPathNotFound.\"Plugin DLL search path could not be found.\"", "" },
				{ "ElementAlreadyInList.\"The item could not be added because it was already in the list.\"", "" },
				{ "EnvironmentInUse.\"This environment is used by an object.\"", "" },
				{ "Fail.\"The operation failed.\"", "" },
				{ "FileNotFound.\"File not found.\"", "" },
				{ "FormatNotReady.\"Source format not known yet.\"", "" },
				{ "IDNotFound.\"The ID was not found.\"", "" },
				{ "InputsInUsed.\"Inputs are currently used.\"", "" },
				{ "InsufficientMemory.\"Memory error.\"", "" },
				{ "InvalidCustomPlatformName.\"Detecting incompatibility between Custom platform of banks and custom platform of connected application\"", "" },
				{ "InvalidFile.\"An unexpected value causes the file to be invalid.\"", "" },
				{ "InvalidID.\"The ID is invalid.\"", "" },
				{ "InvalidInstanceID.\"The InstanceID is invalid.\"", "" },
				{ "InvalidLanguage.\"The language is invalid (applies to the Low-Level I/O).\"", "" },
				{ "InvalidName.\"The name is invalid.\"", "" },
				{ "InvalidParameter.\"Something is not within bounds.\"", "" },
				{ "InvalidStateGroup.\"The StateGroup is not a valid channel.\"", "" },
				{ "InvalidSwitchType.\"Invalid switch type (used with the switch container)\"", "" },
				{ "IsA3DSound.\"The sound has 3D parameters.\"", "" },
				{ "IsProcessing.\"Asynchronous pipeline component is processing.\"", "" },
				{ "MaxReached.\"The maximum was reached.\"", "" },
				{ "MemManagerNotInitialized.\"The memory manager should have been initialized at this point.\"", "" },
				{ "MemoryLeak.\"Debug mode only.\"", "" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "MustBeVirtualized.\"Sound was Not Allowed to play.\"", "" },
				{ "NameAlreadyInUse.\"The name is already in use.\"", "" },
				{ "NameNotSet.\"Trying to open a file when its name was not set\"", "" },
				{ "NoConversionNeeded.\"Audio data already in target format, no conversion to perform.\"", "" },
				{ "NoDataNeeded.\"The consumer does not need more.\"", "" },
				{ "NoDataReady.\"The provider does not have available data.\"", "" },
				{ "NoJavaVM.\"No Java VM provided in AkInitSettings.\"", "" },
				{ "NoMoreData.\"No more data is available from the source.\"", "" },
				{ "NoMoreSlotAvailable.\"Not enough space to load bank.\"", "" },
				{ "NoSourceAvailable.\"There is no child (source) associated with the node.\"", "" },
				{ "NotA3DSound.\"The sound does not have 3D parameters.\"", "" },
				{ "NotCompatible.\"Incompatible formats\"", "" },
				{ "NotImplemented.\"This feature is not implemented.\"", "" },
				{ "NoTransitionPoint.\"Not in use.\"", "" },
				{ "OpenSLError.\"OpenSL returned an error.  Check error log for more details.\"", "" },
				{ "OutputsInUsed.\"Outputs are currently used.\"", "" },
				{ "ParameterAdjusted.\"Something was not within bounds and was relocated to the nearest OK value.\"", "" },
				{ "PartialSuccess.\"The operation succeeded partially.\"", "" },
				{ "PathNodeAlreadyInList.\"This path is already there.\"", "" },
				{ "PathNodeNotInList.\"This path is not there.\"", "" },
				{ "PathNotFound.\"This path is not known.\"", "" },
				{ "PathNotPaused.\"Only a paused path can be resumed.\"", "" },
				{ "PathNotRunning.\"Only a running path can be paused.\"", "" },
				{ "PathNoVertices.\"Stuff in vertices before trying to start it\"", "" },
				{ "PluginMediaNotAvailable.\"Plugin media is not available for effect.\"", "" },
				{ "PluginNotRegistered.\"Plugin is not registered.  Make sure to implement a AK::PluginRegistration class for it and use AK_STATIC_LINK_PLUGIN in the game binary.\"", "" },
				{ "ProcessDone.\"The executed routine has finished its execution.\"", "" },
				{ "ProcessingOnly.\"No need to fetch new data.\"", "" },
				{ "ProcessNeeded.\"A routine needs to be executed on some CPU.\"", "" },
				{ "RejectedByFilter.\"A play request was rejected due to the MIDI filter parameters.\"", "" },
				{ "RenderedFX.\"The effect on the node is rendered.\"", "" },
				{ "SlotNotFound.\"Bank error.\"", "" },
				{ "SSEInstructionsNotSupported.\"The machine does not support SSE instructions (required on PC).\"", "" },
				{ "StateGroupAlreadyExists.\"The StateGroup already exists.\"", "" },
				{ "StreamMgrNotInitialized.\"The stream manager should have been initialized at this point.\"", "" },
				{ "Success.\"The operation was successful.\"", "" },
				{ "UnknownBankID.\"Trying to load a bank using an ID which is not defined.\"", "" },
				{ "UnknownEnvironment.\"This environment is not defined.\"", "" },
				{ "UnknownObject.\"This object is not defined.\"", "" },
				{ "UnsupportedChannelConfig.\"Channel configuration is not supported in the current execution context.\"", "" },
				{ "UserNotInList.\"This user is not there.\"", "" },
				{ "VoiceDone.\"Internal use only.\"", "" },
				{ "VoiceNotFound.\"Unknown in our voices list\"", "" },
				{ "WrongBankVersion.\"The bank version is not compatible with the current bank reader.\"", "" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAkResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAkResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* AkMultiPositionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMultiPositionType, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMultiPositionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkMultiPositionType(AkMultiPositionType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkMultiPositionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkMultiPositionType_CRC() { return 60830013U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkMultiPositionType"), 0, Get_Z_Construct_UEnum_AkAudio_AkMultiPositionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkMultiPositionType::SingleSource", (int64)AkMultiPositionType::SingleSource },
				{ "AkMultiPositionType::MultiSources", (int64)AkMultiPositionType::MultiSources },
				{ "AkMultiPositionType::MultiDirections", (int64)AkMultiPositionType::MultiDirections },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "MultiDirections.ToolTip", "AK::SoundEngine::MultiPositionType_MultiSources," },
				{ "MultiSources.ToolTip", "AK::SoundEngine::MultiPositionType_SingleSource," },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AkMultiPositionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AkMultiPositionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* AkChannelConfiguration_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelConfiguration"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkChannelConfiguration(AkChannelConfiguration_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkChannelConfiguration"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC() { return 2310618602U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkChannelConfiguration"), 0, Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkChannelConfiguration::Ak_Parent", (int64)AkChannelConfiguration::Ak_Parent },
				{ "AkChannelConfiguration::Ak_LFE", (int64)AkChannelConfiguration::Ak_LFE },
				{ "AkChannelConfiguration::Ak_1_0", (int64)AkChannelConfiguration::Ak_1_0 },
				{ "AkChannelConfiguration::Ak_2_0", (int64)AkChannelConfiguration::Ak_2_0 },
				{ "AkChannelConfiguration::Ak_2_1", (int64)AkChannelConfiguration::Ak_2_1 },
				{ "AkChannelConfiguration::Ak_3_0", (int64)AkChannelConfiguration::Ak_3_0 },
				{ "AkChannelConfiguration::Ak_3_1", (int64)AkChannelConfiguration::Ak_3_1 },
				{ "AkChannelConfiguration::Ak_4_0", (int64)AkChannelConfiguration::Ak_4_0 },
				{ "AkChannelConfiguration::Ak_4_1", (int64)AkChannelConfiguration::Ak_4_1 },
				{ "AkChannelConfiguration::Ak_5_0", (int64)AkChannelConfiguration::Ak_5_0 },
				{ "AkChannelConfiguration::Ak_5_1", (int64)AkChannelConfiguration::Ak_5_1 },
				{ "AkChannelConfiguration::Ak_7_1", (int64)AkChannelConfiguration::Ak_7_1 },
				{ "AkChannelConfiguration::Ak_5_1_2", (int64)AkChannelConfiguration::Ak_5_1_2 },
				{ "AkChannelConfiguration::Ak_7_1_2", (int64)AkChannelConfiguration::Ak_7_1_2 },
				{ "AkChannelConfiguration::Ak_7_1_4", (int64)AkChannelConfiguration::Ak_7_1_4 },
				{ "AkChannelConfiguration::Ak_Auro_9_1", (int64)AkChannelConfiguration::Ak_Auro_9_1 },
				{ "AkChannelConfiguration::Ak_Auro_10_1", (int64)AkChannelConfiguration::Ak_Auro_10_1 },
				{ "AkChannelConfiguration::Ak_Auro_11_1", (int64)AkChannelConfiguration::Ak_Auro_11_1 },
				{ "AkChannelConfiguration::Ak_Auro_13_1", (int64)AkChannelConfiguration::Ak_Auro_13_1 },
				{ "AkChannelConfiguration::Ak_Ambisonics_1st_order", (int64)AkChannelConfiguration::Ak_Ambisonics_1st_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_2nd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_2nd_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_3rd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_3rd_order },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AkChannelConfiguration",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AkChannelConfiguration",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* AkAcousticPortalState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkAcousticPortalState, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticPortalState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkAcousticPortalState(AkAcousticPortalState_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkAcousticPortalState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkAcousticPortalState_CRC() { return 2274081766U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkAcousticPortalState"), 0, Get_Z_Construct_UEnum_AkAudio_AkAcousticPortalState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkAcousticPortalState::Closed", (int64)AkAcousticPortalState::Closed },
				{ "AkAcousticPortalState::Open", (int64)AkAcousticPortalState::Open },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AkAcousticPortalState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AkAcousticPortalState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* PanningRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_PanningRule, Z_Construct_UPackage__Script_AkAudio(), TEXT("PanningRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PanningRule(PanningRule_StaticEnum, TEXT("/Script/AkAudio"), TEXT("PanningRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_PanningRule_CRC() { return 4011418718U; }
	UEnum* Z_Construct_UEnum_AkAudio_PanningRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PanningRule"), 0, Get_Z_Construct_UEnum_AkAudio_PanningRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PanningRule::PanningRule_Speakers", (int64)PanningRule::PanningRule_Speakers },
				{ "PanningRule::PanningRule_Headphones", (int64)PanningRule::PanningRule_Headphones },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "PanningRule_Headphones.ToolTip", "< Left and right positioned 60 degrees apart (by default - see AK::SoundEngine::GetSpeakerAngles())." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"PanningRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"PanningRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAkSegmentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSegmentInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSegmentInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSegmentInfo"), sizeof(FAkSegmentInfo), Get_Z_Construct_UScriptStruct_FAkSegmentInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSegmentInfo(FAkSegmentInfo::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSegmentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSegmentInfo
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSegmentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkSegmentInfo")),new UScriptStruct::TCppStructOps<FAkSegmentInfo>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSegmentInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSegmentInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSegmentInfo"), sizeof(FAkSegmentInfo), Get_Z_Construct_UScriptStruct_FAkSegmentInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "Structure used to query info on active playing segments." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSegmentInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Grid duration in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridOffset = { UE4CodeGen_Private::EPropertyClass::Float, "GridOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, GridOffset), METADATA_PARAMS(NewProp_GridOffset_MetaData, ARRAY_COUNT(NewProp_GridOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridDuration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Bar Duration in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridDuration = { UE4CodeGen_Private::EPropertyClass::Float, "GridDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, GridDuration), METADATA_PARAMS(NewProp_GridDuration_MetaData, ARRAY_COUNT(NewProp_GridDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarDuration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Beat Duration in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarDuration = { UE4CodeGen_Private::EPropertyClass::Float, "BarDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, BarDuration), METADATA_PARAMS(NewProp_BarDuration_MetaData, ARRAY_COUNT(NewProp_BarDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatDuration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Number of milliseconds remaining in the \"looking-ahead\" state of the segment, when it is silent but streamed tracks are being prefetched." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeatDuration = { UE4CodeGen_Private::EPropertyClass::Float, "BeatDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, BeatDuration), METADATA_PARAMS(NewProp_BeatDuration_MetaData, ARRAY_COUNT(NewProp_BeatDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingLookAheadTime_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Duration of the post-exit region of the segment, in milliseconds." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingLookAheadTime = { UE4CodeGen_Private::EPropertyClass::Int, "RemainingLookAheadTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, RemainingLookAheadTime), METADATA_PARAMS(NewProp_RemainingLookAheadTime_MetaData, ARRAY_COUNT(NewProp_RemainingLookAheadTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostExitDuration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Duration of the active region of the segment (between the Entry and Exit Cues), in milliseconds." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostExitDuration = { UE4CodeGen_Private::EPropertyClass::Int, "PostExitDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, PostExitDuration), METADATA_PARAMS(NewProp_PostExitDuration_MetaData, ARRAY_COUNT(NewProp_PostExitDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDuration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Duration of the pre-entry region of the segment, in milliseconds." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveDuration = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, ActiveDuration), METADATA_PARAMS(NewProp_ActiveDuration_MetaData, ARRAY_COUNT(NewProp_ActiveDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreEntryDuration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Current position of the segment, relative to the Entry Cue, in milliseconds. Range is [-iPreEntryDuration, iActiveDuration+iPostExitDuration]." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreEntryDuration = { UE4CodeGen_Private::EPropertyClass::Int, "PreEntryDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, PreEntryDuration), METADATA_PARAMS(NewProp_PreEntryDuration_MetaData, ARRAY_COUNT(NewProp_PreEntryDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPosition = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkSegmentInfo, CurrentPosition), METADATA_PARAMS(NewProp_CurrentPosition_MetaData, ARRAY_COUNT(NewProp_CurrentPosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BarDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BeatDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemainingLookAheadTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostExitDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreEntryDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentPosition,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkSegmentInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkSegmentInfo),
				alignof(FAkSegmentInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSegmentInfo_CRC() { return 2495115348U; }
class UScriptStruct* FAkMidiProgramChange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiProgramChange, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiProgramChange"), sizeof(FAkMidiProgramChange), Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiProgramChange(FAkMidiProgramChange::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiProgramChange"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiProgramChange
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiProgramChange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiProgramChange")),new UScriptStruct::TCppStructOps<FAkMidiProgramChange>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiProgramChange;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiProgramChange"), sizeof(FAkMidiProgramChange), Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiProgramChange>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgramNum_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|ProgramChange" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgramNum = { UE4CodeGen_Private::EPropertyClass::Byte, "ProgramNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiProgramChange, ProgramNum), nullptr, METADATA_PARAMS(NewProp_ProgramNum_MetaData, ARRAY_COUNT(NewProp_ProgramNum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProgramNum,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FAkMidiEventBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiProgramChange",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiProgramChange),
				alignof(FAkMidiProgramChange),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiProgramChange_CRC() { return 1334741801U; }
class UScriptStruct* FAkMidiChannelAftertouch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiChannelAftertouch"), sizeof(FAkMidiChannelAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiChannelAftertouch(FAkMidiChannelAftertouch::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiChannelAftertouch"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiChannelAftertouch
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiChannelAftertouch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiChannelAftertouch")),new UScriptStruct::TCppStructOps<FAkMidiChannelAftertouch>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiChannelAftertouch;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiChannelAftertouch"), sizeof(FAkMidiChannelAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiChannelAftertouch>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|ChannelAfterTouch" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiChannelAftertouch, Value), nullptr, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FAkMidiEventBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiChannelAftertouch",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiChannelAftertouch),
				alignof(FAkMidiChannelAftertouch),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_CRC() { return 1565530814U; }
class UScriptStruct* FAkMidiNoteAftertouch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteAftertouch"), sizeof(FAkMidiNoteAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiNoteAftertouch(FAkMidiNoteAftertouch::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiNoteAftertouch"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteAftertouch
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteAftertouch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiNoteAftertouch")),new UScriptStruct::TCppStructOps<FAkMidiNoteAftertouch>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteAftertouch;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiNoteAftertouch"), sizeof(FAkMidiNoteAftertouch), Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteAftertouch>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteAfterTouch" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiNoteAftertouch, Value), nullptr, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteAfterTouch" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Note = { UE4CodeGen_Private::EPropertyClass::Byte, "Note", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiNoteAftertouch, Note), nullptr, METADATA_PARAMS(NewProp_Note_MetaData, ARRAY_COUNT(NewProp_Note_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Note,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FAkMidiEventBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiNoteAftertouch",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiNoteAftertouch),
				alignof(FAkMidiNoteAftertouch),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_CRC() { return 3886727236U; }
class UScriptStruct* FAkMidiPitchBend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiPitchBend, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiPitchBend"), sizeof(FAkMidiPitchBend), Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiPitchBend(FAkMidiPitchBend::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiPitchBend"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiPitchBend
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiPitchBend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiPitchBend")),new UScriptStruct::TCppStructOps<FAkMidiPitchBend>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiPitchBend;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiPitchBend"), sizeof(FAkMidiPitchBend), Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiPitchBend>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullValue_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullValue = { UE4CodeGen_Private::EPropertyClass::Int, "FullValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, FullValue), METADATA_PARAMS(NewProp_FullValue_MetaData, ARRAY_COUNT(NewProp_FullValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueMsb_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueMsb = { UE4CodeGen_Private::EPropertyClass::Byte, "ValueMsb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, ValueMsb), nullptr, METADATA_PARAMS(NewProp_ValueMsb_MetaData, ARRAY_COUNT(NewProp_ValueMsb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueLsb_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueLsb = { UE4CodeGen_Private::EPropertyClass::Byte, "ValueLsb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, ValueLsb), nullptr, METADATA_PARAMS(NewProp_ValueLsb_MetaData, ARRAY_COUNT(NewProp_ValueLsb_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValueMsb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValueLsb,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FAkMidiEventBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiPitchBend",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiPitchBend),
				alignof(FAkMidiPitchBend),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiPitchBend_CRC() { return 2733561904U; }
class UScriptStruct* FAkMidiCc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiCc_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiCc, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiCc"), sizeof(FAkMidiCc), Get_Z_Construct_UScriptStruct_FAkMidiCc_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiCc(FAkMidiCc::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiCc"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiCc
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiCc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiCc")),new UScriptStruct::TCppStructOps<FAkMidiCc>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiCc;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiCc_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiCc"), sizeof(FAkMidiCc), Get_Z_Construct_UScriptStruct_FAkMidiCc_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiCc>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|CC" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiCc, Value), nullptr, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cc_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|CC" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cc = { UE4CodeGen_Private::EPropertyClass::Enum, "Cc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiCc, Cc), Z_Construct_UEnum_AkAudio_EAkMidiCcValues, METADATA_PARAMS(NewProp_Cc_MetaData, ARRAY_COUNT(NewProp_Cc_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cc_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cc_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FAkMidiEventBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiCc",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiCc),
				alignof(FAkMidiCc),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiCc_CRC() { return 1149637875U; }
class UScriptStruct* FAkMidiNoteOnOff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteOnOff, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteOnOff"), sizeof(FAkMidiNoteOnOff), Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiNoteOnOff(FAkMidiNoteOnOff::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiNoteOnOff"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteOnOff
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteOnOff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiNoteOnOff")),new UScriptStruct::TCppStructOps<FAkMidiNoteOnOff>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiNoteOnOff;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiNoteOnOff"), sizeof(FAkMidiNoteOnOff), Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteOnOff>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteOnOff" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Byte, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiNoteOnOff, Velocity), nullptr, METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteOnOff" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Note = { UE4CodeGen_Private::EPropertyClass::Byte, "Note", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiNoteOnOff, Note), nullptr, METADATA_PARAMS(NewProp_Note_MetaData, ARRAY_COUNT(NewProp_Note_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Note,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FAkMidiEventBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiNoteOnOff",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiNoteOnOff),
				alignof(FAkMidiNoteOnOff),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiNoteOnOff_CRC() { return 4270426134U; }
class UScriptStruct* FAkMidiGeneric::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiGeneric_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiGeneric, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiGeneric"), sizeof(FAkMidiGeneric), Get_Z_Construct_UScriptStruct_FAkMidiGeneric_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiGeneric(FAkMidiGeneric::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiGeneric"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiGeneric
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiGeneric()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiGeneric")),new UScriptStruct::TCppStructOps<FAkMidiGeneric>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiGeneric;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiGeneric_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiGeneric"), sizeof(FAkMidiGeneric), Get_Z_Construct_UScriptStruct_FAkMidiGeneric_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiGeneric>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|Generic" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Param2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiGeneric, Param2), nullptr, METADATA_PARAMS(NewProp_Param2_MetaData, ARRAY_COUNT(NewProp_Param2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|Generic" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Param1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiGeneric, Param1), nullptr, METADATA_PARAMS(NewProp_Param1_MetaData, ARRAY_COUNT(NewProp_Param1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param1,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FAkMidiEventBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiGeneric",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiGeneric),
				alignof(FAkMidiGeneric),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiGeneric_CRC() { return 3141670467U; }
class UScriptStruct* FAkMidiEventBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMidiEventBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiEventBase, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiEventBase"), sizeof(FAkMidiEventBase), Get_Z_Construct_UScriptStruct_FAkMidiEventBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMidiEventBase(FAkMidiEventBase::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMidiEventBase"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiEventBase
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMidiEventBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkMidiEventBase")),new UScriptStruct::TCppStructOps<FAkMidiEventBase>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMidiEventBase;
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMidiEventBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMidiEventBase"), sizeof(FAkMidiEventBase), Get_Z_Construct_UScriptStruct_FAkMidiEventBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiEventBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chan_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Chan = { UE4CodeGen_Private::EPropertyClass::Byte, "Chan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiEventBase, Chan), nullptr, METADATA_PARAMS(NewProp_Chan_MetaData, ARRAY_COUNT(NewProp_Chan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAkMidiEventBase, Type), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Chan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkMidiEventBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkMidiEventBase),
				alignof(FAkMidiEventBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMidiEventBase_CRC() { return 2216287802U; }
	void UAkCallbackInfo::StaticRegisterNativesUAkCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister()
	{
		return UAkCallbackInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkGameplayTypes.h" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "Callback information structure used as base for all notifications handled by \\ref AkCallbackFunc.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AkComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001d, 1, nullptr, STRUCT_OFFSET(UAkCallbackInfo, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(NewProp_AkComponent_MetaData, ARRAY_COUNT(NewProp_AkComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkCallbackInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkCallbackInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UAkCallbackInfo, 1749397103);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkCallbackInfo(Z_Construct_UClass_UAkCallbackInfo, &UAkCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkCallbackInfo);
	void UAkEventCallbackInfo::StaticRegisterNativesUAkEventCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister()
	{
		return UAkEventCallbackInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkEventCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkGameplayTypes.h" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "Callback information structure corresponding to \\ref AK_EndOfEvent, \\ref AK_MusicPlayStarted and \\ref AK_Starvation.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|AkEvent" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Playing ID of Event, returned by PostEvent()" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventID = { UE4CodeGen_Private::EPropertyClass::Int, "EventID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkEventCallbackInfo, EventID), METADATA_PARAMS(NewProp_EventID_MetaData, ARRAY_COUNT(NewProp_EventID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|AkEvent" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID = { UE4CodeGen_Private::EPropertyClass::Int, "PlayingID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkEventCallbackInfo, PlayingID), METADATA_PARAMS(NewProp_PlayingID_MetaData, ARRAY_COUNT(NewProp_PlayingID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayingID,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkEventCallbackInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkEventCallbackInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UAkEventCallbackInfo, 1188992863);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkEventCallbackInfo(Z_Construct_UClass_UAkEventCallbackInfo, &UAkEventCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkEventCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkEventCallbackInfo);
	void UAkMIDIEventCallbackInfo::StaticRegisterNativesUAkMIDIEventCallbackInfo()
	{
		UClass* Class = UAkMIDIEventCallbackInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCc", &UAkMIDIEventCallbackInfo::execGetCc },
			{ "GetChannel", &UAkMIDIEventCallbackInfo::execGetChannel },
			{ "GetChannelAftertouch", &UAkMIDIEventCallbackInfo::execGetChannelAftertouch },
			{ "GetGeneric", &UAkMIDIEventCallbackInfo::execGetGeneric },
			{ "GetNoteAftertouch", &UAkMIDIEventCallbackInfo::execGetNoteAftertouch },
			{ "GetNoteOff", &UAkMIDIEventCallbackInfo::execGetNoteOff },
			{ "GetNoteOn", &UAkMIDIEventCallbackInfo::execGetNoteOn },
			{ "GetPitchBend", &UAkMIDIEventCallbackInfo::execGetPitchBend },
			{ "GetProgramChange", &UAkMIDIEventCallbackInfo::execGetProgramChange },
			{ "GetType", &UAkMIDIEventCallbackInfo::execGetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc()
	{
		struct AkMIDIEventCallbackInfo_eventGetCc_Parms
		{
			FAkMidiCc AsCc;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetCc_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetCc_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsCc = { UE4CodeGen_Private::EPropertyClass::Struct, "AsCc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetCc_Parms, AsCc), Z_Construct_UScriptStruct_FAkMidiCc, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsCc,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetCc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetCc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel()
	{
		struct AkMIDIEventCallbackInfo_eventGetChannel_Parms
		{
			uint8 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkMIDIEventCallbackInfo_eventGetChannel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch()
	{
		struct AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms
		{
			FAkMidiChannelAftertouch AsChannelAftertouch;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsChannelAftertouch = { UE4CodeGen_Private::EPropertyClass::Struct, "AsChannelAftertouch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms, AsChannelAftertouch), Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsChannelAftertouch,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetChannelAftertouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric()
	{
		struct AkMIDIEventCallbackInfo_eventGetGeneric_Parms
		{
			FAkMidiGeneric AsGeneric;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetGeneric_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetGeneric_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsGeneric = { UE4CodeGen_Private::EPropertyClass::Struct, "AsGeneric", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetGeneric_Parms, AsGeneric), Z_Construct_UScriptStruct_FAkMidiGeneric, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsGeneric,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetGeneric", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetGeneric_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch()
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms
		{
			FAkMidiNoteAftertouch AsNoteAftertouch;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsNoteAftertouch = { UE4CodeGen_Private::EPropertyClass::Struct, "AsNoteAftertouch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms, AsNoteAftertouch), Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsNoteAftertouch,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetNoteAftertouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff()
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOff_Parms
		{
			FAkMidiNoteOnOff AsNoteOff;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetNoteOff_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsNoteOff = { UE4CodeGen_Private::EPropertyClass::Struct, "AsNoteOff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms, AsNoteOff), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsNoteOff,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetNoteOff", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn()
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOn_Parms
		{
			FAkMidiNoteOnOff AsNoteOn;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetNoteOn_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsNoteOn = { UE4CodeGen_Private::EPropertyClass::Struct, "AsNoteOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms, AsNoteOn), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsNoteOn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetNoteOn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend()
	{
		struct AkMIDIEventCallbackInfo_eventGetPitchBend_Parms
		{
			FAkMidiPitchBend AsPitchBend;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetPitchBend_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsPitchBend = { UE4CodeGen_Private::EPropertyClass::Struct, "AsPitchBend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms, AsPitchBend), Z_Construct_UScriptStruct_FAkMidiPitchBend, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsPitchBend,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetPitchBend", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange()
	{
		struct AkMIDIEventCallbackInfo_eventGetProgramChange_Parms
		{
			FAkMidiProgramChange AsProgramChange;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkMIDIEventCallbackInfo_eventGetProgramChange_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsProgramChange = { UE4CodeGen_Private::EPropertyClass::Struct, "AsProgramChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms, AsProgramChange), Z_Construct_UScriptStruct_FAkMidiProgramChange, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsProgramChange,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetProgramChange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType()
	{
		struct AkMIDIEventCallbackInfo_eventGetType_Parms
		{
			EAkMidiEventType ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, "GetType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkMIDIEventCallbackInfo_eventGetType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister()
	{
		return UAkMIDIEventCallbackInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc, "GetCc" }, // 1561243395
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel, "GetChannel" }, // 993326474
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch, "GetChannelAftertouch" }, // 3709213973
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric, "GetGeneric" }, // 3759513137
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch, "GetNoteAftertouch" }, // 510646196
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff, "GetNoteOff" }, // 1983319799
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn, "GetNoteOn" }, // 498595316
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend, "GetPitchBend" }, // 1411548985
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange, "GetProgramChange" }, // 2646651408
				{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType, "GetType" }, // 1750071642
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkGameplayTypes.h" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "Callback information structure corresponding to \\ref AK_MidiEvent\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkMIDIEventCallbackInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkMIDIEventCallbackInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMIDIEventCallbackInfo, 3908888966);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMIDIEventCallbackInfo(Z_Construct_UClass_UAkMIDIEventCallbackInfo, &UAkMIDIEventCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMIDIEventCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMIDIEventCallbackInfo);
	void UAkMarkerCallbackInfo::StaticRegisterNativesUAkMarkerCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister()
	{
		return UAkMarkerCallbackInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkGameplayTypes.h" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "Callback information structure corresponding to \\ref AK_Marker.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events\n- \\ref soundengine_markers" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Position in the cue point (unit: sample frames)" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label = { UE4CodeGen_Private::EPropertyClass::Str, "Label", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Label), METADATA_PARAMS(NewProp_Label_MetaData, ARRAY_COUNT(NewProp_Label_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Cue point identifier" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Int, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Position), METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Identifier = { UE4CodeGen_Private::EPropertyClass::Int, "Identifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Identifier), METADATA_PARAMS(NewProp_Identifier_MetaData, ARRAY_COUNT(NewProp_Identifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Label,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Identifier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkMarkerCallbackInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkMarkerCallbackInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UAkMarkerCallbackInfo, 2501243372);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMarkerCallbackInfo(Z_Construct_UClass_UAkMarkerCallbackInfo, &UAkMarkerCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMarkerCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMarkerCallbackInfo);
	void UAkDurationCallbackInfo::StaticRegisterNativesUAkDurationCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister()
	{
		return UAkDurationCallbackInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkGameplayTypes.h" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "Callback information structure corresponding to \\ref AK_Duration.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Media ID of playing item. (corresponds to 'ID' attribute of 'File' element in SoundBank metadata file)" },
			};
#endif
			auto NewProp_bStreaming_SetBit = [](void* Obj){ ((UAkDurationCallbackInfo*)Obj)->bStreaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkDurationCallbackInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStreaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStreaming_MetaData, ARRAY_COUNT(NewProp_bStreaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaID_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Audio Node ID of playing item" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MediaID = { UE4CodeGen_Private::EPropertyClass::Int, "MediaID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, MediaID), METADATA_PARAMS(NewProp_MediaID_MetaData, ARRAY_COUNT(NewProp_MediaID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioNodeID_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Estimated duration of the sound depending on source settings such as pitch. (unit: milliseconds)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioNodeID = { UE4CodeGen_Private::EPropertyClass::Int, "AudioNodeID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, AudioNodeID), METADATA_PARAMS(NewProp_AudioNodeID_MetaData, ARRAY_COUNT(NewProp_AudioNodeID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedDuration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Duration of the sound (unit: milliseconds)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EstimatedDuration = { UE4CodeGen_Private::EPropertyClass::Float, "EstimatedDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, EstimatedDuration), METADATA_PARAMS(NewProp_EstimatedDuration_MetaData, ARRAY_COUNT(NewProp_EstimatedDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MediaID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioNodeID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EstimatedDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkDurationCallbackInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkDurationCallbackInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UAkDurationCallbackInfo, 2205683237);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkDurationCallbackInfo(Z_Construct_UClass_UAkDurationCallbackInfo, &UAkDurationCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkDurationCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkDurationCallbackInfo);
	void UAkMusicSyncCallbackInfo::StaticRegisterNativesUAkMusicSyncCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister()
	{
		return UAkMusicSyncCallbackInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkGameplayTypes.h" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCueName_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Would be either \\ref AK_MusicSyncEntry, \\ref AK_MusicSyncBeat, \\ref AK_MusicSyncBar, \\ref AK_MusicSyncExit, \\ref AK_MusicSyncGrid, \\ref AK_MusicSyncPoint or \\ref AK_MusicSyncUserCue." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserCueName = { UE4CodeGen_Private::EPropertyClass::Str, "UserCueName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, UserCueName), METADATA_PARAMS(NewProp_UserCueName_MetaData, ARRAY_COUNT(NewProp_UserCueName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicSyncType_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Segment information corresponding to the segment triggering this callback." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MusicSyncType = { UE4CodeGen_Private::EPropertyClass::Enum, "MusicSyncType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, MusicSyncType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(NewProp_MusicSyncType_MetaData, ARRAY_COUNT(NewProp_MusicSyncType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MusicSyncType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentInfo_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
				{ "ToolTip", "< Playing ID of Event, returned by PostEvent()" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, SegmentInfo), Z_Construct_UScriptStruct_FAkSegmentInfo, METADATA_PARAMS(NewProp_SegmentInfo_MetaData, ARRAY_COUNT(NewProp_SegmentInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[] = {
				{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
				{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID = { UE4CodeGen_Private::EPropertyClass::Int, "PlayingID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, PlayingID), METADATA_PARAMS(NewProp_PlayingID_MetaData, ARRAY_COUNT(NewProp_PlayingID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserCueName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MusicSyncType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MusicSyncType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayingID,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkMusicSyncCallbackInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkMusicSyncCallbackInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UAkMusicSyncCallbackInfo, 2111324406);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMusicSyncCallbackInfo(Z_Construct_UClass_UAkMusicSyncCallbackInfo, &UAkMusicSyncCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMusicSyncCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMusicSyncCallbackInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
