
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

// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.SetInputEnabled
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ResultScreenInputDelayer_C::SetInputEnabled(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.SetInputEnabled");

	UBPC_ResultScreenInputDelayer_C_SetInputEnabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.DelayInput
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPW_UI_GeneralWindow_Button_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPC_ResultScreenInputDelayer_C::DelayInput(float Delay, class UBPW_UI_GeneralWindow_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.DelayInput");

	UBPC_ResultScreenInputDelayer_C_DelayInput_Params params;
	params.Delay = Delay;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.NotifyAnimationComplete
// (NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UBPC_ResultScreenInputDelayer_C::STATIC_NotifyAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.NotifyAnimationComplete");

	UBPC_ResultScreenInputDelayer_C_NotifyAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.ReceiveEndPlay
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ResultScreenInputDelayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.ReceiveEndPlay");

	UBPC_ResultScreenInputDelayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.ExecuteUbergraph_BPC_ResultScreenInputDelayer
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ResultScreenInputDelayer_C::STATIC_ExecuteUbergraph_BPC_ResultScreenInputDelayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.ExecuteUbergraph_BPC_ResultScreenInputDelayer");

	UBPC_ResultScreenInputDelayer_C_ExecuteUbergraph_BPC_ResultScreenInputDelayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.OnDisableInput__DelegateSignature
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_ResultScreenInputDelayer_C::OnDisableInput__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.OnDisableInput__DelegateSignature");

	UBPC_ResultScreenInputDelayer_C_OnDisableInput__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.OnEnableInput__DelegateSignature
// (Net, NetRequest, Exec, Static, NetMulticast, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_ResultScreenInputDelayer_C::STATIC_OnEnableInput__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ResultScreenInputDelayer.BPC_ResultScreenInputDelayer_C.OnEnableInput__DelegateSignature");

	UBPC_ResultScreenInputDelayer_C_OnEnableInput__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
