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

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.StartEvent
struct ABP_Chobu_TimeCheckCallEvent_C_StartEvent_Params
{
	bool                                               aps_exec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CanCallEvent
struct ABP_Chobu_TimeCheckCallEvent_C_CanCallEvent_Params
{
	bool                                               Enable_CallEvent;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CheckGameTimerange
struct ABP_Chobu_TimeCheckCallEvent_C_CheckGameTimerange_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TimeInRange;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.InitSet
struct ABP_Chobu_TimeCheckCallEvent_C_InitSet_Params
{
	float                                              EventStartTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EventEndTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Call_EventName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.UserConstructionScript
struct ABP_Chobu_TimeCheckCallEvent_C_UserConstructionScript_Params
{
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.RenewalActorCount
struct ABP_Chobu_TimeCheckCallEvent_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.ReceiveTick
struct ABP_Chobu_TimeCheckCallEvent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CounterChangeKill
struct ABP_Chobu_TimeCheckCallEvent_C_CounterChangeKill_Params
{
};

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.ExecuteUbergraph_BP_Chobu_TimeCheckCallEvent
struct ABP_Chobu_TimeCheckCallEvent_C_ExecuteUbergraph_BP_Chobu_TimeCheckCallEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
