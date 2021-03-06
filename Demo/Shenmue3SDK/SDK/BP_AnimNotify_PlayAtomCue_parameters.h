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

// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.CanPlay
struct UBP_AnimNotify_PlayAtomCue_C_CanPlay_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.SetSelectorLabel
struct UBP_AnimNotify_PlayAtomCue_C_SetSelectorLabel_Params
{
	class UAtomComponent*                              Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.GetNotifyName
struct UBP_AnimNotify_PlayAtomCue_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C.Received_Notify
struct UBP_AnimNotify_PlayAtomCue_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
