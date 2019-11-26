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

// Function BP_SubQuestObject.BP_SubQuestObject_C.ChangeDispObject
struct ABP_SubQuestObject_C_ChangeDispObject_Params
{
	bool                                               DispObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestObject.BP_SubQuestObject_C.CheckSubQuestFlag
struct ABP_SubQuestObject_C_CheckSubQuestFlag_Params
{
	bool                                               DispEnable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestObject.BP_SubQuestObject_C.UserConstructionScript
struct ABP_SubQuestObject_C_UserConstructionScript_Params
{
};

// Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveTick
struct ABP_SubQuestObject_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveEndPlay
struct ABP_SubQuestObject_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestObject.BP_SubQuestObject_C.Event_FlagChange
struct ABP_SubQuestObject_C_Event_FlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestObject.BP_SubQuestObject_C.ReceiveBeginPlay
struct ABP_SubQuestObject_C_ReceiveBeginPlay_Params
{
};

// Function BP_SubQuestObject.BP_SubQuestObject_C.ExecuteUbergraph_BP_SubQuestObject
struct ABP_SubQuestObject_C_ExecuteUbergraph_BP_SubQuestObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
