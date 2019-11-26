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

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.GetPriority
struct ABP_AreaJumpTrigger_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.GetDetectAction
struct ABP_AreaJumpTrigger_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.TeleportToTargetActor
struct ABP_AreaJumpTrigger_C_TeleportToTargetActor_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.TeleportPlayerWithFollower
struct ABP_AreaJumpTrigger_C_TeleportPlayerWithFollower_Params
{
	struct FVector                                     DestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               AddCapsule;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.PlayerCancelAction
struct ABP_AreaJumpTrigger_C_PlayerCancelAction_Params
{
	float                                              TimeEstimate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckKsExspFlag
struct ABP_AreaJumpTrigger_C_CheckKsExspFlag_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               exsp_flag;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ExspFlagSet
struct ABP_AreaJumpTrigger_C_ExspFlagSet_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.LavelIDtoText
struct ABP_AreaJumpTrigger_C_LavelIDtoText_Params
{
	struct FName                                       LavelID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GetText;                                                  // (Parm, OutParm)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.AddKsSelect
struct ABP_AreaJumpTrigger_C_AddKsSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlagSet;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.WarpShenfa
struct ABP_AreaJumpTrigger_C_WarpShenfa_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ClucSpawnLocationSHE
struct ABP_AreaJumpTrigger_C_ClucSpawnLocationSHE_Params
{
	float                                              bask_offsetaram;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Side_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              hight_ofset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SHE_vector;                                               // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    SHE_rot;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckLoadLevel
struct ABP_AreaJumpTrigger_C_CheckLoadLevel_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLoad;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.SetupPosAndRot
struct ABP_AreaJumpTrigger_C_SetupPosAndRot_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckDispYesterdayPrace
struct ABP_AreaJumpTrigger_C_CheckDispYesterdayPrace_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.PlayerRemoveInHouse
struct ABP_AreaJumpTrigger_C_PlayerRemoveInHouse_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.SetEyechatchData
struct ABP_AreaJumpTrigger_C_SetEyechatchData_Params
{
	int                                                SelectID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.WarpEvent
struct ABP_AreaJumpTrigger_C_WarpEvent_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.UserConstructionScript
struct ABP_AreaJumpTrigger_C_UserConstructionScript_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndProcess
struct ABP_AreaJumpTrigger_C_EndProcess_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.StartEndingWarp
struct ABP_AreaJumpTrigger_C_StartEndingWarp_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AreaJumpTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.FinishLoadLevel
struct ABP_AreaJumpTrigger_C_FinishLoadLevel_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_onSelected
struct ABP_AreaJumpTrigger_C_catch_onSelected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AreaJumpTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_eyecatchFadeFinish(in)
struct ABP_AreaJumpTrigger_C_catch_eyecatchFadeFinish_in__Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ReceiveTick
struct ABP_AreaJumpTrigger_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ReceiveBeginPlay
struct ABP_AreaJumpTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndJump
struct ABP_AreaJumpTrigger_C_EndJump_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.DecideDetectAction
struct ABP_AreaJumpTrigger_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_eyecatchFadeFinish(out)
struct ABP_AreaJumpTrigger_C_catch_eyecatchFadeFinish_out__Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndJumpEvent
struct ABP_AreaJumpTrigger_C_EndJumpEvent_Params
{
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ExecuteUbergraph_BP_AreaJumpTrigger
struct ABP_AreaJumpTrigger_C_ExecuteUbergraph_BP_AreaJumpTrigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ED_Warp__DelegateSignature
struct ABP_AreaJumpTrigger_C_ED_Warp__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
