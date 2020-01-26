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

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVisibleIconButton
struct UWBP_CW_WoodChop_C_SetVisibleIconButton_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.UnBindDispahcer
struct UWBP_CW_WoodChop_C_UnBindDispahcer_Params
{
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetLocalizeText
struct UWBP_CW_WoodChop_C_SetLocalizeText_Params
{
	struct FText                                       ExcellentText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       UnbelievableText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       FirewoodText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       EarningsText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetProgressCircleVisible
struct UWBP_CW_WoodChop_C_SetProgressCircleVisible_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetCircleProgress
struct UWBP_CW_WoodChop_C_SetCircleProgress_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetDebugVisible
struct UWBP_CW_WoodChop_C_SetDebugVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetVolumeDebugText
struct UWBP_CW_WoodChop_C_SetVolumeDebugText_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetSuccessedWoodNum
struct UWBP_CW_WoodChop_C_SetSuccessedWoodNum_Params
{
	int                                                WoodNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.SetTimeProgress
struct UWBP_CW_WoodChop_C_SetTimeProgress_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.DrawResult
struct UWBP_CW_WoodChop_C_DrawResult_Params
{
	int                                                SuccessNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResultNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Construct
struct UWBP_CW_WoodChop_C_Construct_Params
{
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.Tick
struct UWBP_CW_WoodChop_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearExcellent
struct UWBP_CW_WoodChop_C_AppearExcellent_Params
{
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.AppearUnbelievable
struct UWBP_CW_WoodChop_C_AppearUnbelievable_Params
{
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.ExecuteUbergraph_WBP_CW_WoodChop
struct UWBP_CW_WoodChop_C_ExecuteUbergraph_WBP_CW_WoodChop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnEndGameDispacher__DelegateSignature
struct UWBP_CW_WoodChop_C_OnEndGameDispacher__DelegateSignature_Params
{
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultMoneyDispacher__DelegateSignature
struct UWBP_CW_WoodChop_C_OnPlaySEResultMoneyDispacher__DelegateSignature_Params
{
};

// Function WBP_CW_WoodChop.WBP_CW_WoodChop_C.OnPlaySEResultWoodDispacher__DelegateSignature
struct UWBP_CW_WoodChop_C_OnPlaySEResultWoodDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
