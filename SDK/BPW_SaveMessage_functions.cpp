
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

// Function BPW_SaveMessage.BPW_SaveMessage_C.ShowMessage
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<ESaveMessageType>  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveMessage_C::ShowMessage(TEnumAsByte<ESaveMessageType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.ShowMessage");

	UBPW_SaveMessage_C_ShowMessage_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveMessage.BPW_SaveMessage_C.Construct
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Private, Protected, NetServer, NetClient, BlueprintPure)

void UBPW_SaveMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.Construct");

	UBPW_SaveMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveMessage.BPW_SaveMessage_C.OnAnimationFinished
// (Exec, NetResponse, Static, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_SaveMessage_C::STATIC_OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.OnAnimationFinished");

	UBPW_SaveMessage_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveMessage.BPW_SaveMessage_C.ExecuteUbergraph_BPW_SaveMessage
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveMessage_C::ExecuteUbergraph_BPW_SaveMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.ExecuteUbergraph_BPW_SaveMessage");

	UBPW_SaveMessage_C_ExecuteUbergraph_BPW_SaveMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveMessage.BPW_SaveMessage_C.OnFinishedSaveMessage__DelegateSignature
// (NetReliable, Exec, Static, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void UBPW_SaveMessage_C::STATIC_OnFinishedSaveMessage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.OnFinishedSaveMessage__DelegateSignature");

	UBPW_SaveMessage_C_OnFinishedSaveMessage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
