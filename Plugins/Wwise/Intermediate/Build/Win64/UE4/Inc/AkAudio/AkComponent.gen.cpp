// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetListeners();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_Stop();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static UEnum* EReflectionFilterBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EReflectionFilterBits, Z_Construct_UPackage__Script_AkAudio(), TEXT("EReflectionFilterBits"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionFilterBits(EReflectionFilterBits_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EReflectionFilterBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_CRC() { return 425968317U; }
	UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionFilterBits"), 0, Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectionFilterBits::Wall", (int64)EReflectionFilterBits::Wall },
				{ "EReflectionFilterBits::Ceiling", (int64)EReflectionFilterBits::Ceiling },
				{ "EReflectionFilterBits::Floor", (int64)EReflectionFilterBits::Floor },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EReflectionFilterBits",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EReflectionFilterBits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", &UAkComponent::execGetAttenuationRadius },
			{ "PostAkEvent", &UAkComponent::execPostAkEvent },
			{ "PostAkEventAndWaitForEnd", &UAkComponent::execPostAkEventAndWaitForEnd },
			{ "PostAkEventByName", &UAkComponent::execPostAkEventByName },
			{ "PostAssociatedAkEvent", &UAkComponent::execPostAssociatedAkEvent },
			{ "PostAssociatedAkEventAndWaitForEnd", &UAkComponent::execPostAssociatedAkEventAndWaitForEnd },
			{ "PostTrigger", &UAkComponent::execPostTrigger },
			{ "SetAttenuationScalingFactor", &UAkComponent::execSetAttenuationScalingFactor },
			{ "SetListeners", &UAkComponent::execSetListeners },
			{ "SetOutputBusVolume", &UAkComponent::execSetOutputBusVolume },
			{ "SetRTPCValue", &UAkComponent::execSetRTPCValue },
			{ "SetStopWhenOwnerDestroyed", &UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", &UAkComponent::execSetSwitch },
			{ "Stop", &UAkComponent::execStop },
			{ "UseEarlyReflections", &UAkComponent::execUseEarlyReflections },
			{ "UseReverbVolumes", &UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "GetAttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020409, sizeof(AkComponent_eventGetAttenuationRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent()
	{
		struct AkComponent_eventPostAkEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			FString in_EventName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "in_EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, in_EventName), METADATA_PARAMS(NewProp_in_EventName_MetaData, ARRAY_COUNT(NewProp_in_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback = { UE4CodeGen_Private::EPropertyClass::Delegate, "PostEventCallback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040008000182, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(NewProp_PostEventCallback_MetaData, ARRAY_COUNT(NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
				{ "Bitmask", "" },
				{ "BitmaskEnum", "EAkCallbackType" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask = { UE4CodeGen_Private::EPropertyClass::Int, "CallbackMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, CallbackMask), METADATA_PARAMS(NewProp_CallbackMask_MetaData, ARRAY_COUNT(NewProp_CallbackMask_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent = { UE4CodeGen_Private::EPropertyClass::Object, "AkEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_in_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostEventCallback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallbackMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "AutoCreateRefTerm", "PostEventCallback" },
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Posts an event to Wwise, using this component as the game object source\n\n@param AkEvent               The event to post\n@param CallbackMask  Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAkEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420409, sizeof(AkComponent_eventPostAkEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd()
	{
		struct AkComponent_eventPostAkEventAndWaitForEnd_Parms
		{
			UAkAudioEvent* AkEvent;
			FString in_EventName;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "in_EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, in_EventName), METADATA_PARAMS(NewProp_in_EventName_MetaData, ARRAY_COUNT(NewProp_in_EventName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent = { UE4CodeGen_Private::EPropertyClass::Object, "AkEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatentInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_in_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "Audiokinetic|AkComponent" },
				{ "Latent", "" },
				{ "LatentInfo", "LatentInfo" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Posts an event to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAkEventAndWaitForEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkComponent_eventPostAkEventAndWaitForEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName()
	{
		struct AkComponent_eventPostAkEventByName_Parms
		{
			FString in_EventName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "in_EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, in_EventName), METADATA_PARAMS(NewProp_in_EventName_MetaData, ARRAY_COUNT(NewProp_in_EventName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_in_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Please use the \"Event Name\" field of Post Ak Event" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Posts an event to Wwise using its name, using this component as the game object source\n\n@param AkEvent               The event to post" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAkEventByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventPostAkEventByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent()
	{
		struct AkComponent_eventPostAssociatedAkEvent_Parms
		{
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback = { UE4CodeGen_Private::EPropertyClass::Delegate, "PostEventCallback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(NewProp_PostEventCallback_MetaData, ARRAY_COUNT(NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
				{ "Bitmask", "" },
				{ "BitmaskEnum", "EAkCallbackType" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask = { UE4CodeGen_Private::EPropertyClass::Int, "CallbackMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, CallbackMask), METADATA_PARAMS(NewProp_CallbackMask_MetaData, ARRAY_COUNT(NewProp_CallbackMask_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostEventCallback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallbackMask,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "PostEventCallback" },
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Posts this component's AkAudioEvent to Wwise, using this component as the game object source" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAssociatedAkEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420409, sizeof(AkComponent_eventPostAssociatedAkEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd()
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms
		{
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatentInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "Latent", "" },
				{ "LatentInfo", "LatentInfo" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAssociatedAkEventAndWaitForEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			FString Trigger;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Trigger = { UE4CodeGen_Private::EPropertyClass::Str, "Trigger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Trigger,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger               The name of the trigger" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventPostTrigger_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetAttenuationScalingFactor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Sets the attenuation scaling factor, which modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetAttenuationScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetAttenuationScalingFactor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
	{
		struct AkComponent_eventSetListeners_Parms
		{
			TArray<UAkComponent*> Listeners;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[] = {
				{ "EditInline", "true" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Listeners = { UE4CodeGen_Private::EPropertyClass::Array, "Listeners", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), METADATA_PARAMS(NewProp_Listeners_MetaData, ARRAY_COUNT(NewProp_Listeners_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Listeners", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Listeners,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Listeners_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Set a game object's listeners\n\n@param Listeners     The array of components that listen to this component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetListeners", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420409, sizeof(AkComponent_eventSetListeners_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusVolume = { UE4CodeGen_Private::EPropertyClass::Float, "BusVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusVolume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetOutputBusVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetOutputBusVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue()
	{
		struct AkComponent_eventSetRTPCValue_Parms
		{
			FString RTPC;
			float Value;
			int32 InterpolationTimeMs;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs = { UE4CodeGen_Private::EPropertyClass::Int, "InterpolationTimeMs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC = { UE4CodeGen_Private::EPropertyClass::Str, "RTPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationTimeMs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RTPC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Sets an RTPC value, using this component as the game object source\n\n@param RTPC                  The name of the RTPC to set\n@param Value                 The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetRTPCValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetRTPCValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bStopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenOwnerDestroyed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Sets whether or not to stop sounds when the component's owner is destroyed\n\n@param bStopWhenOwnerDestroyed       Whether or not to stop sounds when the component's owner is destroyed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			FString SwitchGroup;
			FString SwitchState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchState = { UE4CodeGen_Private::EPropertyClass::Str, "SwitchState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchGroup = { UE4CodeGen_Private::EPropertyClass::Str, "SwitchGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwitchState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwitchGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup   The name of the switch group\n@param SwitchState   The new state of the switch" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetSwitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetSwitch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Stops playback using this component as the game object to stop" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections()
	{
		struct AkComponent_eventUseEarlyReflections_Parms
		{
			UAkAuxBus* AuxBus;
			int32 Order;
			float BusSendGain;
			float MaxPathLength;
			bool SpotReflectors;
			FString AuxBusName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "AuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(NewProp_AuxBusName_MetaData, ARRAY_COUNT(NewProp_AuxBusName_MetaData)) };
			auto NewProp_SpotReflectors_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors = { UE4CodeGen_Private::EPropertyClass::Bool, "SpotReflectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SpotReflectors_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPathLength = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPathLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, MaxPathLength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendGain = { UE4CodeGen_Private::EPropertyClass::Float, "BusSendGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, BusSendGain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Order = { UE4CodeGen_Private::EPropertyClass::Int, "Order", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, Order), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "AuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpotReflectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPathLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusSendGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Order,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBus,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "5" },
				{ "Category", "Audiokinetic|AkComponent" },
				{ "CPP_Default_BusSendGain", "1.000000" },
				{ "CPP_Default_MaxPathLength", "100000.000000" },
				{ "CPP_Default_Order", "1" },
				{ "CPP_Default_SpotReflectors", "false" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "UseEarlyReflections. Enable early reflections for this ak component.\n\n@param AuxBus Aux bus that contains the AkReflect plugin\n@param Order Max Order of reflections.\n@param BusSendGain Send gain for the aux bus.\n@param MaxPathLength Sound will reflect up to this max distance between emitter and reflective surface.\n@param EnableSpotReflectors Enable reflections off spot reflectors.\n@param AuxBusName     Aux bus name that contains the AkReflect plugin" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "UseEarlyReflections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkComponent_eventUseEarlyReflections_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_inUseReverbVolumes_SetBit = [](void* Obj){ ((AkComponent_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes = { UE4CodeGen_Private::EPropertyClass::Bool, "inUseReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseReverbVolumes_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_inUseReverbVolumes_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inUseReverbVolumes,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Set UseReverbVolumes flag. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes    Whether to use reverb volumes or not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "UseReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventUseReverbVolumes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 3608703120
				{ &Z_Construct_UFunction_UAkComponent_PostAkEvent, "PostAkEvent" }, // 228951316
				{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd, "PostAkEventAndWaitForEnd" }, // 2342251485
				{ &Z_Construct_UFunction_UAkComponent_PostAkEventByName, "PostAkEventByName" }, // 800387746
				{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // 2374025518
				{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd, "PostAssociatedAkEventAndWaitForEnd" }, // 1694068224
				{ &Z_Construct_UFunction_UAkComponent_PostTrigger, "PostTrigger" }, // 449425777
				{ &Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 302979439
				{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 4240005508
				{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 172043461
				{ &Z_Construct_UFunction_UAkComponent_SetRTPCValue, "SetRTPCValue" }, // 2867631213
				{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 646278805
				{ &Z_Construct_UFunction_UAkComponent_SetSwitch, "SetSwitch" }, // 2877628479
				{ &Z_Construct_UFunction_UAkComponent_Stop, "Stop" }, // 3932374154
				{ &Z_Construct_UFunction_UAkComponent_UseEarlyReflections, "UseEarlyReflections" }, // 2479222832
				{ &Z_Construct_UFunction_UAkComponent_UseReverbVolumes, "UseReverbVolumes" }, // 4012645164
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "AkComponent" },
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Audiokinetic" },
				{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
				{ "IncludePath", "AkComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "UAkComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent = { UE4CodeGen_Private::EPropertyClass::Object, "AkAudioEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(NewProp_AkAudioEvent_MetaData, ARRAY_COUNT(NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[] = {
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Time interval between occlusion/obstruction checks. Set to 0 to disable occlusion on this component." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionRefreshInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(NewProp_OcclusionRefreshInterval_MetaData, ARRAY_COUNT(NewProp_OcclusionRefreshInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[] = {
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AttenuationScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, AttenuationScalingFactor), METADATA_PARAMS(NewProp_AttenuationScalingFactor_MetaData, ARRAY_COUNT(NewProp_AttenuationScalingFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Stop sound when owner is destroyed?" },
			};
#endif
			auto NewProp_StopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->StopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "StopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_StopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_StopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(NewProp_StopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSoundPropagation_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			auto NewProp_DrawSoundPropagation_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawSoundPropagation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawSoundPropagation = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawSoundPropagation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawSoundPropagation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawSoundPropagation_MetaData, ARRAY_COUNT(NewProp_DrawSoundPropagation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawGeometricDiffraction_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			auto NewProp_DrawGeometricDiffraction_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawGeometricDiffraction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawGeometricDiffraction = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawGeometricDiffraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawGeometricDiffraction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawGeometricDiffraction_MetaData, ARRAY_COUNT(NewProp_DrawGeometricDiffraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			auto NewProp_DrawHigherOrderReflections_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawHigherOrderReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawHigherOrderReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawHigherOrderReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawHigherOrderReflections_MetaData, ARRAY_COUNT(NewProp_DrawHigherOrderReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			auto NewProp_DrawSecondOrderReflections_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawSecondOrderReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawSecondOrderReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawSecondOrderReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawSecondOrderReflections_MetaData, ARRAY_COUNT(NewProp_DrawSecondOrderReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			auto NewProp_DrawFirstOrderReflections_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawFirstOrderReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawFirstOrderReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawFirstOrderReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawFirstOrderReflections_MetaData, ARRAY_COUNT(NewProp_DrawFirstOrderReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPathLength_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction (Experimental)" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "The maximum length that a diffracted sound can travel.  Should be no longer (and possibly shorter for less CPU usage) than the maximum attenuation of the sound emitter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_diffractionMaxPathLength = { UE4CodeGen_Private::EPropertyClass::Float, "diffractionMaxPathLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength), METADATA_PARAMS(NewProp_diffractionMaxPathLength_MetaData, ARRAY_COUNT(NewProp_diffractionMaxPathLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPaths_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction (Experimental)" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "The maximum number of paths to the listener that the sound can take around obstacles." },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_diffractionMaxPaths = { UE4CodeGen_Private::EPropertyClass::Int, "diffractionMaxPaths", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, diffractionMaxPaths), METADATA_PARAMS(NewProp_diffractionMaxPaths_MetaData, ARRAY_COUNT(NewProp_diffractionMaxPaths_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxEdges_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction (Experimental)" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "The maximum number of edges that the sound can diffract around between the emitter and the listener." },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_diffractionMaxEdges = { UE4CodeGen_Private::EPropertyClass::Int, "diffractionMaxEdges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, diffractionMaxEdges), METADATA_PARAMS(NewProp_diffractionMaxEdges_MetaData, ARRAY_COUNT(NewProp_diffractionMaxEdges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomReverbAuxBusGain_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Room" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Send gain (0.f-1.f) that is applied when sending to the bus that is associated with the room that the emitter is in." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roomReverbAuxBusGain = { UE4CodeGen_Private::EPropertyClass::Float, "roomReverbAuxBusGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain), METADATA_PARAMS(NewProp_roomReverbAuxBusGain_MetaData, ARRAY_COUNT(NewProp_roomReverbAuxBusGain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Reflect" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Enable this component's sound to be reflected by spot reflectors." },
			};
#endif
			auto NewProp_EnableSpotReflectors_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->EnableSpotReflectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableSpotReflectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableSpotReflectors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableSpotReflectors_MetaData, ARRAY_COUNT(NewProp_EnableSpotReflectors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[] = {
				{ "Category", "AkComponent|Occlusion" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "OcclusionCollisionChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_OcclusionCollisionChannel_MetaData, ARRAY_COUNT(NewProp_OcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionMaxPathLength_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Reflect" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "A heuristic to stop the computation of reflections. Should be no longer (and possibly shorter for less CPU usage) than the maximum attenuation of the sound emitter." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionMaxPathLength = { UE4CodeGen_Private::EPropertyClass::Float, "EarlyReflectionMaxPathLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength), METADATA_PARAMS(NewProp_EarlyReflectionMaxPathLength_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionMaxPathLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Reflect" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Send gain (0.f-1.f) that is applied when sending to the bus that has the AkReflect plug-in." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain = { UE4CodeGen_Private::EPropertyClass::Float, "EarlyReflectionBusSendGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(NewProp_EarlyReflectionBusSendGain_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionBusSendGain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionOrder_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Reflect" },
				{ "ClampMax", "4" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Maximum number of reflections that will be processed when computing indirect paths via the geometric reflections API. Reflection processing grows exponentially with the order of reflections, so this number should be kept low." },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EarlyReflectionOrder = { UE4CodeGen_Private::EPropertyClass::Int, "EarlyReflectionOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder), METADATA_PARAMS(NewProp_EarlyReflectionOrder_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionOrder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Reflect" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Wwise Auxiliary Bus Name for early reflection processing" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "EarlyReflectionAuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(NewProp_EarlyReflectionAuxBusName_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionAuxBusName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[] = {
				{ "Category", "AkComponent|Spatial Audio|Reflect" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "ToolTip", "Wwise Auxiliary Bus for early reflection processing" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "EarlyReflectionAuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(NewProp_EarlyReflectionAuxBus_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionAuxBus_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkAudioEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionRefreshInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationScalingFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopWhenOwnerDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawSoundPropagation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawGeometricDiffraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawHigherOrderReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawSecondOrderReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawFirstOrderReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_diffractionMaxPathLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_diffractionMaxPaths,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_diffractionMaxEdges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_roomReverbAuxBusGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableSpotReflectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionCollisionChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionMaxPathLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionBusSendGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionAuxBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionAuxBus,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAkComponent, 4279510155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkComponent(Z_Construct_UClass_UAkComponent, &UAkComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
