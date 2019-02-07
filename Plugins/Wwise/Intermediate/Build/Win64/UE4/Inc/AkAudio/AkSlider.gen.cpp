// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AkWaapiUMG/Components/AkSlider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSlider() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_GetValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetLocked();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSlider_SetValue();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnPropertyDropDetected_Parms
		{
			FString PropertyDropped;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyDropped = { UE4CodeGen_Private::EPropertyClass::Str, "PropertyDropped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnPropertyDropDetected_Parms, PropertyDropped), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyDropped,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "A delegate type invoked when a property is being dragged." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, "OnPropertyDropDetected__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AkAudio_eventOnPropertyDropDetected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemDropDetected_Parms
		{
			FGuid ItemDroppedID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDroppedID = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemDroppedID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDropDetected_Parms, ItemDroppedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemDroppedID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "A delegate type invoked when an item is being dragged." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, "OnItemDropDetected__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AkAudio_eventOnItemDropDetected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature()
	{
		struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "A delegate type invoked when the value of the slider changes." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, "AkOnFloatValueChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAkWwiseItemToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseItemToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseItemToControl(FAkWwiseItemToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseItemToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWwiseItemToControl")),new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Structure for Wwise items that are displayed in the UMG.\n//: public UObject" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[] = {
				{ "Category", "ItemPath" },
				{ "DisplayName", "Path" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPath = { UE4CodeGen_Private::EPropertyClass::Str, "ItemPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPath), METADATA_PARAMS(NewProp_ItemPath_MetaData, ARRAY_COUNT(NewProp_ItemPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPicked_MetaData[] = {
				{ "Category", "ItemPicked" },
				{ "DisplayName", "Name" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The item to control" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemPicked = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemPicked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPicked), Z_Construct_UScriptStruct_FAkWwiseObjectDetails, METADATA_PARAMS(NewProp_ItemPicked_MetaData, ARRAY_COUNT(NewProp_ItemPicked_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemPicked,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkWwiseItemToControl",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkWwiseItemToControl),
				alignof(FAkWwiseItemToControl),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_CRC() { return 3204190211U; }
class UScriptStruct* FAkWwiseObjectDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseObjectDetails, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseObjectDetails(FAkWwiseObjectDetails::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseObjectDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWwiseObjectDetails")),new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Structure for Wwise item details." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
				{ "Category", "ItemId" },
				{ "DisplayName", "Id" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The id of the item to control" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId = { UE4CodeGen_Private::EPropertyClass::Str, "ItemId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemId), METADATA_PARAMS(NewProp_ItemId_MetaData, ARRAY_COUNT(NewProp_ItemId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[] = {
				{ "Category", "ItemPath" },
				{ "DisplayName", "Path" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The id of the item to control" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPath = { UE4CodeGen_Private::EPropertyClass::Str, "ItemPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemPath), METADATA_PARAMS(NewProp_ItemPath_MetaData, ARRAY_COUNT(NewProp_ItemPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
				{ "Category", "ItemName" },
				{ "DisplayName", "Name" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The name of the item to control" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName = { UE4CodeGen_Private::EPropertyClass::Str, "ItemName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemName), METADATA_PARAMS(NewProp_ItemName_MetaData, ARRAY_COUNT(NewProp_ItemName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkWwiseObjectDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkWwiseObjectDetails),
				alignof(FAkWwiseObjectDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC() { return 2234798454U; }
	void UAkSlider::StaticRegisterNativesUAkSlider()
	{
		UClass* Class = UAkSlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAkSliderItemId", &UAkSlider::execGetAkSliderItemId },
			{ "GetAkSliderItemProperty", &UAkSlider::execGetAkSliderItemProperty },
			{ "GetValue", &UAkSlider::execGetValue },
			{ "SetAkSliderItemId", &UAkSlider::execSetAkSliderItemId },
			{ "SetAkSliderItemProperty", &UAkSlider::execSetAkSliderItemProperty },
			{ "SetIndentHandle", &UAkSlider::execSetIndentHandle },
			{ "SetLocked", &UAkSlider::execSetLocked },
			{ "SetSliderBarColor", &UAkSlider::execSetSliderBarColor },
			{ "SetSliderHandleColor", &UAkSlider::execSetSliderHandleColor },
			{ "SetStepSize", &UAkSlider::execSetStepSize },
			{ "SetValue", &UAkSlider::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId()
	{
		struct AkSlider_eventGetAkSliderItemId_Parms
		{
			FGuid ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000582, 1, nullptr, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|WAAPI|Slider" },
				{ "Keywords", "Get Item Id" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Returns the current item id.\n\n@return an id as GUID." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "GetAkSliderItemId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(AkSlider_eventGetAkSliderItemId_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty()
	{
		struct AkSlider_eventGetAkSliderItemProperty_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000582, 1, nullptr, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemProperty_Parms, ReturnValue), METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|WAAPI|Slider" },
				{ "Keywords", "Get Item Property" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Returns the current item property.\n\n@return a property as string." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "GetAkSliderItemProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AkSlider_eventGetAkSliderItemProperty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_GetValue()
	{
		struct AkSlider_eventGetValue_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkSlider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Gets the current value of the slider." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AkSlider_eventGetValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId()
	{
		struct AkSlider_eventSetAkSliderItemId_Parms
		{
			FGuid ItemId;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ItemId_MetaData, ARRAY_COUNT(NewProp_ItemId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|WAAPI|Slider" },
				{ "Keywords", "Set Item Id" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Set the item id to the new one.\n@param ItemId - value (new id) to set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetAkSliderItemId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AkSlider_eventSetAkSliderItemId_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty()
	{
		struct AkSlider_eventSetAkSliderItemProperty_Parms
		{
			FString ItemProperty;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProperty = { UE4CodeGen_Private::EPropertyClass::Str, "ItemProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemProperty_Parms, ItemProperty), METADATA_PARAMS(NewProp_ItemProperty_MetaData, ARRAY_COUNT(NewProp_ItemProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemProperty,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|WAAPI|Slider" },
				{ "Keywords", "Set Item Property" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Set the item property to the new one.\n@param ItemId - value (new id) to set" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetAkSliderItemProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkSlider_eventSetAkSliderItemProperty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle()
	{
		struct AkSlider_eventSetIndentHandle_Parms
		{
			bool InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InValue_SetBit = [](void* Obj){ ((AkSlider_eventSetIndentHandle_Parms*)Obj)->InValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Bool, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkSlider_eventSetIndentHandle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Sets if the slidable area should be indented to fit the handle" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetIndentHandle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkSlider_eventSetIndentHandle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetLocked()
	{
		struct AkSlider_eventSetLocked_Parms
		{
			bool InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InValue_SetBit = [](void* Obj){ ((AkSlider_eventSetLocked_Parms*)Obj)->InValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Bool, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkSlider_eventSetLocked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Sets the handle to be interactive or fixed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetLocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkSlider_eventSetLocked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor()
	{
		struct AkSlider_eventSetSliderBarColor_Parms
		{
			FLinearColor InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Struct, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkSlider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Sets the color of the slider bar" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetSliderBarColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AkSlider_eventSetSliderBarColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor()
	{
		struct AkSlider_eventSetSliderHandleColor_Parms
		{
			FLinearColor InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Struct, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkSlider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Sets the color of the handle bar" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetSliderHandleColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AkSlider_eventSetSliderHandleColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize()
	{
		struct AkSlider_eventSetStepSize_Parms
		{
			float InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Float, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkSlider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetStepSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkSlider_eventSetStepSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSlider_SetValue()
	{
		struct AkSlider_eventSetValue_Parms
		{
			float InValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Float, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkSlider_eventSetValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Sets the current value of the slider." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, "SetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkSlider_eventSetValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSlider_NoRegister()
	{
		return UAkSlider::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkSlider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemId, "GetAkSliderItemId" }, // 567096735
				{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty, "GetAkSliderItemProperty" }, // 4041825746
				{ &Z_Construct_UFunction_UAkSlider_GetValue, "GetValue" }, // 1954265055
				{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemId, "SetAkSliderItemId" }, // 1396782968
				{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty, "SetAkSliderItemProperty" }, // 2318453647
				{ &Z_Construct_UFunction_UAkSlider_SetIndentHandle, "SetIndentHandle" }, // 550878012
				{ &Z_Construct_UFunction_UAkSlider_SetLocked, "SetLocked" }, // 3465951733
				{ &Z_Construct_UFunction_UAkSlider_SetSliderBarColor, "SetSliderBarColor" }, // 3543635015
				{ &Z_Construct_UFunction_UAkSlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 3097039608
				{ &Z_Construct_UFunction_UAkSlider_SetStepSize, "SetStepSize" }, // 2971427729
				{ &Z_Construct_UFunction_UAkSlider_SetValue, "SetValue" }, // 1392322771
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AkWaapiUMG/Components/AkSlider.h" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDropped_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Called when the item selection changes." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDropped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPropertyDropped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAkSlider, OnPropertyDropped), Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature, METADATA_PARAMS(NewProp_OnPropertyDropped_MetaData, ARRAY_COUNT(NewProp_OnPropertyDropped_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Called when the item selection changes." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnItemDropped", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAkSlider, OnItemDropped), Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature, METADATA_PARAMS(NewProp_OnItemDropped_MetaData, ARRAY_COUNT(NewProp_OnItemDropped_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
				{ "Category", "Widget Event" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Called when the value is changed by slider or typing." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnValueChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAkSlider, OnValueChanged), Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnValueChanged_MetaData, ARRAY_COUNT(NewProp_OnValueChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToControl_MetaData[] = {
				{ "Category", "Audiokinetic|WAAPI|Slider" },
				{ "DisplayName", "Item to control" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemToControl = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemToControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000024001, 1, nullptr, STRUCT_OFFSET(UAkSlider, ItemToControl), Z_Construct_UScriptStruct_FAkWwiseItemToControl, METADATA_PARAMS(NewProp_ItemToControl_MetaData, ARRAY_COUNT(NewProp_ItemToControl_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePropertyToControl_MetaData[] = {
				{ "Category", "Audiokinetic|WAAPI|Slider" },
				{ "DisplayName", "Property to control" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThePropertyToControl = { UE4CodeGen_Private::EPropertyClass::Struct, "ThePropertyToControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAkSlider, ThePropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(NewProp_ThePropertyToControl_MetaData, ARRAY_COUNT(NewProp_ThePropertyToControl_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Should the slider be focusable?" },
			};
#endif
			auto NewProp_IsFocusable_SetBit = [](void* Obj){ ((UAkSlider*)Obj)->IsFocusable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkSlider), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFocusable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFocusable_MetaData, ARRAY_COUNT(NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSize = { UE4CodeGen_Private::EPropertyClass::Float, "StepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkSlider, StepSize), METADATA_PARAMS(NewProp_StepSize_MetaData, ARRAY_COUNT(NewProp_StepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Whether the handle is interactive or fixed." },
			};
#endif
			auto NewProp_Locked_SetBit = [](void* Obj){ ((UAkSlider*)Obj)->Locked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Locked = { UE4CodeGen_Private::EPropertyClass::Bool, "Locked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkSlider), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Locked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Locked_MetaData, ARRAY_COUNT(NewProp_Locked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndentHandle_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "Whether the slidable area should be indented to fit the handle." },
			};
#endif
			auto NewProp_IndentHandle_SetBit = [](void* Obj){ ((UAkSlider*)Obj)->IndentHandle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IndentHandle = { UE4CodeGen_Private::EPropertyClass::Bool, "IndentHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkSlider), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IndentHandle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IndentHandle_MetaData, ARRAY_COUNT(NewProp_IndentHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The color to draw the slider handle in." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderHandleColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkSlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_SliderHandleColor_MetaData, ARRAY_COUNT(NewProp_SliderHandleColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The color to draw the slider bar in." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderBarColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderBarColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkSlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_SliderBarColor_MetaData, ARRAY_COUNT(NewProp_SliderBarColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The slider's orientation." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Byte, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAkSlider, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
				{ "Category", "Style" },
				{ "DisplayName", "Style" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The progress bar style" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkSlider, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(NewProp_WidgetStyle_MetaData, ARRAY_COUNT(NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "ValueDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UAkSlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(NewProp_ValueDelegate_MetaData, ARRAY_COUNT(NewProp_ValueDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
				{ "ToolTip", "The volume value to display." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAkSlider, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPropertyDropped,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnItemDropped,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnValueChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemToControl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThePropertyToControl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFocusable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Locked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndentHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SliderHandleColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SliderBarColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetStyle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValueDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkSlider>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkSlider::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00086u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Editor",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSlider, 1921241225);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSlider(Z_Construct_UClass_UAkSlider, &UAkSlider::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSlider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSlider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
