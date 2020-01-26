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

// Function wgt_SkillTotals.wgt_SkillTotals_C.PlayMeterSound
struct Uwgt_SkillTotals_C_PlayMeterSound_Params
{
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.SetBarHighlight
struct Uwgt_SkillTotals_C_SetBarHighlight_Params
{
	class UUserWidget*                                 bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Highlight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.LerpLevelUpDisplay
struct Uwgt_SkillTotals_C_LerpLevelUpDisplay_Params
{
	float                                              N;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.SetLevelUpData
struct Uwgt_SkillTotals_C_SetLevelUpData_Params
{
	struct FST_SparringResultLevelUpData               Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_SparringResultLevelUpData               Vitality;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_SparringResultLevelUpData               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.UpdateLevelData
struct Uwgt_SkillTotals_C_UpdateLevelData_Params
{
	class UBPW_SkillBar_C*                             BarWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3DerivedPlayerLevel*                       Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.Update
struct Uwgt_SkillTotals_C_Update_Params
{
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.Construct
struct Uwgt_SkillTotals_C_Construct_Params
{
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.PreConstruct
struct Uwgt_SkillTotals_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Attack_K2Node_ComponentBoundEvent_0_OnAnimLevelUp__DelegateSignature
struct Uwgt_SkillTotals_C_BndEvt__Bar_Attack_K2Node_ComponentBoundEvent_0_OnAnimLevelUp__DelegateSignature_Params
{
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Level_K2Node_ComponentBoundEvent_1_OnAnimLevelUp__DelegateSignature
struct Uwgt_SkillTotals_C_BndEvt__Bar_Level_K2Node_ComponentBoundEvent_1_OnAnimLevelUp__DelegateSignature_Params
{
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Vitality_K2Node_ComponentBoundEvent_2_OnAnimLevelUp__DelegateSignature
struct Uwgt_SkillTotals_C_BndEvt__Bar_Vitality_K2Node_ComponentBoundEvent_2_OnAnimLevelUp__DelegateSignature_Params
{
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.StartLevelUpAnim
struct Uwgt_SkillTotals_C_StartLevelUpAnim_Params
{
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.ExecuteUbergraph_wgt_SkillTotals
struct Uwgt_SkillTotals_C_ExecuteUbergraph_wgt_SkillTotals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillTotals.wgt_SkillTotals_C.OnLevelUpAnimationDone__DelegateSignature
struct Uwgt_SkillTotals_C_OnLevelUpAnimationDone__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
