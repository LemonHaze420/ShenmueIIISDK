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

// Function BP_S3BgmArea.BP_S3BgmArea_C.GetBGM
struct ABP_S3BgmArea_C_GetBGM_Params
{
	class USoundAtomCue*                               BGM;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmArea.BP_S3BgmArea_C.InitCue
struct ABP_S3BgmArea_C_InitCue_Params
{
};

// Function BP_S3BgmArea.BP_S3BgmArea_C.GetSourceInfo
struct ABP_S3BgmArea_C_GetSourceInfo_Params
{
	struct FS3BgmAreaSourceInfo                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_S3BgmArea.BP_S3BgmArea_C.UserConstructionScript
struct ABP_S3BgmArea_C_UserConstructionScript_Params
{
};

// Function BP_S3BgmArea.BP_S3BgmArea_C.ReceiveBeginPlay
struct ABP_S3BgmArea_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3BgmArea.BP_S3BgmArea_C.ExecuteUbergraph_BP_S3BgmArea
struct ABP_S3BgmArea_C_ExecuteUbergraph_BP_S3BgmArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
