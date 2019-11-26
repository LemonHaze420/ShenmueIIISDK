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

// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.DebugOpenCheck
struct ABP_MemoMap_CreateMask_C_DebugOpenCheck_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.MakeMask
struct ABP_MemoMap_CreateMask_C_MakeMask_Params
{
	class UPanelWidget*                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ES3Where                                           Place;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.UserConstructionScript
struct ABP_MemoMap_CreateMask_C_UserConstructionScript_Params
{
};

// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.ReceiveBeginPlay
struct ABP_MemoMap_CreateMask_C_ReceiveBeginPlay_Params
{
};

// Function BP_MemoMap_CreateMask.BP_MemoMap_CreateMask_C.ExecuteUbergraph_BP_MemoMap_CreateMask
struct ABP_MemoMap_CreateMask_C_ExecuteUbergraph_BP_MemoMap_CreateMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
