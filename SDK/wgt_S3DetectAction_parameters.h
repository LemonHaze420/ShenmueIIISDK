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

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.IconNeedsAnimUpdate
struct Uwgt_S3DetectAction_C_IconNeedsAnimUpdate_Params
{
	struct FS3DetectActionParam                        Action;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class Uwgt_S3DetectButtonIcon_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.IconNeedsUpdate
struct Uwgt_S3DetectAction_C_IconNeedsUpdate_Params
{
	struct FS3DetectActionParam                        Action;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class Uwgt_S3DetectButtonIcon_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon_UpdateOnly
struct Uwgt_S3DetectAction_C_ShowNewIcon_UpdateOnly_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3DetectActionParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class Uwgt_S3DetectButtonIcon_C*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetPlatformButton
struct Uwgt_S3DetectAction_C_GetPlatformButton_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.EndNewInfoAnimation
struct Uwgt_S3DetectAction_C_EndNewInfoAnimation_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.StartNewInfoAnimation
struct Uwgt_S3DetectAction_C_StartNewInfoAnimation_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetButtonIcon
struct Uwgt_S3DetectAction_C_GetButtonIcon_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uwgt_S3DetectButtonIcon_C*                   Icon;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BlinkHelpIcon
struct Uwgt_S3DetectAction_C_BlinkHelpIcon_Params
{
	bool                                               End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.SetCharaName
struct Uwgt_S3DetectAction_C_SetCharaName_Params
{
	struct FString                                     CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     AlphabetName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.CheckShowIconBaseAll
struct Uwgt_S3DetectAction_C_CheckShowIconBaseAll_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.CreateIcons
struct Uwgt_S3DetectAction_C_CreateIcons_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon
struct Uwgt_S3DetectAction_C_ShowNewIcon_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3DetectActionParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.FadeOutIcon
struct Uwgt_S3DetectAction_C_FadeOutIcon_Params
{
	class Uwgt_S3DetectButtonIcon_C*                   Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Decide;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.DecideAction
struct Uwgt_S3DetectAction_C_DecideAction_Params
{
	int                                                DecideIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ES3ActionIconType                                  ReturnType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.UpdateIcon
struct Uwgt_S3DetectAction_C_UpdateIcon_Params
{
	struct FS3DetectActionParam                        Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InDecide;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.UpdateIconAll
struct Uwgt_S3DetectAction_C_UpdateIconAll_Params
{
	TArray<struct FS3DetectActionParam>                InParams;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.AdjustCenter
struct Uwgt_S3DetectAction_C_AdjustCenter_Params
{
	class UPanelSlot*                                  PanelSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.Construct
struct Uwgt_S3DetectAction_C_Construct_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.Tick
struct Uwgt_S3DetectAction_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3DetectAction_C_BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3DetectAction_C_BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3DetectAction_C_BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3DetectAction_C_BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ExecuteUbergraph_wgt_S3DetectAction
struct Uwgt_S3DetectAction_C_ExecuteUbergraph_wgt_S3DetectAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ED_NewHelpAnim_Finish__DelegateSignature
struct Uwgt_S3DetectAction_C_ED_NewHelpAnim_Finish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
