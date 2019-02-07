// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AkSurfaceReflectorSetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPoly();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkPoly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPoly_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPoly, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPoly(FAkPoly::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPoly"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPoly")),new UScriptStruct::TCppStructOps<FAkPoly>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPoly;
	UScriptStruct* Z_Construct_UScriptStruct_FAkPoly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPoly_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPoly>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[] = {
				{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			auto NewProp_EnableSurface_SetBit = [](void* Obj){ ((FAkPoly*)Obj)->EnableSurface = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSurface = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAkPoly), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableSurface_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableSurface_MetaData, ARRAY_COUNT(NewProp_EnableSurface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkPoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableSurface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkPoly",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkPoly),
				alignof(FAkPoly),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPoly_CRC() { return 1089875112U; }
	void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
	{
		UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
			{ "SendSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
			{ "UpdateSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, "RemoveSurfaceReflectorSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, "SendSurfaceReflectorSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, "UpdateSurfaceReflectorSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 1240502272
				{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 4236883167
				{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 580937102
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Audiokinetic" },
				{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
				{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextVisualizers_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextVisualizers = { UE4CodeGen_Private::EPropertyClass::Array, "TextVisualizers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008800000008, 1, nullptr, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, TextVisualizers), METADATA_PARAMS(NewProp_TextVisualizers_MetaData, ARRAY_COUNT(NewProp_TextVisualizers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextVisualizers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TextVisualizers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800080008, 1, nullptr, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
				{ "Category", "Acoustic Surface Diffraction (Experimental)" },
				{ "EditCondition", "bEnableDiffraction" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
				{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this mesh. Boundary edges are edges that are connected to only one triangle." },
			};
#endif
			auto NewProp_bEnableDiffractionOnBoundaryEdges_SetBit = [](void* Obj){ ((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDiffractionOnBoundaryEdges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkSurfaceReflectorSetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDiffractionOnBoundaryEdges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, ARRAY_COUNT(NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[] = {
				{ "Category", "Acoustic Surface Diffraction (Experimental)" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
				{ "ToolTip", "Enable or disable geometric diffraction for this mesh." },
			};
#endif
			auto NewProp_bEnableDiffraction_SetBit = [](void* Obj){ ((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDiffraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkSurfaceReflectorSetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDiffraction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDiffraction_MetaData, ARRAY_COUNT(NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[] = {
				{ "Category", "AcousticSurfaces" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys = { UE4CodeGen_Private::EPropertyClass::Array, "AcousticPolys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), METADATA_PARAMS(NewProp_AcousticPolys_MetaData, ARRAY_COUNT(NewProp_AcousticPolys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AcousticPolys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAkPoly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[] = {
				{ "Category", "Toggle" },
				{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
				{ "ToolTip", "Whether this volume is currently enabled and able to affect sounds" },
			};
#endif
			auto NewProp_bEnableSurfaceReflectors_SetBit = [](void* Obj){ ((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSurfaceReflectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkSurfaceReflectorSetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSurfaceReflectors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableSurfaceReflectors_MetaData, ARRAY_COUNT(NewProp_bEnableSurfaceReflectors_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextVisualizers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextVisualizers_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDiffractionOnBoundaryEdges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDiffraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcousticPolys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcousticPolys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSurfaceReflectors,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkSurfaceReflectorSetComponent::StaticClass,
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
	IMPLEMENT_CLASS(UAkSurfaceReflectorSetComponent, 2972752397);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSurfaceReflectorSetComponent(Z_Construct_UClass_UAkSurfaceReflectorSetComponent, &UAkSurfaceReflectorSetComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSurfaceReflectorSetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
