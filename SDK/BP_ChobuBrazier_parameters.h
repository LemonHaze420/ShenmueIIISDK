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

// Function BP_ChobuBrazier.BP_ChobuBrazier_C.UserConstructionScript
struct ABP_ChobuBrazier_C_UserConstructionScript_Params
{
};

// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveBeginPlay
struct ABP_ChobuBrazier_C_ReceiveBeginPlay_Params
{
};

// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveTick
struct ABP_ChobuBrazier_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ChangeTimeEvent
struct ABP_ChobuBrazier_C_ChangeTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveEndPlay
struct ABP_ChobuBrazier_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
