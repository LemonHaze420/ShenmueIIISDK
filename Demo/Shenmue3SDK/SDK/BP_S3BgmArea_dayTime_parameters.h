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

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.JudgeBGM
struct ABP_S3BgmArea_dayTime_C_JudgeBGM_Params
{
	ES3DayTimeEvent                                    NewEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.UserConstructionScript
struct ABP_S3BgmArea_dayTime_C_UserConstructionScript_Params
{
};

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveBeginPlay
struct ABP_S3BgmArea_dayTime_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ChangeGameTimeEvent
struct ABP_S3BgmArea_dayTime_C_ChangeGameTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveEndPlay
struct ABP_S3BgmArea_dayTime_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ExecuteUbergraph_BP_S3BgmArea_dayTime
struct ABP_S3BgmArea_dayTime_C_ExecuteUbergraph_BP_S3BgmArea_dayTime_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
