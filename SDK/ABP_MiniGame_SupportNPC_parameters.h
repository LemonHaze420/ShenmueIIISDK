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

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.SetBlockAction
struct UABP_MiniGame_SupportNPC_C_SetBlockAction_Params
{
	bool                                               bBlockAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.IsBlockAction
struct UABP_MiniGame_SupportNPC_C_IsBlockAction_Params
{
	bool                                               IsAction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.ChangeAnim
struct UABP_MiniGame_SupportNPC_C_ChangeAnim_Params
{
	class UAnimSequenceBase*                           Anim;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.SetLookAtLocation
struct UABP_MiniGame_SupportNPC_C_SetLookAtLocation_Params
{
	struct FVector                                     LookAtLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.Finalize
struct UABP_MiniGame_SupportNPC_C_Finalize_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.Initialize
struct UABP_MiniGame_SupportNPC_C_Initialize_Params
{
	class UAnimSequenceBase*                           AnimIdle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5
struct UABP_MiniGame_SupportNPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.BlueprintUpdateAnimation
struct UABP_MiniGame_SupportNPC_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_StartTransitionIdlle
struct UABP_MiniGame_SupportNPC_C_AnimNotify_StartTransitionIdlle_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_EndTransitionIdle
struct UABP_MiniGame_SupportNPC_C_AnimNotify_EndTransitionIdle_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.AnimNotify_StartTransitionActionToIdle
struct UABP_MiniGame_SupportNPC_C_AnimNotify_StartTransitionActionToIdle_Params
{
};

// Function ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C.ExecuteUbergraph_ABP_MiniGame_SupportNPC
struct UABP_MiniGame_SupportNPC_C_ExecuteUbergraph_ABP_MiniGame_SupportNPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
