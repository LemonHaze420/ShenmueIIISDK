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

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFadeTimer
struct ABP_PlayerTalkItem_C_UpdateFadeTimer_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Done;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFade
struct ABP_PlayerTalkItem_C_UpdateFade_Params
{
};

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.HideItem
struct ABP_PlayerTalkItem_C_HideItem_Params
{
};

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ShowItem
struct ABP_PlayerTalkItem_C_ShowItem_Params
{
};

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UserConstructionScript
struct ABP_PlayerTalkItem_C_UserConstructionScript_Params
{
};

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ReceiveTick
struct ABP_PlayerTalkItem_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ExecuteUbergraph_BP_PlayerTalkItem
struct ABP_PlayerTalkItem_C_ExecuteUbergraph_BP_PlayerTalkItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.OnFinishHide__DelegateSignature
struct ABP_PlayerTalkItem_C_OnFinishHide__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
