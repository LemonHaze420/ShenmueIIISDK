#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPI_Otoshidama.BPI_Otoshidama_C.EnabledPlayerOnDecide
struct UBPI_Otoshidama_C_EnabledPlayerOnDecide_Params
{
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.SetChooseCameraTransform
struct UBPI_Otoshidama_C_SetChooseCameraTransform_Params
{
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.GetRewardFeed
struct UBPI_Otoshidama_C_GetRewardFeed_Params
{
	ES3RewardType                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.SetEnabledPlayerEvent
struct UBPI_Otoshidama_C_SetEnabledPlayerEvent_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.GetCamera
struct UBPI_Otoshidama_C_GetCamera_Params
{
	class UCameraComponent*                            newParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.GetBetZoomTarget
struct UBPI_Otoshidama_C_GetBetZoomTarget_Params
{
	class USceneComponent*                             newParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.GetZoomTarget
struct UBPI_Otoshidama_C_GetZoomTarget_Params
{
	class USceneComponent*                             newParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.BindTalkEndEvent
struct UBPI_Otoshidama_C_BindTalkEndEvent_Params
{
};

// Function BPI_Otoshidama.BPI_Otoshidama_C.CreateNailEvent
struct UBPI_Otoshidama_C_CreateNailEvent_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
