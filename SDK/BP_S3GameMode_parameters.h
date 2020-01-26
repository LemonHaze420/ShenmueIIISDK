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

// Function BP_S3GameMode.BP_S3GameMode_C.IsNPCFadeInProgress
struct ABP_S3GameMode_C_IsNPCFadeInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3GameMode.BP_S3GameMode_C.CheckSkip
struct ABP_S3GameMode_C_CheckSkip_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode.BP_S3GameMode_C.RestoreExtendAttention
struct ABP_S3GameMode_C_RestoreExtendAttention_Params
{
};

// Function BP_S3GameMode.BP_S3GameMode_C.ExtendAttention
struct ABP_S3GameMode_C_ExtendAttention_Params
{
	class UClass*                                      AttentionControllerClass;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode.BP_S3GameMode_C.RetryGame
struct ABP_S3GameMode_C_RetryGame_Params
{
};

// Function BP_S3GameMode.BP_S3GameMode_C.InitWeather
struct ABP_S3GameMode_C_InitWeather_Params
{
};

// Function BP_S3GameMode.BP_S3GameMode_C.UserConstructionScript
struct ABP_S3GameMode_C_UserConstructionScript_Params
{
};

// Function BP_S3GameMode.BP_S3GameMode_C.ReceiveBeginPlay
struct ABP_S3GameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3GameMode.BP_S3GameMode_C.CheckTimeManager
struct ABP_S3GameMode_C_CheckTimeManager_Params
{
};

// Function BP_S3GameMode.BP_S3GameMode_C.SetSkyManager
struct ABP_S3GameMode_C_SetSkyManager_Params
{
	class AS3SkyManager*                               InSkyManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode.BP_S3GameMode_C.ExecuteUbergraph_BP_S3GameMode
struct ABP_S3GameMode_C_ExecuteUbergraph_BP_S3GameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
