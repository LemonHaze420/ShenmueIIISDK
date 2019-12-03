
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

// Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.GetLabel
// (NetReliable, NetResponse, Static, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   TextLabel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RewardWindow_C::STATIC_GetLabel(struct FName* TextLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.GetLabel");

	UBPW_UI_RewardWindow_C_GetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextLabel != nullptr)
		*TextLabel = params.TextLabel;
}


// Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.Construct
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_UI_RewardWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.Construct");

	UBPW_UI_RewardWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.BndEvt__NewAnimation_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_UI_RewardWindow_C::STATIC_BndEvt__NewAnimation_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.BndEvt__NewAnimation_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_RewardWindow_C_BndEvt__NewAnimation_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.ExecuteUbergraph_BPW_UI_RewardWindow
// (NetRequest, Native, Event, NetMulticast, Public, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RewardWindow_C::ExecuteUbergraph_BPW_UI_RewardWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.ExecuteUbergraph_BPW_UI_RewardWindow");

	UBPW_UI_RewardWindow_C_ExecuteUbergraph_BPW_UI_RewardWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.ED_FinishAnim__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_UI_RewardWindow_C::ED_FinishAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RewardWindow.BPW_UI_RewardWindow_C.ED_FinishAnim__DelegateSignature");

	UBPW_UI_RewardWindow_C_ED_FinishAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
