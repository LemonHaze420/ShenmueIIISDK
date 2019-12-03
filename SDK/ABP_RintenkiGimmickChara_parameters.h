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

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleWeight
struct UABP_RintenkiGimmickChara_C_SetIdleWeight_Params
{
	float                                              InWeight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleState
struct UABP_RintenkiGimmickChara_C_SetIdleState_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.SetIdleAnimSequence
struct UABP_RintenkiGimmickChara_C_SetIdleAnimSequence_Params
{
	class UAnimSequence*                               NewAnimSequence;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.UpdateIdleWeight
struct UABP_RintenkiGimmickChara_C_UpdateIdleWeight_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.UpdateRotateAnimMontage
struct UABP_RintenkiGimmickChara_C_UpdateRotateAnimMontage_Params
{
	float                                              PositionRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.PlayRotateAnimMontage
struct UABP_RintenkiGimmickChara_C_PlayRotateAnimMontage_Params
{
	class UAnimMontage*                                NewMontage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62
struct UABP_RintenkiGimmickChara_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62_Params
{
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609
struct UABP_RintenkiGimmickChara_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609_Params
{
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.BlueprintUpdateAnimation
struct UABP_RintenkiGimmickChara_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C.ExecuteUbergraph_ABP_RintenkiGimmickChara
struct UABP_RintenkiGimmickChara_C_ExecuteUbergraph_ABP_RintenkiGimmickChara_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
