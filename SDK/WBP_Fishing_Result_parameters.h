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

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetFishNameText
struct UWBP_Fishing_Result_C_SetFishNameText_Params
{
	struct FString                                     FishName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocalizeFishName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetLocalizeFishNameText
struct UWBP_Fishing_Result_C_GetLocalizeFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishGramText
struct UWBP_Fishing_Result_C_GetFishGramText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetImagePositionY
struct UWBP_Fishing_Result_C_SetImagePositionY_Params
{
	class UImage*                                      ArgImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArgPosY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishScaleText
struct UWBP_Fishing_Result_C_GetFishScaleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishNameText
struct UWBP_Fishing_Result_C_GetFishNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetResultVIsible
struct UWBP_Fishing_Result_C_SetResultVIsible_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsException;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.Construct
struct UWBP_Fishing_Result_C_Construct_Params
{
};

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.ExecuteUbergraph_WBP_Fishing_Result
struct UWBP_Fishing_Result_C_ExecuteUbergraph_WBP_Fishing_Result_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
