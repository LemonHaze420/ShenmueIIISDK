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

// Function BP_AnimNotifyTrigger_Base.BP_AnimNotifyTrigger_Base_C.GetNotifyID
struct UBP_AnimNotifyTrigger_Base_C_GetNotifyID_Params
{
	struct FName                                       NotifyID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotifyTrigger_Base.BP_AnimNotifyTrigger_Base_C.Received_Notify
struct UBP_AnimNotifyTrigger_Base_C_Received_Notify_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
