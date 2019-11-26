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

// Function BP_OD_Take2.BP_OD_Take2_C.SpawnInputControlActor
struct ABP_OD_Take2_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_OD_Take2.BP_OD_Take2_C.GetRewardMoney
struct ABP_OD_Take2_C_GetRewardMoney_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_OD_Take2.BP_OD_Take2_C.UserConstructionScript
struct ABP_OD_Take2_C_UserConstructionScript_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_OD_Take2_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_OD_Take2_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.ResumeMiniGame
struct ABP_OD_Take2_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_OD_Take2.BP_OD_Take2_C.OnTalkScriptEvent
struct ABP_OD_Take2_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Take2.BP_OD_Take2_C.ReceiveTick
struct ABP_OD_Take2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Take2.BP_OD_Take2_C.ReceiveBeginPlay
struct ABP_OD_Take2_C_ReceiveBeginPlay_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.RestartMiniGame
struct ABP_OD_Take2_C_RestartMiniGame_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.EndMiniGame
struct ABP_OD_Take2_C_EndMiniGame_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.HitCheck
struct ABP_OD_Take2_C_HitCheck_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.Otoshidama End
struct ABP_OD_Take2_C_Otoshidama_End_Params
{
	bool                                               is_success;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Take2.BP_OD_Take2_C.Finalize_Check
struct ABP_OD_Take2_C_Finalize_Check_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.StartMiniGame
struct ABP_OD_Take2_C_StartMiniGame_Params
{
};

// Function BP_OD_Take2.BP_OD_Take2_C.ExecuteUbergraph_BP_OD_Take2
struct ABP_OD_Take2_C_ExecuteUbergraph_BP_OD_Take2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
