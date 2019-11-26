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

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayShakeStickAnim
struct UWBP_MiniGameRotateIcon_C_PlayShakeStickAnim_Params
{
	bool                                               isPlay;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetVisibleIcon
struct UWBP_MiniGameRotateIcon_C_SetVisibleIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayFadeAnim
struct UWBP_MiniGameRotateIcon_C_PlayFadeAnim_Params
{
	bool                                               IsAppear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.PlayRotationAnim
struct UWBP_MiniGameRotateIcon_C_PlayRotationAnim_Params
{
	bool                                               IsRightRotate;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShakeRotateIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Construct
struct UWBP_MiniGameRotateIcon_C_Construct_Params
{
};

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.Tick
struct UWBP_MiniGameRotateIcon_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.ExecuteUbergraph_WBP_MiniGameRotateIcon
struct UWBP_MiniGameRotateIcon_C_ExecuteUbergraph_WBP_MiniGameRotateIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
