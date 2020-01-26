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

// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.SetDoorFlag
struct UBP_AnimNotify_DoorClose_C_SetDoorFlag_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetNotifyName
struct UBP_AnimNotify_DoorClose_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetSound
struct UBP_AnimNotify_DoorClose_C_GetSound_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
