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

// Function BP_BTL_Audience.BP_BTL_Audience_C.CalcCenter
struct ABP_BTL_Audience_C_CalcCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.PlayRandomCenterReaction
struct ABP_BTL_Audience_C_PlayRandomCenterReaction_Params
{
	TArray<class USoundAtomCue*>                       Sounds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.PlayReaction
struct ABP_BTL_Audience_C_PlayReaction_Params
{
	TArray<class USoundAtomCue*>                       Sounds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.IsActive
struct ABP_BTL_Audience_C_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.PlaySurroundSoundReactions
struct ABP_BTL_Audience_C_PlaySurroundSoundReactions_Params
{
	TArray<class USoundAtomCue*>                       Sounds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.SetActive
struct ABP_BTL_Audience_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.ReactToHit
struct ABP_BTL_Audience_C_ReactToHit_Params
{
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.ReactToKO
struct ABP_BTL_Audience_C_ReactToKO_Params
{
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.UserConstructionScript
struct ABP_BTL_Audience_C_UserConstructionScript_Params
{
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.StartCooldownHit
struct ABP_BTL_Audience_C_StartCooldownHit_Params
{
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.StartCooldownKO
struct ABP_BTL_Audience_C_StartCooldownKO_Params
{
};

// Function BP_BTL_Audience.BP_BTL_Audience_C.ExecuteUbergraph_BP_BTL_Audience
struct ABP_BTL_Audience_C_ExecuteUbergraph_BP_BTL_Audience_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
