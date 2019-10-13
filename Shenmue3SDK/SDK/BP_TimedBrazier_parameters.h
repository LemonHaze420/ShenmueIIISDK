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

// Function BP_TimedBrazier.BP_TimedBrazier_C.IsLightOn
struct ABP_TimedBrazier_C_IsLightOn_Params
{
	bool                                               lightOn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.PlaySound
struct ABP_TimedBrazier_C_PlaySound_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.UserConstructionScript
struct ABP_TimedBrazier_C_UserConstructionScript_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__FinishedFunc
struct ABP_TimedBrazier_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__UpdateFunc
struct ABP_TimedBrazier_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.catch_onTimeJump
struct ABP_TimedBrazier_C_catch_onTimeJump_Params
{
	float                                              jumpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.delayedEveningStart
struct ABP_TimedBrazier_C_delayedEveningStart_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Start
struct ABP_TimedBrazier_C_Manual_Start_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Stop
struct ABP_TimedBrazier_C_Manual_Stop_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.Toggle
struct ABP_TimedBrazier_C_Toggle_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveEndPlay
struct ABP_TimedBrazier_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisible
struct ABP_TimedBrazier_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.DayTimeEventDispatcher_Event_1
struct ABP_TimedBrazier_C_DayTimeEventDispatcher_Event_1_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleBasedOnTime
struct ABP_TimedBrazier_C_SetVisibleBasedOnTime_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveBeginPlay
struct ABP_TimedBrazier_C_ReceiveBeginPlay_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.UpdateTime
struct ABP_TimedBrazier_C_UpdateTime_Params
{
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleReinit
struct ABP_TimedBrazier_C_SetVisibleReinit_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimedBrazier.BP_TimedBrazier_C.ExecuteUbergraph_BP_TimedBrazier
struct ABP_TimedBrazier_C_ExecuteUbergraph_BP_TimedBrazier_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
