
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

// Function BPF_Input.BPF_Input_C.BPF_PadIndexToGeneralWindowButton
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// ES3PadButtonIndex              Pad                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_GeneralWindow_Button> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EN_GeneralWindow_Button> UBPF_Input_C::STATIC_BPF_PadIndexToGeneralWindowButton(ES3PadButtonIndex Pad, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Input.BPF_Input_C.BPF_PadIndexToGeneralWindowButton");

	UBPF_Input_C_BPF_PadIndexToGeneralWindowButton_Params params;
	params.Pad = Pad;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Input.BPF_Input_C.BPF_GetCancelPadIndex
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, BlueprintCallable)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PadButtonIndex              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3PadButtonIndex UBPF_Input_C::STATIC_BPF_GetCancelPadIndex(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Input.BPF_Input_C.BPF_GetCancelPadIndex");

	UBPF_Input_C_BPF_GetCancelPadIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Input.BPF_Input_C.BPF_GetConfirmPadIndex
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, BlueprintCallable)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PadButtonIndex              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3PadButtonIndex UBPF_Input_C::STATIC_BPF_GetConfirmPadIndex(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Input.BPF_Input_C.BPF_GetConfirmPadIndex");

	UBPF_Input_C_BPF_GetConfirmPadIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
