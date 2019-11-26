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

// Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.CanTurnAround
struct UBPC_TurnAround_ScheduleNPC2_C_CanTurnAround_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.TryPostTeleportTurnaround
struct UBPC_TurnAround_ScheduleNPC2_C_TryPostTeleportTurnaround_Params
{
};

// Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.ExecuteUbergraph_BPC_TurnAround_ScheduleNPC2
struct UBPC_TurnAround_ScheduleNPC2_C_ExecuteUbergraph_BPC_TurnAround_ScheduleNPC2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
