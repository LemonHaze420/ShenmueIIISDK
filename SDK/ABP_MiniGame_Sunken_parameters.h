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

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetIdleSequencePlayRate
struct UABP_MiniGame_Sunken_C_SetIdleSequencePlayRate_Params
{
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetEyeCloseBlend
struct UABP_MiniGame_Sunken_C_SetEyeCloseBlend_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.IsIdle
struct UABP_MiniGame_Sunken_C_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.GetCurrentIdleRatio
struct UABP_MiniGame_Sunken_C_GetCurrentIdleRatio_Params
{
	float                                              CurrentIdleRatio;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.UpdateElapsedTime
struct UABP_MiniGame_Sunken_C_UpdateElapsedTime_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.Initialize
struct UABP_MiniGame_Sunken_C_Initialize_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.SetAnimData
struct UABP_MiniGame_Sunken_C_SetAnimData_Params
{
	class UAnimSequenceBase*                           AnimPunchImpact;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimPunchIdle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimReturn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IdleSequencePlayRate;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PunchPlayRate;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.IsPunch
struct UABP_MiniGame_Sunken_C_IsPunch_Params
{
	bool                                               bPunch;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2
struct UABP_MiniGame_Sunken_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.BlueprintUpdateAnimation
struct UABP_MiniGame_Sunken_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.BlueprintBeginPlay
struct UABP_MiniGame_Sunken_C_BlueprintBeginPlay_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransEndReturnFromPunch
struct UABP_MiniGame_Sunken_C_AnimNotify_TransEndReturnFromPunch_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransEndIdleFromReturn
struct UABP_MiniGame_Sunken_C_AnimNotify_TransEndIdleFromReturn_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_TransStartIdleFromReturn
struct UABP_MiniGame_Sunken_C_AnimNotify_TransStartIdleFromReturn_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.AnimNotify_MoveStart
struct UABP_MiniGame_Sunken_C_AnimNotify_MoveStart_Params
{
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.ExecuteUbergraph_ABP_MiniGame_Sunken
struct UABP_MiniGame_Sunken_C_ExecuteUbergraph_ABP_MiniGame_Sunken_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C.Dispatcher_PunchEnd__DelegateSignature
struct UABP_MiniGame_Sunken_C_Dispatcher_PunchEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
