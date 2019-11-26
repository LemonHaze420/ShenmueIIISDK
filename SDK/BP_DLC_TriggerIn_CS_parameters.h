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

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.GetExspMemoPage
struct ABP_DLC_TriggerIn_CS_C_GetExspMemoPage_Params
{
	int                                                OpenPage;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckExspCSID
struct ABP_DLC_TriggerIn_CS_C_CheckExspCSID_Params
{
	struct FName                                       cutscene_id;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               exsp_cs;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       exsp_type;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckNPCSpawn
struct ABP_DLC_TriggerIn_CS_C_CheckNPCSpawn_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsExspStart
struct ABP_DLC_TriggerIn_CS_C_CheckCsExspStart_Params
{
	bool                                               CsStartEnable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.SetCsEndPlayerPos
struct ABP_DLC_TriggerIn_CS_C_SetCsEndPlayerPos_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsEndFlag
struct ABP_DLC_TriggerIn_CS_C_CheckCsEndFlag_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckStep
struct ABP_DLC_TriggerIn_CS_C_CheckStep_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckTime
struct ABP_DLC_TriggerIn_CS_C_CheckTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.HasGameTimeRestriction
struct ABP_DLC_TriggerIn_CS_C_HasGameTimeRestriction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.IsStart
struct ABP_DLC_TriggerIn_CS_C_IsStart_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsStartFlag
struct ABP_DLC_TriggerIn_CS_C_CheckCsStartFlag_Params
{
	bool                                               CsStartEnable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.UserConstructionScript
struct ABP_DLC_TriggerIn_CS_C_UserConstructionScript_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.StartIn_FlagCheck
struct ABP_DLC_TriggerIn_CS_C_StartIn_FlagCheck_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CsEndSet
struct ABP_DLC_TriggerIn_CS_C_CsEndSet_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveTick
struct ABP_DLC_TriggerIn_CS_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.StartStockEvent
struct ABP_DLC_TriggerIn_CS_C_StartStockEvent_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveEndPlay
struct ABP_DLC_TriggerIn_CS_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DLC_TriggerIn_CS_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.EvtFlagChange
struct ABP_DLC_TriggerIn_CS_C_EvtFlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.OnCutsceneEndBase
struct ABP_DLC_TriggerIn_CS_C_OnCutsceneEndBase_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.OnStartCutscenePlayerBase
struct ABP_DLC_TriggerIn_CS_C_OnStartCutscenePlayerBase_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.EvtMemoEnd
struct ABP_DLC_TriggerIn_CS_C_EvtMemoEnd_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveBeginPlay
struct ABP_DLC_TriggerIn_CS_C_ReceiveBeginPlay_Params
{
};

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ExecuteUbergraph_BP_DLC_TriggerIn_CS
struct ABP_DLC_TriggerIn_CS_C_ExecuteUbergraph_BP_DLC_TriggerIn_CS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
