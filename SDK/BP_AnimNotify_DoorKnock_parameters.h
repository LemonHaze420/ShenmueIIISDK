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

// Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetDoorActor
struct UBP_AnimNotify_DoorKnock_C_GetDoorActor_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AS3GimmickOpenDoor*                          DoorActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetSound
struct UBP_AnimNotify_DoorKnock_C_GetSound_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetNotifyName
struct UBP_AnimNotify_DoorKnock_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
