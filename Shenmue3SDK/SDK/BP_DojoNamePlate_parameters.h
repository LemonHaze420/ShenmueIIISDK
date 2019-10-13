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

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.GetCurrentDojo
struct ABP_DojoNamePlate_C_GetCurrentDojo_Params
{
	TEnumAsByte<EDojoPlace>                            Place;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FlagIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ChangePosition
struct ABP_DojoNamePlate_C_ChangePosition_Params
{
	ES3DojoRank                                        Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.UserConstructionScript
struct ABP_DojoNamePlate_C_UserConstructionScript_Params
{
};

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ReceiveBeginPlay
struct ABP_DojoNamePlate_C_ReceiveBeginPlay_Params
{
};

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ChangeFlag
struct ABP_DojoNamePlate_C_ChangeFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ReceiveEndPlay
struct ABP_DojoNamePlate_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DojoNamePlate.BP_DojoNamePlate_C.ExecuteUbergraph_BP_DojoNamePlate
struct ABP_DojoNamePlate_C_ExecuteUbergraph_BP_DojoNamePlate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
