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

// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.InitializeChickenImage
struct UWBP_MiniGame_CC_C_InitializeChickenImage_Params
{
};

// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.AddChickenProgress
struct UWBP_MiniGame_CC_C_AddChickenProgress_Params
{
};

// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.SetCircleProgress
struct UWBP_MiniGame_CC_C_SetCircleProgress_Params
{
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.PreConstruct
struct UWBP_MiniGame_CC_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.Construct
struct UWBP_MiniGame_CC_C_Construct_Params
{
};

// Function WBP_MiniGame_CC.WBP_MiniGame_CC_C.ExecuteUbergraph_WBP_MiniGame_CC
struct UWBP_MiniGame_CC_C_ExecuteUbergraph_WBP_MiniGame_CC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
