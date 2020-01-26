
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

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayBlink
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommandButton_C::PlayBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayBlink");

	UWBP_QTEFreeCommandButton_C_PlayBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.SetButtonImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommandButton_C::SetButtonImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.SetButtonImage");

	UWBP_QTEFreeCommandButton_C_SetButtonImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommandButton_C::PlayInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayInput");

	UWBP_QTEFreeCommandButton_C_PlayInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommandButton_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Reset");

	UWBP_QTEFreeCommandButton_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommandButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Tick");

	UWBP_QTEFreeCommandButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.ExecuteUbergraph_WBP_QTEFreeCommandButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommandButton_C::ExecuteUbergraph_WBP_QTEFreeCommandButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.ExecuteUbergraph_WBP_QTEFreeCommandButton");

	UWBP_QTEFreeCommandButton_C_ExecuteUbergraph_WBP_QTEFreeCommandButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
