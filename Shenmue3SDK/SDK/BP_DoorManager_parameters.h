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

// Function BP_DoorManager.BP_DoorManager_C.LazyFindDoors
struct ABP_DoorManager_C_LazyFindDoors_Params
{
};

// Function BP_DoorManager.BP_DoorManager_C.ForbidPCDoorInteraction
struct ABP_DoorManager_C_ForbidPCDoorInteraction_Params
{
};

// Function BP_DoorManager.BP_DoorManager_C.GetDoors
struct ABP_DoorManager_C_GetDoors_Params
{
	TArray<class ABP_Gimmick_OpenDoor_Template_C*>     Doors;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DoorManager.BP_DoorManager_C.ChangeDoorType
struct ABP_DoorManager_C_ChangeDoorType_Params
{
	struct FString                                     DoorName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<EN_DoorType>                           DoorType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DoorManager.BP_DoorManager_C.SetDoors
struct ABP_DoorManager_C_SetDoors_Params
{
};

// Function BP_DoorManager.BP_DoorManager_C.GetDoorByName
struct ABP_DoorManager_C_GetDoorByName_Params
{
	struct FString                                     DoorName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class ABP_Gimmick_OpenDoor_Template_C*             DoorActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DoorManager.BP_DoorManager_C.UserConstructionScript
struct ABP_DoorManager_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
