// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSurfaceReflectorSetComponent_generated_h
#error "AkSurfaceReflectorSetComponent.generated.h already included, missing '#pragma once' in AkSurfaceReflectorSetComponent.h"
#endif
#define AKAUDIO_AkSurfaceReflectorSetComponent_generated_h

#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_15_GENERATED_BODY \
	friend AKAUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FAkPoly(); \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSurfaceReflectorSet(); \
		P_NATIVE_END; \
	}


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSurfaceReflectorSet(); \
		P_NATIVE_END; \
	}


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSurfaceReflectorSetComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(); \
public: \
	DECLARE_CLASS(UAkSurfaceReflectorSetComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSurfaceReflectorSetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAkSurfaceReflectorSetComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(); \
public: \
	DECLARE_CLASS(UAkSurfaceReflectorSetComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSurfaceReflectorSetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSurfaceReflectorSetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSurfaceReflectorSetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSurfaceReflectorSetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSurfaceReflectorSetComponent(UAkSurfaceReflectorSetComponent&&); \
	NO_API UAkSurfaceReflectorSetComponent(const UAkSurfaceReflectorSetComponent&); \
public:


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSurfaceReflectorSetComponent(UAkSurfaceReflectorSetComponent&&); \
	NO_API UAkSurfaceReflectorSetComponent(const UAkSurfaceReflectorSetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSurfaceReflectorSetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSurfaceReflectorSetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSurfaceReflectorSetComponent)


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_PRIVATE_PROPERTY_OFFSET
#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_24_PROLOG
#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_RPC_WRAPPERS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_INCLASS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_INCLASS_NO_PURE_DECLS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkSurfaceReflectorSetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
