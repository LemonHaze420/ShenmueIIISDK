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

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.StopSetGameTime
struct ABP_Hakkason_Retry_C_StopSetGameTime_Params
{
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InitSet
struct ABP_Hakkason_Retry_C_InitSet_Params
{
	bool                                               Need_EndFade;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Qte_Retry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Battle_Start_Energy;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_ID_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FilterID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.UserConstructionScript
struct ABP_Hakkason_Retry_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8
struct ABP_Hakkason_Retry_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7
struct ABP_Hakkason_Retry_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6
struct ABP_Hakkason_Retry_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5
struct ABP_Hakkason_Retry_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.ReceiveTick
struct ABP_Hakkason_Retry_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.RenewalActorCount
struct ABP_Hakkason_Retry_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.TickChangeCheckKill
struct ABP_Hakkason_Retry_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.ExecuteUbergraph_BP_Hakkason_Retry
struct ABP_Hakkason_Retry_C_ExecuteUbergraph_BP_Hakkason_Retry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
