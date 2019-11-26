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

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.UpdateAddScoreDisplay
struct UWBP_MiniGameHighWayStar_C_UpdateAddScoreDisplay_Params
{
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetUpdateScore
struct UWBP_MiniGameHighWayStar_C_SetUpdateScore_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Get_CurrentScore_Text_1
struct UWBP_MiniGameHighWayStar_C_Get_CurrentScore_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetLastScore
struct UWBP_MiniGameHighWayStar_C_SetLastScore_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleScore
struct UWBP_MiniGameHighWayStar_C_SetVisibleScore_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetCurrentScore
struct UWBP_MiniGameHighWayStar_C_SetCurrentScore_Params
{
	int                                                ScoreNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.SetVisibleIcon
struct UWBP_MiniGameHighWayStar_C_SetVisibleIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Construct
struct UWBP_MiniGameHighWayStar_C_Construct_Params
{
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.Tick
struct UWBP_MiniGameHighWayStar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.ExecuteUbergraph_WBP_MiniGameHighWayStar
struct UWBP_MiniGameHighWayStar_C_ExecuteUbergraph_WBP_MiniGameHighWayStar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameHighWayStar.WBP_MiniGameHighWayStar_C.OnChangeDisplayScore__DelegateSignature
struct UWBP_MiniGameHighWayStar_C_OnChangeDisplayScore__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
