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

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetVolume
struct ABP_S3BgmPlayer_C_GetVolume_Params
{
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSystemVolume
struct ABP_S3BgmPlayer_C_SetSystemVolume_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetStartTime
struct ABP_S3BgmPlayer_C_SetStartTime_Params
{
	float                                              NewTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Restart
struct ABP_S3BgmPlayer_C_Restart_Params
{
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetSound
struct ABP_S3BgmPlayer_C_GetSound_Params
{
	class USoundAtomCue*                               AtomCue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetCueName
struct ABP_S3BgmPlayer_C_GetCueName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetPitch
struct ABP_S3BgmPlayer_C_SetPitch_Params
{
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.StopOnly
struct ABP_S3BgmPlayer_C_StopOnly_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Pause
struct ABP_S3BgmPlayer_C_Pause_Params
{
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Stop
struct ABP_S3BgmPlayer_C_Stop_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.PlayFromStart
struct ABP_S3BgmPlayer_C_PlayFromStart_Params
{
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Destroy
struct ABP_S3BgmPlayer_C_Destroy_Params
{
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsValidCue
struct ABP_S3BgmPlayer_C_IsValidCue_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsPlaying
struct ABP_S3BgmPlayer_C_IsPlaying_Params
{
	bool                                               Playing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Play
struct ABP_S3BgmPlayer_C_Play_Params
{
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetVolume
struct ABP_S3BgmPlayer_C_SetVolume_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSound
struct ABP_S3BgmPlayer_C_SetSound_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.UserConstructionScript
struct ABP_S3BgmPlayer_C_UserConstructionScript_Params
{
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveBeginPlay
struct ABP_S3BgmPlayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveTick
struct ABP_S3BgmPlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ExecuteUbergraph_BP_S3BgmPlayer
struct ABP_S3BgmPlayer_C_ExecuteUbergraph_BP_S3BgmPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
