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

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.IsOutAnimationPlaying
struct UWBP_BellTowerPillarAttentionBigIcon_C_IsOutAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.OnAnimationEndDuringFinishing
struct UWBP_BellTowerPillarAttentionBigIcon_C_OnAnimationEndDuringFinishing_Params
{
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Finish
struct UWBP_BellTowerPillarAttentionBigIcon_C_Finish_Params
{
	bool                                               IsAutoRemoveFromParent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Start
struct UWBP_BellTowerPillarAttentionBigIcon_C_Start_Params
{
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.PlayAnimIcon
struct UWBP_BellTowerPillarAttentionBigIcon_C_PlayAnimIcon_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetParam
struct UWBP_BellTowerPillarAttentionBigIcon_C_SetParam_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IconAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Blink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.InitIcon
struct UWBP_BellTowerPillarAttentionBigIcon_C_InitIcon_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.GetOpacity
struct UWBP_BellTowerPillarAttentionBigIcon_C_GetOpacity_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetOpacity
struct UWBP_BellTowerPillarAttentionBigIcon_C_SetOpacity_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetIconFlipAnim
struct UWBP_BellTowerPillarAttentionBigIcon_C_SetIconFlipAnim_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetBaseBlink
struct UWBP_BellTowerPillarAttentionBigIcon_C_SetBaseBlink_Params
{
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Initialize
struct UWBP_BellTowerPillarAttentionBigIcon_C_Initialize_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetActionType
struct UWBP_BellTowerPillarAttentionBigIcon_C_SetActionType_Params
{
	ES3ActionIconType                                  ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.FadeBase
struct UWBP_BellTowerPillarAttentionBigIcon_C_FadeBase_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.FadeIcon
struct UWBP_BellTowerPillarAttentionBigIcon_C_FadeIcon_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.AnimIcon
struct UWBP_BellTowerPillarAttentionBigIcon_C_AnimIcon_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.OnAnimationFinished
struct UWBP_BellTowerPillarAttentionBigIcon_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Construct
struct UWBP_BellTowerPillarAttentionBigIcon_C_Construct_Params
{
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.ExecuteUbergraph_WBP_BellTowerPillarAttentionBigIcon
struct UWBP_BellTowerPillarAttentionBigIcon_C_ExecuteUbergraph_WBP_BellTowerPillarAttentionBigIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.onAnimEnd__DelegateSignature
struct UWBP_BellTowerPillarAttentionBigIcon_C_onAnimEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
