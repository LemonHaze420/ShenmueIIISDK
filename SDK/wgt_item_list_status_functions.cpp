
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

// Function wgt_item_list_status.wgt_item_list_status_C.CheckFade
// (NetRequest, Native, Event, NetResponse, Static, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::STATIC_CheckFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.CheckFade");

	Uwgt_item_list_status_C_CheckFade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.UpdateEnergyText
// (NetReliable, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::UpdateEnergyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.UpdateEnergyText");

	Uwgt_item_list_status_C_UpdateEnergyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.StartFade
// (Net, NetRequest, NetResponse, NetMulticast, Delegate, NetServer)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::StartFade(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.StartFade");

	Uwgt_item_list_status_C_StartFade_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.PriceAnim
// (Net, NetReliable, Event, MulticastDelegate, Public, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::PriceAnim(bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.PriceAnim");

	Uwgt_item_list_status_C_PriceAnim_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.SetPriceAnimData
// (Native, NetResponse, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_ValueType>      ValueType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::SetPriceAnimData(int Price, TEnumAsByte<EN_ValueType> ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.SetPriceAnimData");

	Uwgt_item_list_status_C_SetPriceAnimData_Params params;
	params.Price = Price;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.SetVisible
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::STATIC_SetVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.SetVisible");

	Uwgt_item_list_status_C_SetVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.Construct
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void Uwgt_item_list_status_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.Construct");

	Uwgt_item_list_status_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.Tick
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.Tick");

	Uwgt_item_list_status_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.Destruct
// (Net, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void Uwgt_item_list_status_C::STATIC_Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.Destruct");

	Uwgt_item_list_status_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void Uwgt_item_list_status_C::STATIC_BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_item_list_status_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ExecuteUbergraph_wgt_item_list_status
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::ExecuteUbergraph_wgt_item_list_status(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ExecuteUbergraph_wgt_item_list_status");

	Uwgt_item_list_status_C_ExecuteUbergraph_wgt_item_list_status_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.OnFadeOutFinished__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::OnFadeOutFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.OnFadeOutFinished__DelegateSignature");

	Uwgt_item_list_status_C_OnFadeOutFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_StartAnim__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_StartAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_StartAnim__DelegateSignature");

	Uwgt_item_list_status_C_ED_StartAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_FinishAnim__DelegateSignature
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_FinishAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_FinishAnim__DelegateSignature");

	Uwgt_item_list_status_C_ED_FinishAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Down__DelegateSignature
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_LeftStick_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Down__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Up__DelegateSignature
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_LeftStick_Up__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Up__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Up__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Left__DelegateSignature
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_LeftStick_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Left__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Right__DelegateSignature
// (Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_LeftStick_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Right__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressDown__DelegateSignature
// (Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PressDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressDown__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressUp__DelegateSignature
// (Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PressUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressUp__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushCancel__DelegateSignature
// (Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PushCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushCancel__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushUp__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PushUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushUp__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDown__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PushDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDown__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDecide__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PushDecide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDecide__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushDecide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressRight__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PressRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressRight__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressLeft__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PressLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressLeft__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushRight__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PushRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushRight__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushLeft__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_item_list_status_C::ED_PushLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushLeft__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
