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

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.GetNextButton
struct UWBP_KungFu_Result_C_GetNextButton_Params
{
	class UBPW_UI_GeneralWindow_Button_C*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.NextScreen
struct UWBP_KungFu_Result_C_NextScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.HideNextButton
struct UWBP_KungFu_Result_C_HideNextButton_Params
{
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLocalizeText
struct UWBP_KungFu_Result_C_SetLocalizeText_Params
{
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.ShowNextButton
struct UWBP_KungFu_Result_C_ShowNextButton_Params
{
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetSceneCaptureImage
struct UWBP_KungFu_Result_C_SetSceneCaptureImage_Params
{
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLevelUpData
struct UWBP_KungFu_Result_C_SetLevelUpData_Params
{
	struct FST_SparringResultLevelUpData               Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_SparringResultLevelUpData               Vitality;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_SparringResultLevelUpData               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLevelUpTextVisible
struct UWBP_KungFu_Result_C_SetLevelUpTextVisible_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.PreConstruct
struct UWBP_KungFu_Result_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.Construct
struct UWBP_KungFu_Result_C_Construct_Params
{
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.BndEvt__wgt_SkillTotals_K2Node_ComponentBoundEvent_0_OnLevelUpAnimationDone__DelegateSignature
struct UWBP_KungFu_Result_C_BndEvt__wgt_SkillTotals_K2Node_ComponentBoundEvent_0_OnLevelUpAnimationDone__DelegateSignature_Params
{
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.DelayCallOnAnimFinished
struct UWBP_KungFu_Result_C_DelayCallOnAnimFinished_Params
{
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.ExecuteUbergraph_WBP_KungFu_Result
struct UWBP_KungFu_Result_C_ExecuteUbergraph_WBP_KungFu_Result_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.OnAnimFinished__DelegateSignature
struct UWBP_KungFu_Result_C_OnAnimFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
