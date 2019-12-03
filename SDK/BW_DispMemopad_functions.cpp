
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

// Function BW_DispMemopad.BW_DispMemopad_C.SetRightVisibility
// (Exec, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::STATIC_SetRightVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.SetRightVisibility");

	UBW_DispMemopad_C_SetRightVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.SetLeftVisibility
// (Net, NetRequest, Exec, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::STATIC_SetLeftVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.SetLeftVisibility");

	UBW_DispMemopad_C_SetLeftVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.CursorFadeAnim
// (Net, Native, Static, NetMulticast, Public, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::STATIC_CursorFadeAnim(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.CursorFadeAnim");

	UBW_DispMemopad_C_CursorFadeAnim_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.FadeAnim
// (Net, NetRequest, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::STATIC_FadeAnim(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.FadeAnim");

	UBW_DispMemopad_C_FadeAnim_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.Tick
// (Net, NetRequest, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.Tick");

	UBW_DispMemopad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.Construct
// (Net, NetRequest, Native, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBW_DispMemopad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.Construct");

	UBW_DispMemopad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.ExecuteUbergraph_BW_DispMemopad
// (Net, NetRequest, Exec, Native, Static, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::STATIC_ExecuteUbergraph_BW_DispMemopad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.ExecuteUbergraph_BW_DispMemopad");

	UBW_DispMemopad_C_ExecuteUbergraph_BW_DispMemopad_Params params;
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
