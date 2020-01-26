#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_GameOverCtl.BP_GameOverCtl_C.CheckLimitDay
struct ABP_GameOverCtl_C_CheckLimitDay_Params
{
	struct FName                                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.InitSet
struct ABP_GameOverCtl_C_InitSet_Params
{
	bool                                               Make_Actor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.UserConstructionScript
struct ABP_GameOverCtl_C_UserConstructionScript_Params
{
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.ReceiveTick
struct ABP_GameOverCtl_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9001
struct ABP_GameOverCtl_C_OnCutsceneEnd_M06_S9001_Params
{
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9001
struct ABP_GameOverCtl_C_OnStartCutscenePlayer_M06_S9001_Params
{
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9002
struct ABP_GameOverCtl_C_OnCutsceneEnd_M06_S9002_Params
{
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9002
struct ABP_GameOverCtl_C_OnStartCutscenePlayer_M06_S9002_Params
{
};

// Function BP_GameOverCtl.BP_GameOverCtl_C.ExecuteUbergraph_BP_GameOverCtl
struct ABP_GameOverCtl_C_ExecuteUbergraph_BP_GameOverCtl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
