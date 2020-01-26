
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_SubTitleTextBase_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.UpdateText");

	UUMG_SubTitleTextBase_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.HideText
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_SubTitleTextBase_C::HideText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.HideText");

	UUMG_SubTitleTextBase_C_HideText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetGlowTextBorder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBorder*                 GlowTextBorder                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetGlowTextBorder(class UBorder** GlowTextBorder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetGlowTextBorder");

	UUMG_SubTitleTextBase_C_GetGlowTextBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlowTextBorder != nullptr)
		*GlowTextBorder = params.GlowTextBorder;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.ForceAllDisp
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_SubTitleTextBase_C::ForceAllDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.ForceAllDisp");

	UUMG_SubTitleTextBase_C_ForceAllDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.IsAll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAll                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_SubTitleTextBase_C::IsAll(bool* IsAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.IsAll");

	UUMG_SubTitleTextBase_C_IsAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAll != nullptr)
		*IsAll = params.IsAll;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            InRubyInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            InSubtitleColor                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            InOutlineColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_SubTitleTextBase_C::SetText(const struct FString& Body, const struct FST_RubyInfo& InRubyInfo, const struct FLinearColor& InSubtitleColor, const struct FLinearColor& InOutlineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.SetText");

	UUMG_SubTitleTextBase_C_SetText_Params params;
	params.Body = Body;
	params.InRubyInfo = InRubyInfo;
	params.InSubtitleColor = InSubtitleColor;
	params.InOutlineColor = InOutlineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetGlowTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class US3GlowTextBlock*        GlowTextBlock                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetGlowTextBlock(class US3GlowTextBlock** GlowTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetGlowTextBlock");

	UUMG_SubTitleTextBase_C_GetGlowTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlowTextBlock != nullptr)
		*GlowTextBlock = params.GlowTextBlock;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetNowText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              NowText                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetNowText(class UTextBlock** NowText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetNowText");

	UUMG_SubTitleTextBase_C_GetNowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NowText != nullptr)
		*NowText = params.NowText;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetAllSizeText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              AllSize                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetAllSizeText(class UTextBlock** AllSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetAllSizeText");

	UUMG_SubTitleTextBase_C_GetAllSizeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllSize != nullptr)
		*AllSize = params.AllSize;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.TickText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubTitleTextBase_C::TickText(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.TickText");

	UUMG_SubTitleTextBase_C_TickText_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetRubySize
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetRubySize(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetRubySize");

	UUMG_SubTitleTextBase_C_GetRubySize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.CenteringTextAndRuby
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*        DrawTextPanel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            DisplayTextSize                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubTitleTextBase_C::CenteringTextAndRuby(class UCanvasPanelSlot* DrawTextPanel, int DisplayTextSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.CenteringTextAndRuby");

	UUMG_SubTitleTextBase_C_CenteringTextAndRuby_Params params;
	params.DrawTextPanel = DrawTextPanel;
	params.DisplayTextSize = DisplayTextSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.SetupRubyText
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_RubyPair>    RubyData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            InShadowColorAndOpacity        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_SubTitleTextBase_C::SetupRubyText(const struct FLinearColor& InShadowColorAndOpacity, TArray<struct FST_RubyPair>* RubyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.SetupRubyText");

	UUMG_SubTitleTextBase_C_SetupRubyText_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RubyData != nullptr)
		*RubyData = params.RubyData;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GenerateMissingParts
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_RubyPair>    TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUMG_SubTitleTextBase_C::GenerateMissingParts(TArray<struct FST_RubyPair>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GenerateMissingParts");

	UUMG_SubTitleTextBase_C_GenerateMissingParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetDummyTextRubyBody
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetDummyTextRubyBody(class UTextBlock** Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetDummyTextRubyBody");

	UUMG_SubTitleTextBase_C_GetDummyTextRubyBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetDummyTextBody
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetDummyTextBody(class UTextBlock** Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetDummyTextBody");

	UUMG_SubTitleTextBase_C_GetDummyTextBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetRubyRootCanvas
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            Canvas                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBase_C::GetRubyRootCanvas(class UCanvasPanel** Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetRubyRootCanvas");

	UUMG_SubTitleTextBase_C_GetRubyRootCanvas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SubTitleTextBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.Construct");

	UUMG_SubTitleTextBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.ExecuteUbergraph_UMG_SubTitleTextBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubTitleTextBase_C::ExecuteUbergraph_UMG_SubTitleTextBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.ExecuteUbergraph_UMG_SubTitleTextBase");

	UUMG_SubTitleTextBase_C_ExecuteUbergraph_UMG_SubTitleTextBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.onPlayTalkSE__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_SubTitleTextBase_C::onPlayTalkSE__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.onPlayTalkSE__DelegateSignature");

	UUMG_SubTitleTextBase_C_onPlayTalkSE__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
