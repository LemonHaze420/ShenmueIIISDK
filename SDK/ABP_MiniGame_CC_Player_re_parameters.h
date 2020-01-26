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

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.IsPlayCatchAnim
struct UABP_MiniGame_CC_Player_re_C_IsPlayCatchAnim_Params
{
	bool                                               isPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PlayCatchAnim
struct UABP_MiniGame_CC_Player_re_C_PlayCatchAnim_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.UpdatePA
struct UABP_MiniGame_CC_Player_re_C_UpdatePA_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.RInterpToQ
struct UABP_MiniGame_CC_Player_re_C_RInterpToQ_Params
{
	struct FRotator                                    Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RetRot;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.InitFunc
struct UABP_MiniGame_CC_Player_re_C_InitFunc_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.MakeTargetRotation
struct UABP_MiniGame_CC_Player_re_C_MakeTargetRotation_Params
{
	struct FRotator                                    ReturnRot;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.GOMA8_OtherFunc
struct UABP_MiniGame_CC_Player_re_C_GOMA8_OtherFunc_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.StopMontageWrapper
struct UABP_MiniGame_CC_Player_re_C_StopMontageWrapper_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.TurnInPlaceCheck
struct UABP_MiniGame_CC_Player_re_C_TurnInPlaceCheck_Params
{
	float                                              TurnThreshold;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TurnAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ShouldRotate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TurnRight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetCharacterRotation
struct UABP_MiniGame_CC_Player_re_C_SetCharacterRotation_Params
{
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              RotationRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0
struct UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186
struct UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2
struct UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8
struct UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452
struct UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E
struct UABP_MiniGame_CC_Player_re_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_FinishWait
struct UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_FinishWait_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputStart
struct UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_InputStart_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_InputEnd
struct UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_InputEnd_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_QTE_End
struct UABP_MiniGame_CC_Player_re_C_AnimNotify_QTE_End_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintUpdateAnimation
struct UABP_MiniGame_CC_Player_re_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_CanRotate
struct UABP_MiniGame_CC_Player_re_C_AnimNotify_CanRotate_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.OnJump
struct UABP_MiniGame_CC_Player_re_C_OnJump_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.PauseMotion
struct UABP_MiniGame_CC_Player_re_C_PauseMotion_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetPlayRate
struct UABP_MiniGame_CC_Player_re_C_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.BlueprintInitializeAnimation
struct UABP_MiniGame_CC_Player_re_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.SetForceIdle
struct UABP_MiniGame_CC_Player_re_C_SetForceIdle_Params
{
	bool                                               bForceIdle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootL
struct UABP_MiniGame_CC_Player_re_C_AnimNotify_GroundingFootL_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.AnimNotify_GroundingFootR
struct UABP_MiniGame_CC_Player_re_C_AnimNotify_GroundingFootR_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.ExecuteUbergraph_ABP_MiniGame_CC_Player_re
struct UABP_MiniGame_CC_Player_re_C_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_End__DelegateSignature
struct UABP_MiniGame_CC_Player_re_C_QTE_End__DelegateSignature_Params
{
};

// Function ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C.QTE_Input__DelegateSignature
struct UABP_MiniGame_CC_Player_re_C_QTE_Input__DelegateSignature_Params
{
	bool                                               StartFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
