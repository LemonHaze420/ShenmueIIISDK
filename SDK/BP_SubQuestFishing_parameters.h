#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.CheckTableIndex
struct ABP_SubQuestFishing_C_CheckTableIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               In_Range;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.CulcFlagValue
struct ABP_SubQuestFishing_C_CulcFlagValue_Params
{
	bool                                               Start_on_the_way;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StartCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StartStep;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StartDifference;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.AddRandom
struct ABP_SubQuestFishing_C_AddRandom_Params
{
	bool                                               Write;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.GetTableIndex
struct ABP_SubQuestFishing_C_GetTableIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                change_index;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.SetTimeChange
struct ABP_SubQuestFishing_C_SetTimeChange_Params
{
	int                                                CountUp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Write;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.CulcElapsedTime
struct ABP_SubQuestFishing_C_CulcElapsedTime_Params
{
	int                                                CountUp;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.GameTimeMark
struct ABP_SubQuestFishing_C_GameTimeMark_Params
{
	bool                                               StartMark;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.isEventEnable
struct ABP_SubQuestFishing_C_isEventEnable_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.UserConstructionScript
struct ABP_SubQuestFishing_C_UserConstructionScript_Params
{
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.StartEvent
struct ABP_SubQuestFishing_C_StartEvent_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.ReceiveTick
struct ABP_SubQuestFishing_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.TimeChange
struct ABP_SubQuestFishing_C_TimeChange_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.Recharge
struct ABP_SubQuestFishing_C_Recharge_Params
{
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.LoadStartIn
struct ABP_SubQuestFishing_C_LoadStartIn_Params
{
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.ReceiveBeginPlay
struct ABP_SubQuestFishing_C_ReceiveBeginPlay_Params
{
};

// Function BP_SubQuestFishing.BP_SubQuestFishing_C.ExecuteUbergraph_BP_SubQuestFishing
struct ABP_SubQuestFishing_C_ExecuteUbergraph_BP_SubQuestFishing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
