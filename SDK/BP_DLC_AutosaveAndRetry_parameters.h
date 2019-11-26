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

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.CheckBeginHit
struct ABP_DLC_AutosaveAndRetry_C_CheckBeginHit_Params
{
	bool                                               BeginIn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Exec Save
struct ABP_DLC_AutosaveAndRetry_C_Exec_Save_Params
{
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Check_Direction
struct ABP_DLC_AutosaveAndRetry_C_Check_Direction_Params
{
	bool                                               Direction__OK;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Check_ExecFlagRange
struct ABP_DLC_AutosaveAndRetry_C_Check_ExecFlagRange_Params
{
	bool                                               SaveEnable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.UserConstructionScript
struct ABP_DLC_AutosaveAndRetry_C_UserConstructionScript_Params
{
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.EvtFlagChange
struct ABP_DLC_AutosaveAndRetry_C_EvtFlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DLC_AutosaveAndRetry_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.ReceiveBeginPlay
struct ABP_DLC_AutosaveAndRetry_C_ReceiveBeginPlay_Params
{
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.FlagChange_in
struct ABP_DLC_AutosaveAndRetry_C_FlagChange_in_Params
{
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.StartIn_FlagCheck
struct ABP_DLC_AutosaveAndRetry_C_StartIn_FlagCheck_Params
{
};

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.ExecuteUbergraph_BP_DLC_AutosaveAndRetry
struct ABP_DLC_AutosaveAndRetry_C_ExecuteUbergraph_BP_DLC_AutosaveAndRetry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
