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

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.isTimerOverStop
struct ABP_Hakkason_TimeOverControl_C_isTimerOverStop_Params
{
	bool                                               Stop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.StepRangeSet
struct ABP_Hakkason_TimeOverControl_C_StepRangeSet_Params
{
	int                                                StepMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckStepOver
struct ABP_Hakkason_TimeOverControl_C_CheckStepOver_Params
{
	bool                                               StepOver;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckGameTimerange
struct ABP_Hakkason_TimeOverControl_C_CheckGameTimerange_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TimeInRange;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.InitSet
struct ABP_Hakkason_TimeOverControl_C_InitSet_Params
{
	float                                              LmitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.UserConstructionScript
struct ABP_Hakkason_TimeOverControl_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.TickChangeCheckKill
struct ABP_Hakkason_TimeOverControl_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.RenewalActorCount
struct ABP_Hakkason_TimeOverControl_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ReceiveTick
struct ABP_Hakkason_TimeOverControl_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ExecuteUbergraph_BP_Hakkason_TimeOverControl
struct ABP_Hakkason_TimeOverControl_C_ExecuteUbergraph_BP_Hakkason_TimeOverControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
