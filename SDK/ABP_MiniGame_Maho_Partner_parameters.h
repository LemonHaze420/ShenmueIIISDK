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

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.SetAnimState
struct UABP_MiniGame_Maho_Partner_C_SetAnimState_Params
{
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.Initialize
struct UABP_MiniGame_Maho_Partner_C_Initialize_Params
{
};

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF
struct UABP_MiniGame_Maho_Partner_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF_Params
{
};

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.BlueprintUpdateAnimation
struct UABP_MiniGame_Maho_Partner_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ExecuteUbergraph_ABP_MiniGame_Maho_Partner
struct UABP_MiniGame_Maho_Partner_C_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ChangeAnimState__DelegateSignature
struct UABP_MiniGame_Maho_Partner_C_ChangeAnimState__DelegateSignature_Params
{
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.TransEndFallDownDispacher__DelegateSignature
struct UABP_MiniGame_Maho_Partner_C_TransEndFallDownDispacher__DelegateSignature_Params
{
};

// Function ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C.ReStartPlayingDispacher__DelegateSignature
struct UABP_MiniGame_Maho_Partner_C_ReStartPlayingDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
