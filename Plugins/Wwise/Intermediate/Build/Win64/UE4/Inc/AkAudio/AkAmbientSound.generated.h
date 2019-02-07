// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAmbientSound_generated_h
#error "AkAmbientSound.generated.h already included, missing '#pragma once' in AkAmbientSound.h"
#endif
#define AKAUDIO_AkAmbientSound_generated_h

#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_17_GENERATED_BODY \
	friend AKAUDIO_API class UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord(); \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAmbientSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAmbientSound(); \
		P_NATIVE_END; \
	}


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAmbientSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartAmbientSound(); \
		P_NATIVE_END; \
	}


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_AAkAmbientSound(); \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_AAkAmbientSound(); \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAmbientSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public:


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAmbientSound)


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_PRIVATE_PROPERTY_OFFSET
#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_34_PROLOG
#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_PRIVATE_PROPERTY_OFFSET \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_PRIVATE_PROPERTY_OFFSET \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_INCLASS_NO_PURE_DECLS \
	VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkAmbientSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VR_Horror_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
