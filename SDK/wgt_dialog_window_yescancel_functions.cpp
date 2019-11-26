
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

// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.IsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Open                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_dialog_window_yescancel_C::IsOpen(bool* Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.IsOpen");

	Uwgt_dialog_window_yescancel_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Open != nullptr)
		*Open = params.Open;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_dialog_window_yescancel_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Reset");

	Uwgt_dialog_window_yescancel_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.PushRight
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_dialog_window_yescancel_C::PushRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.PushRight");

	Uwgt_dialog_window_yescancel_C_PushRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.PushLeft
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_dialog_window_yescancel_C::PushLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.PushLeft");

	Uwgt_dialog_window_yescancel_C_PushLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_dialog_window_yescancel_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Close");

	Uwgt_dialog_window_yescancel_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_dialog_window_yescancel_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Open");

	Uwgt_dialog_window_yescancel_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_dialog_window_yescancel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Construct");

	Uwgt_dialog_window_yescancel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_dialog_window_yescancel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.Destruct");

	Uwgt_dialog_window_yescancel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.ExecuteUbergraph_wgt_dialog_window_yescancel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_dialog_window_yescancel_C::ExecuteUbergraph_wgt_dialog_window_yescancel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_dialog_window_yescancel.wgt_dialog_window_yescancel_C.ExecuteUbergraph_wgt_dialog_window_yescancel");

	Uwgt_dialog_window_yescancel_C_ExecuteUbergraph_wgt_dialog_window_yescancel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
