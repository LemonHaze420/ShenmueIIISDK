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

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetRotateAnimMode
struct UWBP_Fishing_test_C_SetRotateAnimMode_Params
{
	bool                                               IsHighSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetDistanceMax
struct UWBP_Fishing_test_C_SetDistanceMax_Params
{
	float                                              DistanceMax;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetVisibleIcon
struct UWBP_Fishing_test_C_SetVisibleIcon_Params
{
	bool                                               ButtonVisible;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RotateVisible;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LStickVisible;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishGramText
struct UWBP_Fishing_test_C_GetFishGramText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetImagePositionY
struct UWBP_Fishing_test_C_SetImagePositionY_Params
{
	class UImage*                                      ArgImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArgPosY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.StartFishGaugeAnime
struct UWBP_Fishing_test_C_StartFishGaugeAnime_Params
{
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.UpdateFishGauge
struct UWBP_Fishing_test_C_UpdateFishGauge_Params
{
	bool                                               IsUpdate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetDispFishGaugeAll
struct UWBP_Fishing_test_C_SetDispFishGaugeAll_Params
{
	bool                                               ArgDisp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.GetDistanceText
struct UWBP_Fishing_test_C_GetDistanceText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishScaleText
struct UWBP_Fishing_test_C_GetFishScaleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishNameText
struct UWBP_Fishing_test_C_GetFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.Construct
struct UWBP_Fishing_test_C_Construct_Params
{
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetCaptcherVisible
struct UWBP_Fishing_test_C_SetCaptcherVisible_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetResultVisible
struct UWBP_Fishing_test_C_SetResultVisible_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_test.WBP_Fishing_test_C.ExecuteUbergraph_WBP_Fishing_test
struct UWBP_Fishing_test_C_ExecuteUbergraph_WBP_Fishing_test_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
