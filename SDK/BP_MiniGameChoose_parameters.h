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

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetPriority
struct ABP_MiniGameChoose_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetDetectAction
struct ABP_MiniGameChoose_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.FinalizeMoneyInfo
struct ABP_MiniGameChoose_C_FinalizeMoneyInfo_Params
{
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.InitializeMoneyInfo
struct ABP_MiniGameChoose_C_InitializeMoneyInfo_Params
{
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.UpdateOnePriceInfo
struct ABP_MiniGameChoose_C_UpdateOnePriceInfo_Params
{
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.UserConstructionScript
struct ABP_MiniGameChoose_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.DecideDetectAction
struct ABP_MiniGameChoose_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveBeginPlay
struct ABP_MiniGameChoose_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveTick
struct ABP_MiniGameChoose_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveEndPlay
struct ABP_MiniGameChoose_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ExecuteUbergraph_BP_MiniGameChoose
struct ABP_MiniGameChoose_C_ExecuteUbergraph_BP_MiniGameChoose_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnCancelMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameChoose_C_OnCancelMiniGameDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnChooseMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameChoose_C_OnChooseMiniGameDispatcher__DelegateSignature_Params
{
	class AActor*                                      ChooseActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
