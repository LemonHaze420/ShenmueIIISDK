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

// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.SetDoorFlag
struct UBP_AnimNotify_DoorOpen_C_SetDoorFlag_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetDoorActor
struct UBP_AnimNotify_DoorOpen_C_GetDoorActor_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AS3GimmickOpenDoor*                          DoorActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetSound
struct UBP_AnimNotify_DoorOpen_C_GetSound_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetNotifyName
struct UBP_AnimNotify_DoorOpen_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.Received_Notify
struct UBP_AnimNotify_DoorOpen_C_Received_Notify_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
