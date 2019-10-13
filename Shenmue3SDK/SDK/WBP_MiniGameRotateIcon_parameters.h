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

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.SetRotateIcon
struct UWBP_MiniGameRotateIcon_C_SetRotateIcon_Params
{
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRightRotate;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

// Function WBP_MiniGameRotateIcon.WBP_MiniGameRotateIcon_C.ExecuteUbergraph_WBP_MiniGameRotateIcon
struct UWBP_MiniGameRotateIcon_C_ExecuteUbergraph_WBP_MiniGameRotateIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
