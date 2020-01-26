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

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.UpdateLocalizeText
struct UWBP_Fishing_ShopResult_LineData_C_UpdateLocalizeText_Params
{
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetLocalizeFishNameText
struct UWBP_Fishing_ShopResult_LineData_C_GetLocalizeFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishGramText
struct UWBP_Fishing_ShopResult_LineData_C_GetFishGramText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetImagePositionY
struct UWBP_Fishing_ShopResult_LineData_C_SetImagePositionY_Params
{
	class UImage*                                      ArgImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArgPosY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishScaleText
struct UWBP_Fishing_ShopResult_LineData_C_GetFishScaleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishNameText
struct UWBP_Fishing_ShopResult_LineData_C_GetFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.Construct
struct UWBP_Fishing_ShopResult_LineData_C_Construct_Params
{
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetCaptcherVisible
struct UWBP_Fishing_ShopResult_LineData_C_SetCaptcherVisible_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.ExecuteUbergraph_WBP_Fishing_ShopResult_LineData
struct UWBP_Fishing_ShopResult_LineData_C_ExecuteUbergraph_WBP_Fishing_ShopResult_LineData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
