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

// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.CheckSkip
struct ABP_S3GamemodeBase_C_CheckSkip_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.SpawnDefaultPawnFor
struct ABP_S3GamemodeBase_C_SpawnDefaultPawnFor_Params
{
	class AController**                                NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     StartSpot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.UserConstructionScript
struct ABP_S3GamemodeBase_C_UserConstructionScript_Params
{
};

// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.ReceiveBeginPlay
struct ABP_S3GamemodeBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3GamemodeBase.BP_S3GamemodeBase_C.ExecuteUbergraph_BP_S3GamemodeBase
struct ABP_S3GamemodeBase_C_ExecuteUbergraph_BP_S3GamemodeBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
