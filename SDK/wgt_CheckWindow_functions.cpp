
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

// Function wgt_CheckWindow.wgt_CheckWindow_C.Tick
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_CheckWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Tick");

	Uwgt_CheckWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.Construct
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Delegate)

void Uwgt_CheckWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Construct");

	Uwgt_CheckWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Left
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Public, Delegate)

void Uwgt_CheckWindow_C::STATIC_Push_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Left");

	Uwgt_CheckWindow_C_Push_Left_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Right
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Public, Delegate)

void Uwgt_CheckWindow_C::STATIC_Push_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.Push_Right");

	Uwgt_CheckWindow_C_Push_Right_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.ExecuteUbergraph_wgt_CheckWindow
// (Net, Exec, Event, NetResponse, NetMulticast, Public, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_CheckWindow_C::STATIC_ED_PushRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_CheckWindow.wgt_CheckWindow_C.ED_PushRight__DelegateSignature");

	Uwgt_CheckWindow_C_ED_PushRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_CheckWindow.wgt_CheckWindow_C.ED_PushLeft__DelegateSignature
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_CheckWindow_C::STATIC_ED_PushLeft__DelegateSignature()
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
