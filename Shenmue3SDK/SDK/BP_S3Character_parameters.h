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

// Function BP_S3Character.BP_S3Character_C.AddTurnAroundComponent
struct ABP_S3Character_C_AddTurnAroundComponent_Params
{
	class UBPC_TurnAround_C*                           Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.RemoveTurnAroundComponent
struct ABP_S3Character_C_RemoveTurnAroundComponent_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.GetTurnAroundComponent
struct ABP_S3Character_C_GetTurnAroundComponent_Params
{
	class UBPC_TurnAround_C*                           Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.IsInShelter
struct ABP_S3Character_C_IsInShelter_Params
{
	bool                                               Sheltered;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.IsTalking
struct ABP_S3Character_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.GetDoorActor
struct ABP_S3Character_C_GetDoorActor_Params
{
	class AS3GimmickOpenDoor*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.GetNearSideTargetTransform
struct ABP_S3Character_C_GetNearSideTargetTransform_Params
{
	bool                                               ValidDoor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.GetNearSideTargetPos
struct ABP_S3Character_C_GetNearSideTargetPos_Params
{
	bool                                               ValidDoor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.GetCharaToDoorPointDiff
struct ABP_S3Character_C_GetCharaToDoorPointDiff_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
	float                                              AngleDeg;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.ChangePosition
struct ABP_S3Character_C_ChangePosition_Params
{
};

// Function BP_S3Character.BP_S3Character_C.MoveDoorPoint
struct ABP_S3Character_C_MoveDoorPoint_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.NotifyFinishNock
struct ABP_S3Character_C_NotifyFinishNock_Params
{
};

// Function BP_S3Character.BP_S3Character_C.NotifyFinishMove
struct ABP_S3Character_C_NotifyFinishMove_Params
{
};

// Function BP_S3Character.BP_S3Character_C.OpenDoor
struct ABP_S3Character_C_OpenDoor_Params
{
};

// Function BP_S3Character.BP_S3Character_C.CheckCanUseDoor
struct ABP_S3Character_C_CheckCanUseDoor_Params
{
	bool                                               IsUseDoor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.UserConstructionScript
struct ABP_S3Character_C_UserConstructionScript_Params
{
};

// Function BP_S3Character.BP_S3Character_C.OnTalkStart
struct ABP_S3Character_C_OnTalkStart_Params
{
	class US3TalkComponent**                           TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.OnTalkFinished
struct ABP_S3Character_C_OnTalkFinished_Params
{
	class US3TalkComponent**                           TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.Screen_Player
struct ABP_S3Character_C_Screen_Player_Params
{
};

// Function BP_S3Character.BP_S3Character_C.Screen_NPC
struct ABP_S3Character_C_Screen_NPC_Params
{
};

// Function BP_S3Character.BP_S3Character_C.ReceiveBeginPlay
struct ABP_S3Character_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3Character.BP_S3Character_C.StartNock
struct ABP_S3Character_C_StartNock_Params
{
};

// Function BP_S3Character.BP_S3Character_C.OnDoorAreaBeginOverlap
struct ABP_S3Character_C_OnDoorAreaBeginOverlap_Params
{
	class AS3GimmickOpenDoor**                         Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.OnDoorAreaEndOverlap
struct ABP_S3Character_C_OnDoorAreaEndOverlap_Params
{
	class AS3GimmickOpenDoor**                         Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.OnDoorAreaOutsideBeginOverlap
struct ABP_S3Character_C_OnDoorAreaOutsideBeginOverlap_Params
{
	class AS3GimmickOpenDoor**                         Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.OnDoorAreaOutsideEndOverlap
struct ABP_S3Character_C_OnDoorAreaOutsideEndOverlap_Params
{
	class AS3GimmickOpenDoor**                         Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.ExecuteUbergraph_BP_S3Character
struct ABP_S3Character_C_ExecuteUbergraph_BP_S3Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3Character.BP_S3Character_C.StartNockDoor__DelegateSignature
struct ABP_S3Character_C_StartNockDoor__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
