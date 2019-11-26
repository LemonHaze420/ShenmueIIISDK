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

// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.InitDataTime
struct ABP_S3WorldTimekeeper_C_InitDataTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.UserConstructionScript
struct ABP_S3WorldTimekeeper_C_UserConstructionScript_Params
{
};

// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ReceiveBeginPlay
struct ABP_S3WorldTimekeeper_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ReceiveEndPlay
struct ABP_S3WorldTimekeeper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.WaitPlay
struct ABP_S3WorldTimekeeper_C_WaitPlay_Params
{
};

// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ExecuteUbergraph_BP_S3WorldTimekeeper
struct ABP_S3WorldTimekeeper_C_ExecuteUbergraph_BP_S3WorldTimekeeper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
