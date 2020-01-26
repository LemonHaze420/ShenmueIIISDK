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

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetColor
struct Uwgt_S3DetectButtonIcon_C_SetColor_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimBase
struct Uwgt_S3DetectButtonIcon_C_AnimBase_Params
{
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FlashAnimBase
struct Uwgt_S3DetectButtonIcon_C_FlashAnimBase_Params
{
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ResetParam
struct Uwgt_S3DetectButtonIcon_C_ResetParam_Params
{
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.PlayAnimIcon
struct Uwgt_S3DetectButtonIcon_C_PlayAnimIcon_Params
{
	class UWidgetAnimation*                            Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetParam
struct Uwgt_S3DetectButtonIcon_C_SetParam_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3DetectActionParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.InitIcon
struct Uwgt_S3DetectButtonIcon_C_InitIcon_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.GetOpacity
struct Uwgt_S3DetectButtonIcon_C_GetOpacity_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetOpacity
struct Uwgt_S3DetectButtonIcon_C_SetOpacity_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetIconFlipAnim
struct Uwgt_S3DetectButtonIcon_C_SetIconFlipAnim_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetBaseBlink
struct Uwgt_S3DetectButtonIcon_C_SetBaseBlink_Params
{
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Initialize
struct Uwgt_S3DetectButtonIcon_C_Initialize_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetActionType
struct Uwgt_S3DetectButtonIcon_C_SetActionType_Params
{
	ES3ActionIconType                                  ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FadeIcon
struct Uwgt_S3DetectButtonIcon_C_FadeIcon_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimIcon
struct Uwgt_S3DetectButtonIcon_C_AnimIcon_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.OnAnimationFinished
struct Uwgt_S3DetectButtonIcon_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Construct
struct Uwgt_S3DetectButtonIcon_C_Construct_Params
{
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3DetectButtonIcon_C_BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ExecuteUbergraph_wgt_S3DetectButtonIcon
struct Uwgt_S3DetectButtonIcon_C_ExecuteUbergraph_wgt_S3DetectButtonIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.onAnimEnd__DelegateSignature
struct Uwgt_S3DetectButtonIcon_C_onAnimEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
