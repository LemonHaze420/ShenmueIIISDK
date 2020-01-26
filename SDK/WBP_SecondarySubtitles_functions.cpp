
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

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.InitializeFontSize
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SecondarySubtitles_C::InitializeFontSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.InitializeFontSize");

	UWBP_SecondarySubtitles_C_InitializeFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ClearSubtitleTextWidget
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              InTextWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SecondarySubtitles_C::ClearSubtitleTextWidget(class UTextBlock* InTextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ClearSubtitleTextWidget");

	UWBP_SecondarySubtitles_C_ClearSubtitleTextWidget_Params params;
	params.InTextWidget = InTextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitleTextWidget
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              InTextWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_SecondarySubtitles_C::DrawSubtitleTextWidget(class UTextBlock* InTextWidget, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitleTextWidget");

	UWBP_SecondarySubtitles_C_DrawSubtitleTextWidget_Params params;
	params.InTextWidget = InTextWidget;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SecondarySubtitles_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Clear");

	UWBP_SecondarySubtitles_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         InTextArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_SecondarySubtitles_C::DrawSubtitles(TArray<struct FString>* InTextArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitles");

	UWBP_SecondarySubtitles_C_DrawSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTextArray != nullptr)
		*InTextArray = params.InTextArray;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SecondarySubtitles_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Construct");

	UWBP_SecondarySubtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ExecuteUbergraph_WBP_SecondarySubtitles
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SecondarySubtitles_C::ExecuteUbergraph_WBP_SecondarySubtitles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ExecuteUbergraph_WBP_SecondarySubtitles");

	UWBP_SecondarySubtitles_C_ExecuteUbergraph_WBP_SecondarySubtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
