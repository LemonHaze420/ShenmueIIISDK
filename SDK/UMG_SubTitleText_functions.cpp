
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

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetGlowTextBorder
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UBorder*                 GlowTextBorder                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_GetGlowTextBorder(class UBorder** GlowTextBorder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.GetGlowTextBorder");

	UUMG_SubTitleText_C_GetGlowTextBorder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlowTextBorder != nullptr)
		*GlowTextBorder = params.GlowTextBorder;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.GetGlowTextBlock
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class US3GlowTextBlock*        GlowTextBlock                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_GetGlowTextBlock(class US3GlowTextBlock** GlowTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.GetGlowTextBlock");

	UUMG_SubTitleText_C_GetGlowTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlowTextBlock != nullptr)
		*GlowTextBlock = params.GlowTextBlock;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.GetNowText
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UTextBlock*              NowText                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_GetNowText(class UTextBlock** NowText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.GetNowText");

	UUMG_SubTitleText_C_GetNowText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NowText != nullptr)
		*NowText = params.NowText;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.GetAllSizeText
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UTextBlock*              AllSize                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_GetAllSizeText(class UTextBlock** AllSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.GetAllSizeText");

	UUMG_SubTitleText_C_GetAllSizeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllSize != nullptr)
		*AllSize = params.AllSize;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.GetRubyRootCanvas
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UCanvasPanel*            Canvas                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_GetRubyRootCanvas(class UCanvasPanel** Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.GetRubyRootCanvas");

	UUMG_SubTitleText_C_GetRubyRootCanvas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.GetDummyTextBody
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UTextBlock*              Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_GetDummyTextBody(class UTextBlock** Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.GetDummyTextBody");

	UUMG_SubTitleText_C_GetDummyTextBody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.GetDummyTextRubyBody
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UTextBlock*              Body                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_GetDummyTextRubyBody(class UTextBlock** Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.GetDummyTextRubyBody");

	UUMG_SubTitleText_C_GetDummyTextRubyBody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body != nullptr)
		*Body = params.Body;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.Construct
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void UUMG_SubTitleText_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.Construct");

	UUMG_SubTitleText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.SetText
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            InRubyInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            InSubtitleColor                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            InOutlineColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_SetText(const struct FString& Body, const struct FST_RubyInfo& InRubyInfo, const struct FLinearColor& InSubtitleColor, const struct FLinearColor& InOutlineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.SetText");

	UUMG_SubTitleText_C_SetText_Params params;
	params.Body = Body;
	params.InRubyInfo = InRubyInfo;
	params.InSubtitleColor = InSubtitleColor;
	params.InOutlineColor = InOutlineColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_SubTitleText.UMG_SubTitleText_C.ExecuteUbergraph_UMG_SubTitleText
// (Event, Static, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_SubTitleText_C::STATIC_ExecuteUbergraph_UMG_SubTitleText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SubTitleText.UMG_SubTitleText_C.ExecuteUbergraph_UMG_SubTitleText");

	UUMG_SubTitleText_C_ExecuteUbergraph_UMG_SubTitleText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
