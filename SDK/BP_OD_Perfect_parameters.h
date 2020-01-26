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

// Function BP_OD_Perfect.BP_OD_Perfect_C.SpawnInputControlActor
struct ABP_OD_Perfect_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.GetRewardMoney
struct ABP_OD_Perfect_C_GetRewardMoney_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.UserConstructionScript
struct ABP_OD_Perfect_C_UserConstructionScript_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.HitCheck
struct ABP_OD_Perfect_C_HitCheck_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.ReceiveTick
struct ABP_OD_Perfect_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.ReceiveBeginPlay
struct ABP_OD_Perfect_C_ReceiveBeginPlay_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.RestartMiniGame
struct ABP_OD_Perfect_C_RestartMiniGame_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_OD_Perfect_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_OD_Perfect_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.ResumeMiniGame
struct ABP_OD_Perfect_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.OnTalkScriptEvent
struct ABP_OD_Perfect_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.EndMiniGame
struct ABP_OD_Perfect_C_EndMiniGame_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.Finalize_Check
struct ABP_OD_Perfect_C_Finalize_Check_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.StartMiniGame
struct ABP_OD_Perfect_C_StartMiniGame_Params
{
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.Otoshidama End
struct ABP_OD_Perfect_C_Otoshidama_End_Params
{
	bool                                               is_success;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Perfect.BP_OD_Perfect_C.ExecuteUbergraph_BP_OD_Perfect
struct ABP_OD_Perfect_C_ExecuteUbergraph_BP_OD_Perfect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
