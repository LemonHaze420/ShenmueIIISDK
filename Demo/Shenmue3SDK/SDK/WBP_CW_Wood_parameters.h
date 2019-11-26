#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_CW_Wood.WBP_CW_Wood_C.HideMiniWood
struct UWBP_CW_Wood_C_HideMiniWood_Params
{
};

// Function WBP_CW_Wood.WBP_CW_Wood_C.IsEnd
struct UWBP_CW_Wood_C_IsEnd_Params
{
	bool                                               End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_Wood.WBP_CW_Wood_C.PlayConcentrateAnim
struct UWBP_CW_Wood_C_PlayConcentrateAnim_Params
{
};

// Function WBP_CW_Wood.WBP_CW_Wood_C.SetWoodVisible
struct UWBP_CW_Wood_C_SetWoodVisible_Params
{
	int                                                WoodNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_Wood.WBP_CW_Wood_C.Construct
struct UWBP_CW_Wood_C_Construct_Params
{
};

// Function WBP_CW_Wood.WBP_CW_Wood_C.Tick
struct UWBP_CW_Wood_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CW_Wood.WBP_CW_Wood_C.ExecuteUbergraph_WBP_CW_Wood
struct UWBP_CW_Wood_C_ExecuteUbergraph_WBP_CW_Wood_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
