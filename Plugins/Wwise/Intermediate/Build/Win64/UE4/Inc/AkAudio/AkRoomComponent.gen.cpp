// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AkRoomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRoomComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkRoomComponent::StaticRegisterNativesUAkRoomComponent()
	{
	}
	UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister()
	{
		return UAkRoomComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkRoomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Audiokinetic" },
				{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
				{ "IncludePath", "AkRoomComponent.h" },
				{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallOcclusion_MetaData[] = {
				{ "Category", "Room" },
				{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
				{ "ToolTip", "Used to set the occlusion value in wwise, on emitters in the room, when no audio paths to the listener are found via sound propagation in Wwise Spatial Audio.\nThis value can be thought of as 'thickness', as it relates to how much sound energy is transmitted through the wall.\nValid range 0.0f-1.0f, and is mapped to the occlusion curve as defined in the Wwise project." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallOcclusion = { UE4CodeGen_Private::EPropertyClass::Float, "WallOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkRoomComponent, WallOcclusion), METADATA_PARAMS(NewProp_WallOcclusion_MetaData, ARRAY_COUNT(NewProp_WallOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "Room" },
				{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
				{ "ToolTip", "The precedence in which the Rooms will be applied. In the case of overlapping rooms, only the one\nwith the highest priority is chosen. If two or more overlapping rooms have the same\npriority, the chosen room is unpredictable." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkRoomComponent, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLowerPriorityComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
				{ "ToolTip", "We keep a  linked list of ReverbVolumes sorted by priority for faster finding of reverb volumes at a specific location.\n    This points to the next volume in the list." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextLowerPriorityComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NextLowerPriorityComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000082008, 1, nullptr, STRUCT_OFFSET(UAkRoomComponent, NextLowerPriorityComponent), Z_Construct_UClass_UAkRoomComponent_NoRegister, METADATA_PARAMS(NewProp_NextLowerPriorityComponent_MetaData, ARRAY_COUNT(NewProp_NextLowerPriorityComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
				{ "Category", "Toggle" },
				{ "DisplayName", "Enable Room" },
				{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
				{ "ToolTip", "Whether this volume is currently enabled and able to affect sounds" },
			};
#endif
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((UAkRoomComponent*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkRoomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnable_MetaData, ARRAY_COUNT(NewProp_bEnable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextLowerPriorityComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkRoomComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkRoomComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UAkRoomComponent, 462564408);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkRoomComponent(Z_Construct_UClass_UAkRoomComponent, &UAkRoomComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkRoomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRoomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
