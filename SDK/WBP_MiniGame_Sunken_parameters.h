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

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayUnbeliAnim
struct UWBP_MiniGame_Sunken_C_PlayUnbeliAnim_Params
{
};

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.PlayExcellentAnim
struct UWBP_MiniGame_Sunken_C_PlayExcellentAnim_Params
{
};

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.SetLocalizeText
struct UWBP_MiniGame_Sunken_C_SetLocalizeText_Params
{
	struct FText                                       ExcellentText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       UnbelievableText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Construct
struct UWBP_MiniGame_Sunken_C_Construct_Params
{
};

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.Tick
struct UWBP_MiniGame_Sunken_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_Sunken.WBP_MiniGame_Sunken_C.ExecuteUbergraph_WBP_MiniGame_Sunken
struct UWBP_MiniGame_Sunken_C_ExecuteUbergraph_WBP_MiniGame_Sunken_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
