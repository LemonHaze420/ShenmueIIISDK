
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

// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetGlowTextBorder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBorder*                 GlowTextBorder                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::GetGlowTextBorder(class UBorder** GlowTextBorder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetGlowTextBorder");

	UUMG_SubTitleTextBottom_C_GetGlowTextBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlowTextBorder != nullptr)
		*GlowTextBorder = params.GlowTextBorder;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetGlowTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class US3GlowTextBlock*        GlowTextBlock                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::GetGlowTextBlock(class US3GlowTextBlock** GlowTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetGlowTextBlock");

	UUMG_SubTitleTextBottom_C_GetGlowTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlowTextBlock != nullptr)
		*GlowTextBlock = params.GlowTextBlock;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetNowText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              NowText                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::GetNowText(class UTextBlock** NowText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetNowText");

	UUMG_SubTitleTextBottom_C_GetNowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NowText != nullptr)
		*NowText = params.NowText;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetAllSizeText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              AllSize                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::GetAllSizeText(class UTextBlock** AllSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetAllSizeText");

	UUMG_SubTitleTextBottom_C_GetAllSizeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllSize != nullptr)
		*AllSize = params.AllSize;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetRubyRootCanvas
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            Canvas                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::GetRubyRootCanvas(class UCanvasPanel** Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetRubyRootCanvas");

	UUMG_SubTitleTextBottom_C_GetRubyRootCanvas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetDummyTextBody
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::GetDummyTextBody(class UTextBlock** Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetDummyTextBody");

	UUMG_SubTitleTextBottom_C_GetDummyTextBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetDummyTextRubyBody
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::GetDummyTextRubyBody(class UTextBlock** Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.GetDummyTextRubyBody");

	UUMG_SubTitleTextBottom_C_GetDummyTextRubyBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SubTitleTextBottom_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.Construct");

	UUMG_SubTitleTextBottom_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            InRubyInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            InSubtitleColor                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            InOutlineColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::SetText(const struct FString& Body, const struct FST_RubyInfo& InRubyInfo, const struct FLinearColor& InSubtitleColor, const struct FLinearColor& InOutlineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.SetText");

	UUMG_SubTitleTextBottom_C_SetText_Params params;
	params.Body = Body;
	params.InRubyInfo = InRubyInfo;
	params.InSubtitleColor = InSubtitleColor;
	params.InOutlineColor = InOutlineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.ExecuteUbergraph_UMG_SubTitleTextBottom
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubTitleTextBottom_C::ExecuteUbergraph_UMG_SubTitleTextBottom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleTextBottom.UMG_SubTitleTextBottom_C.ExecuteUbergraph_UMG_SubTitleTextBottom");

	UUMG_SubTitleTextBottom_C_ExecuteUbergraph_UMG_SubTitleTextBottom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
