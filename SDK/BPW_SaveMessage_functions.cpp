
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

// Function BPW_SaveMessage.BPW_SaveMessage_C.ShowMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveMessageType>  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SaveMessage_C::ShowMessage(TEnumAsByte<ESaveMessageType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.ShowMessage");

	UBPW_SaveMessage_C_ShowMessage_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveMessage.BPW_SaveMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_SaveMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.Construct");

	UBPW_SaveMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveMessage.BPW_SaveMessage_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_SaveMessage_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SaveMessage.BPW_SaveMessage_C.OnAnimationFinished");

	UBPW_SaveMessage_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SaveMessage.BPW_SaveMessage_C.ExecuteUbergraph_BPW_SaveMessage
// ()
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_SaveMessage_C::OnFinishedSaveMessage__DelegateSignature()
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
