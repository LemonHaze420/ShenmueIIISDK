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

// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketMaterial
struct ABP_OD_Gacha_C_GetBottomPocketMaterial_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           return_value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocketCount
struct ABP_OD_Gacha_C_GetBottomPocketCount_Params
{
	int                                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.GetBottomPocket
struct ABP_OD_Gacha_C_GetBottomPocket_Params
{
	int*                                               Dimension_1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.GetItemID
struct ABP_OD_Gacha_C_GetItemID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.SpawnInputControlActor
struct ABP_OD_Gacha_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.UserConstructionScript
struct ABP_OD_Gacha_C_UserConstructionScript_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveBeginPlay
struct ABP_OD_Gacha_C_ReceiveBeginPlay_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.ReceiveTick
struct ABP_OD_Gacha_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_OD_Gacha_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_OD_Gacha_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.ResumeMiniGame
struct ABP_OD_Gacha_C_ResumeMiniGame_Params
{
	struct FString*                                    ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.OnTalkScriptEvent
struct ABP_OD_Gacha_C_OnTalkScriptEvent_Params
{
	int*                                               EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.RestartMiniGame
struct ABP_OD_Gacha_C_RestartMiniGame_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.HitCheck
struct ABP_OD_Gacha_C_HitCheck_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.EndMiniGame
struct ABP_OD_Gacha_C_EndMiniGame_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.Finalize_Check
struct ABP_OD_Gacha_C_Finalize_Check_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.StartMiniGame
struct ABP_OD_Gacha_C_StartMiniGame_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.EnabledPlayerOnDecide
struct ABP_OD_Gacha_C_EnabledPlayerOnDecide_Params
{
};

// Function BP_OD_Gacha.BP_OD_Gacha_C.ExecuteUbergraph_BP_OD_Gacha
struct ABP_OD_Gacha_C_ExecuteUbergraph_BP_OD_Gacha_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
