
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BW_DispMemopad.BW_DispMemopad_C.CursorFadeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::CursorFadeAnim(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.CursorFadeAnim");

	UBW_DispMemopad_C_CursorFadeAnim_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.FadeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::FadeAnim(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.FadeAnim");

	UBW_DispMemopad_C_FadeAnim_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DispMemopad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.Construct");

	UBW_DispMemopad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.Tick");

	UBW_DispMemopad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DispMemopad.BW_DispMemopad_C.ExecuteUbergraph_BW_DispMemopad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DispMemopad_C::ExecuteUbergraph_BW_DispMemopad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DispMemopad.BW_DispMemopad_C.ExecuteUbergraph_BW_DispMemopad");

	UBW_DispMemopad_C_ExecuteUbergraph_BW_DispMemopad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
