
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

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.InitializeFontSize
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UWBP_SecondarySubtitles_C::STATIC_InitializeFontSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.InitializeFontSize");

	UWBP_SecondarySubtitles_C_InitializeFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ClearSubtitleTextWidget
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// class UTextBlock*              InTextWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SecondarySubtitles_C::ClearSubtitleTextWidget(class UTextBlock* InTextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ClearSubtitleTextWidget");

	UWBP_SecondarySubtitles_C_ClearSubtitleTextWidget_Params params;
	params.InTextWidget = InTextWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitleTextWidget
// (Net, NetRequest, NetResponse, Static, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              InTextWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_SecondarySubtitles_C::STATIC_DrawSubtitleTextWidget(class UTextBlock* InTextWidget, const struct FString& Text)
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
// (Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)

void UWBP_SecondarySubtitles_C::STATIC_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Clear");

	UWBP_SecondarySubtitles_C_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitles
// (NetRequest, Native, Event, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         InTextArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_SecondarySubtitles_C::DrawSubtitles(TArray<struct FString>* InTextArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitles");

	UWBP_SecondarySubtitles_C_DrawSubtitles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTextArray != nullptr)
		*InTextArray = params.InTextArray;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Construct
// (NetReliable, NetRequest, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_SecondarySubtitles_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Construct");

	UWBP_SecondarySubtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ExecuteUbergraph_WBP_SecondarySubtitles
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
