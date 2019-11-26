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

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpPriority
struct ABP_ScheduleNPC_C_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpName
struct ABP_ScheduleNPC_C_GetHelpName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsActivateHelp
struct ABP_ScheduleNPC_C_IsActivateHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.RegisterHelp
struct ABP_ScheduleNPC_C_RegisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UnregisterHelp
struct ABP_ScheduleNPC_C_UnregisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetPriority
struct ABP_ScheduleNPC_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetDetectAction
struct ABP_ScheduleNPC_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckRewardNotice
struct ABP_ScheduleNPC_C_CheckRewardNotice_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsDisableFootIK
struct ABP_ScheduleNPC_C_IsDisableFootIK_Params
{
	bool                                               bDisable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollisionSub
struct ABP_ScheduleNPC_C_DestroyCameraCollisionSub_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollisionSub
struct ABP_ScheduleNPC_C_CreateCameraCollisionSub_Params
{
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsLookAtBody
struct ABP_ScheduleNPC_C_IsLookAtBody_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetLookAtBody
struct ABP_ScheduleNPC_C_SetLookAtBody_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ResetCloseEye
struct ABP_ScheduleNPC_C_ResetCloseEye_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetCloseEye
struct ABP_ScheduleNPC_C_SetCloseEye_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsTalking
struct ABP_ScheduleNPC_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsIgnoreCollision
struct ABP_ScheduleNPC_C_StairsIgnoreCollision_Params
{
	bool                                               bIgnore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetEnableIK
struct ABP_ScheduleNPC_C_GetEnableIK_Params
{
	bool                                               bIKEnabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CalcCharaHeight
struct ABP_ScheduleNPC_C_CalcCharaHeight_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsSetting
struct ABP_ScheduleNPC_C_StairsSetting_Params
{
	bool                                               bIsEnable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateStairs
struct ABP_ScheduleNPC_C_UpdateStairs_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetupHaveItem
struct ABP_ScheduleNPC_C_SetupHaveItem_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetEnableIK
struct ABP_ScheduleNPC_C_SetEnableIK_Params
{
	bool                                               bInIKEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReturnOutOfWorld
struct ABP_ScheduleNPC_C_ReturnOutOfWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.RemoveDebugTraceComponent
struct ABP_ScheduleNPC_C_RemoveDebugTraceComponent_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddDebugTraceComponent
struct ABP_ScheduleNPC_C_AddDebugTraceComponent_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDoor
struct ABP_ScheduleNPC_C_UpdateDoor_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateFootIK
struct ABP_ScheduleNPC_C_UpdateFootIK_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckNamePlate
struct ABP_ScheduleNPC_C_CheckNamePlate_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDebug
struct ABP_ScheduleNPC_C_UpdateDebug_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckCanUseDoor
struct ABP_ScheduleNPC_C_CheckCanUseDoor_Params
{
	bool                                               IsUseDoor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetS3PathFollowingComponent
struct ABP_ScheduleNPC_C_GetS3PathFollowingComponent_Params
{
	class US3PathFollowingComponent*                   AsS3Path_Following_Component;                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddTurnAroundComponent
struct ABP_ScheduleNPC_C_AddTurnAroundComponent_Params
{
	class UBPC_TurnAround_C*                           Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UserConstructionScript
struct ABP_ScheduleNPC_C_UserConstructionScript_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveTick
struct ABP_ScheduleNPC_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OpenDoor
struct ABP_ScheduleNPC_C_OpenDoor_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveBeginPlay
struct ABP_ScheduleNPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFinishedTurn
struct ABP_ScheduleNPC_C_OnFinishedTurn_Params
{
	class UBPC_TurnAround_C*                           SelfTurnAroundComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCInitialized
struct ABP_ScheduleNPC_C_OnNPCInitialized_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideBeginOverlap
struct ABP_ScheduleNPC_C_OnDoorAreaOutsideBeginOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideEndOverlap
struct ABP_ScheduleNPC_C_OnDoorAreaOutsideEndOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaBeginOverlap
struct ABP_ScheduleNPC_C_OnDoorAreaBeginOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFriendStop
struct ABP_ScheduleNPC_C_OnFriendStop_Params
{
	class AS3Character*                                Me;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                MyFriend;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Friendliness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeOut
struct ABP_ScheduleNPC_C_StartCharaFadeOut_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveEndPlay
struct ABP_ScheduleNPC_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeIn
struct ABP_ScheduleNPC_C_StartCharaFadeIn_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginOverlapStairs
struct ABP_ScheduleNPC_C_OnBeginOverlapStairs_Params
{
	class ABP_S3StaircaseBase_C*                       Staircase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndOverlapStairs
struct ABP_ScheduleNPC_C_OnEndOverlapStairs_Params
{
	class ABP_S3StaircaseBase_C*                       Staircase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DecideDetectAction
struct ABP_ScheduleNPC_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCUninitialized
struct ABP_ScheduleNPC_C_OnNPCUninitialized_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginStairs
struct ABP_ScheduleNPC_C_OnBeginStairs_Params
{
	class ABP_S3StaircaseBase_C*                       Staircase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsPreSetting
struct ABP_ScheduleNPC_C_StairsPreSetting_Params
{
	class AActor*                                      StairActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndStairs
struct ABP_ScheduleNPC_C_OnEndStairs_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkFinished
struct ABP_ScheduleNPC_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkStart
struct ABP_ScheduleNPC_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnStartStairs
struct ABP_ScheduleNPC_C_OnStartStairs_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_Player
struct ABP_ScheduleNPC_C_Screen_Player_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_NPC
struct ABP_ScheduleNPC_C_Screen_NPC_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetAttachObjectHiddenInGame
struct ABP_ScheduleNPC_C_SetAttachObjectHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollision
struct ABP_ScheduleNPC_C_CreateCameraCollision_Params
{
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollision
struct ABP_ScheduleNPC_C_DestroyCameraCollision_Params
{
};

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ExecuteUbergraph_BP_ScheduleNPC
struct ABP_ScheduleNPC_C_ExecuteUbergraph_BP_ScheduleNPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
