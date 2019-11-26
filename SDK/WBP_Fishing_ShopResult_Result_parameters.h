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

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.UpdateLocalizeText
struct UWBP_Fishing_ShopResult_Result_C_UpdateLocalizeText_Params
{
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Get_EarningsText
struct UWBP_Fishing_ShopResult_Result_C_Get_EarningsText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Get_ExploitsText
struct UWBP_Fishing_ShopResult_Result_C_Get_ExploitsText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetLocalizeFishNameText
struct UWBP_Fishing_ShopResult_Result_C_GetLocalizeFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetFishGramText
struct UWBP_Fishing_ShopResult_Result_C_GetFishGramText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.SetImagePositionY
struct UWBP_Fishing_ShopResult_Result_C_SetImagePositionY_Params
{
	class UImage*                                      ArgImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArgPosY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetGenText
struct UWBP_Fishing_ShopResult_Result_C_GetGenText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetFishNameText
struct UWBP_Fishing_ShopResult_Result_C_GetFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Construct
struct UWBP_Fishing_ShopResult_Result_C_Construct_Params
{
};

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.ExecuteUbergraph_WBP_Fishing_ShopResult_Result
struct UWBP_Fishing_ShopResult_Result_C_ExecuteUbergraph_WBP_Fishing_ShopResult_Result_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
