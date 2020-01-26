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

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetLocalizeInfoText
struct UWBP_Fishing_ShopResult_C_SetLocalizeInfoText_Params
{
	struct FString                                     ExploitsText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EarningsText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.DeleteAllFishData
struct UWBP_Fishing_ShopResult_C_DeleteAllFishData_Params
{
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.AddFishData
struct UWBP_Fishing_ShopResult_C_AddFishData_Params
{
	struct FString                                     ArgMainName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ArgSubName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ArgCm;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArgGram0;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetLocalizeFishNameText
struct UWBP_Fishing_ShopResult_C_GetLocalizeFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishGramText
struct UWBP_Fishing_ShopResult_C_GetFishGramText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetImagePositionY
struct UWBP_Fishing_ShopResult_C_SetImagePositionY_Params
{
	class UImage*                                      ArgImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArgPosY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishScaleText
struct UWBP_Fishing_ShopResult_C_GetFishScaleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishNameText
struct UWBP_Fishing_ShopResult_C_GetFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Construct
struct UWBP_Fishing_ShopResult_C_Construct_Params
{
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Tick
struct UWBP_Fishing_ShopResult_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.ExecuteUbergraph_WBP_Fishing_ShopResult
struct UWBP_Fishing_ShopResult_C_ExecuteUbergraph_WBP_Fishing_ShopResult_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
