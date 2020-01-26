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

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.PlayStartEndAnim
struct UBPW_UI_ItemViewer_C_PlayStartEndAnim_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Itemset;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPW_UI_ItemViewer_C_BndEvt__Viewer_StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_EndAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPW_UI_ItemViewer_C_BndEvt__Viewer_EndAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.Tick
struct UBPW_UI_ItemViewer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.Construct
struct UBPW_UI_ItemViewer_C_Construct_Params
{
};

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_StartAnim_Itemset_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPW_UI_ItemViewer_C_BndEvt__Viewer_StartAnim_Itemset_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_EndAnim_Itemset_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPW_UI_ItemViewer_C_BndEvt__Viewer_EndAnim_Itemset_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.ExecuteUbergraph_BPW_UI_ItemViewer
struct UBPW_UI_ItemViewer_C_ExecuteUbergraph_BPW_UI_ItemViewer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
