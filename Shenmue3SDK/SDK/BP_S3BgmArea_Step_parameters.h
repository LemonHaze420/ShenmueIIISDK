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

// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.JudgeBGM
struct ABP_S3BgmArea_Step_C_JudgeBGM_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.UserConstructionScript
struct ABP_S3BgmArea_Step_C_UserConstructionScript_Params
{
};

// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ReceiveBeginPlay
struct ABP_S3BgmArea_Step_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ReceiveEndPlay
struct ABP_S3BgmArea_Step_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ChangeStep
struct ABP_S3BgmArea_Step_C_ChangeStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmArea_Step.BP_S3BgmArea_Step_C.ExecuteUbergraph_BP_S3BgmArea_Step
struct ABP_S3BgmArea_Step_C_ExecuteUbergraph_BP_S3BgmArea_Step_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
