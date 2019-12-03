
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

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayBlink
// (Exec, Native, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTEFreeCommandButton_C::PlayBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayBlink");

	UWBP_QTEFreeCommandButton_C_PlayBlink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.SetButtonImage
// (NetRequest, Exec, Event, NetResponse, Private, NetServer, NetClient)
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
// (Net, Exec, Native, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTEFreeCommandButton_C::PlayInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayInput");

	UWBP_QTEFreeCommandButton_C_PlayInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Reset
// (Net, Exec, Event, Static, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTEFreeCommandButton_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Reset");

	UWBP_QTEFreeCommandButton_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Tick
// (Net, Exec, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetRequest, Exec, Native, NetMulticast, Public, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommandButton_C::ExecuteUbergraph_WBP_QTEFreeCommandButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.ExecuteUbergraph_WBP_QTEFreeCommandButton");

	UWBP_QTEFreeCommandButton_C_ExecuteUbergraph_WBP_QTEFreeCommandButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
