
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.PlayStartEndAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Itemset                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemViewer_C::PlayStartEndAnim(bool Start, bool Itemset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.PlayStartEndAnim");

	UBPW_UI_ItemViewer_C_PlayStartEndAnim_Params params;
	params.Start = Start;
	params.Itemset = Itemset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBPW_UI_ItemViewer_C::BndEvt__Viewer_StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_ItemViewer_C_BndEvt__Viewer_StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_EndAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBPW_UI_ItemViewer_C::BndEvt__Viewer_EndAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_EndAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_ItemViewer_C_BndEvt__Viewer_EndAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemViewer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.Tick");

	UBPW_UI_ItemViewer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_ItemViewer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.Construct");

	UBPW_UI_ItemViewer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_StartAnim_Itemset_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBPW_UI_ItemViewer_C::BndEvt__Viewer_StartAnim_Itemset_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_StartAnim_Itemset_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_ItemViewer_C_BndEvt__Viewer_StartAnim_Itemset_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_EndAnim_Itemset_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBPW_UI_ItemViewer_C::BndEvt__Viewer_EndAnim_Itemset_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.BndEvt__Viewer_EndAnim_Itemset_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_ItemViewer_C_BndEvt__Viewer_EndAnim_Itemset_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.ExecuteUbergraph_BPW_UI_ItemViewer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_ItemViewer_C::ExecuteUbergraph_BPW_UI_ItemViewer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_ItemViewer.BPW_UI_ItemViewer_C.ExecuteUbergraph_BPW_UI_ItemViewer");

	UBPW_UI_ItemViewer_C_ExecuteUbergraph_BPW_UI_ItemViewer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
