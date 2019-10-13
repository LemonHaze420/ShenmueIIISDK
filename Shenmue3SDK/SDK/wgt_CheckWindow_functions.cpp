
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

// Function wgt_CheckWindow.wgt_CheckWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_CheckWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Tick");

	Uwgt_CheckWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_CheckWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Construct");

	Uwgt_CheckWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Left
// (BlueprintCallable, BlueprintEvent)

void Uwgt_CheckWindow_C::Push_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Left");

	Uwgt_CheckWindow_C_Push_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Right
// (BlueprintCallable, BlueprintEvent)

void Uwgt_CheckWindow_C::Push_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Right");

	Uwgt_CheckWindow_C_Push_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.ExecuteUbergraph_wgt_CheckWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_CheckWindow_C::ExecuteUbergraph_wgt_CheckWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.ExecuteUbergraph_wgt_CheckWindow");

	Uwgt_CheckWindow_C_ExecuteUbergraph_wgt_CheckWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.ED_PushRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_CheckWindow_C::ED_PushRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.ED_PushRight__DelegateSignature");

	Uwgt_CheckWindow_C_ED_PushRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.ED_PushLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_CheckWindow_C::ED_PushLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.ED_PushLeft__DelegateSignature");

	Uwgt_CheckWindow_C_ED_PushLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
