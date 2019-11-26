#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RelayOnSceneCapture
struct Uwgt_BTL_MontagePlayer_C_RelayOnSceneCapture_Params
{
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetSkillLibrary
struct Uwgt_BTL_MontagePlayer_C_SetSkillLibrary_Params
{
	class UBTL_CommandLibraryBase*                     CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsLoadingFinished
struct Uwgt_BTL_MontagePlayer_C_IsLoadingFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.IsRenderObjectReady
struct Uwgt_BTL_MontagePlayer_C_IsRenderObjectReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.CalculateRenderObjectTransform
struct Uwgt_BTL_MontagePlayer_C_CalculateRenderObjectTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.DestroyRenderObject
struct Uwgt_BTL_MontagePlayer_C_DestroyRenderObject_Params
{
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlaySingleFrame
struct Uwgt_BTL_MontagePlayer_C_PlaySingleFrame_Params
{
	struct FName                                       InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.StopMotion
struct Uwgt_BTL_MontagePlayer_C_StopMotion_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.PlayMotionForItem
struct Uwgt_BTL_MontagePlayer_C_PlayMotionForItem_Params
{
	struct FName                                       InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SpawnRenderObject
struct Uwgt_BTL_MontagePlayer_C_SpawnRenderObject_Params
{
	class UClass*                                      InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.SetRenderTex
struct Uwgt_BTL_MontagePlayer_C_SetRenderTex_Params
{
	class UTextureRenderTarget2D*                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C
struct Uwgt_BTL_MontagePlayer_C_OnLoaded_887C3B4A44C26F627DEC4EAAECA73E5C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnLoaded_6B67131F435381D27123BE8560D7EF88
struct Uwgt_BTL_MontagePlayer_C_OnLoaded_6B67131F435381D27123BE8560D7EF88_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Tick
struct Uwgt_BTL_MontagePlayer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Destruct
struct Uwgt_BTL_MontagePlayer_C_Destruct_Params
{
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.RespawnRenderObject
struct Uwgt_BTL_MontagePlayer_C_RespawnRenderObject_Params
{
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.Construct
struct Uwgt_BTL_MontagePlayer_C_Construct_Params
{
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.ExecuteUbergraph_wgt_BTL_MontagePlayer
struct Uwgt_BTL_MontagePlayer_C_ExecuteUbergraph_wgt_BTL_MontagePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_MontagePlayer.wgt_BTL_MontagePlayer_C.OnSceneCapture__DelegateSignature
struct Uwgt_BTL_MontagePlayer_C_OnSceneCapture__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
