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

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetBackImageColor
struct UWBP_MiniGameBigWheel_CNFlow_C_SetBackImageColor_Params
{
	TEnumAsByte<E_MiniGameBigWheelType>                Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetItemImageVisible
struct UWBP_MiniGameBigWheel_CNFlow_C_SetItemImageVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetItemImage
struct UWBP_MiniGameBigWheel_CNFlow_C_SetItemImage_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PreConstruct
struct UWBP_MiniGameBigWheel_CNFlow_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.Construct
struct UWBP_MiniGameBigWheel_CNFlow_C_Construct_Params
{
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayFadeOut
struct UWBP_MiniGameBigWheel_CNFlow_C_PlayFadeOut_Params
{
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayWhiteOut
struct UWBP_MiniGameBigWheel_CNFlow_C_PlayWhiteOut_Params
{
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayWhiteInAnim
struct UWBP_MiniGameBigWheel_CNFlow_C_PlayWhiteInAnim_Params
{
};

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.ExecuteUbergraph_WBP_MiniGameBigWheel_CNFlow
struct UWBP_MiniGameBigWheel_CNFlow_C_ExecuteUbergraph_WBP_MiniGameBigWheel_CNFlow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
