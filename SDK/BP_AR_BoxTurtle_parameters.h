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

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.UserConstructionScript
struct ABP_AR_BoxTurtle_C_UserConstructionScript_Params
{
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ReceiveBeginPlay
struct ABP_AR_BoxTurtle_C_ReceiveBeginPlay_Params
{
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ReceiveTick
struct ABP_AR_BoxTurtle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.UpdateWalkRate
struct ABP_AR_BoxTurtle_C_UpdateWalkRate_Params
{
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Reset
struct ABP_AR_BoxTurtle_C_Reset_Params
{
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetMotion
struct ABP_AR_BoxTurtle_C_SetMotion_Params
{
	TEnumAsByte<E_AR_Motion_Type>                      mot_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ChangeShape
struct ABP_AR_BoxTurtle_C_ChangeShape_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Event_PlaySECry
struct ABP_AR_BoxTurtle_C_Event_PlaySECry_Params
{
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Event_PlaySEWalk
struct ABP_AR_BoxTurtle_C_Event_PlaySEWalk_Params
{
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetWalkRate
struct ABP_AR_BoxTurtle_C_SetWalkRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetAnimNotRaceStartPos
struct ABP_AR_BoxTurtle_C_SetAnimNotRaceStartPos_Params
{
	float                                              Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetAnimInRaceFlag
struct ABP_AR_BoxTurtle_C_SetAnimInRaceFlag_Params
{
	bool                                               InRace;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ExecuteUbergraph_BP_AR_BoxTurtle
struct ABP_AR_BoxTurtle_C_ExecuteUbergraph_BP_AR_BoxTurtle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
