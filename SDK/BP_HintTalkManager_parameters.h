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

// Function BP_HintTalkManager.BP_HintTalkManager_C.LengthToDistanceEnum
struct ABP_HintTalkManager_C_LengthToDistanceEnum_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_HintTalkDistance>                   DistanceEnum;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.GetPlaceMessage
struct ABP_HintTalkManager_C_GetPlaceMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.IsPlaceMessage
struct ABP_HintTalkManager_C_IsPlaceMessage_Params
{
	struct FName                                       TextID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.GetTextDataStrings
struct ABP_HintTalkManager_C_GetTextDataStrings_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ClipperString;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             TextArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                LinefeedCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_RubyInfo>                        RubyInfoArray;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.UserConstructionScript
struct ABP_HintTalkManager_C_UserConstructionScript_Params
{
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_2
struct ABP_HintTalkManager_C_InpActEvt_Ctrl_Shift_H_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveBeginPlay
struct ABP_HintTalkManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveDestroyed
struct ABP_HintTalkManager_C_ReceiveDestroyed_Params
{
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.ReceiveTick
struct ABP_HintTalkManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HintTalkManager.BP_HintTalkManager_C.ExecuteUbergraph_BP_HintTalkManager
struct ABP_HintTalkManager_C_ExecuteUbergraph_BP_HintTalkManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
