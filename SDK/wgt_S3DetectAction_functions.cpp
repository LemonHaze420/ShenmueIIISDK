
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

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.IconNeedsAnimUpdate
// (NetReliable, Exec, Native, Event, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3DetectActionParam    Action                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class Uwgt_S3DetectButtonIcon_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_S3DetectAction_C::IconNeedsAnimUpdate(const struct FS3DetectActionParam& Action, class Uwgt_S3DetectButtonIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.IconNeedsAnimUpdate");

	Uwgt_S3DetectAction_C_IconNeedsAnimUpdate_Params params;
	params.Action = Action;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.IconNeedsUpdate
// (Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FS3DetectActionParam    Action                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class Uwgt_S3DetectButtonIcon_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_S3DetectAction_C::STATIC_IconNeedsUpdate(const struct FS3DetectActionParam& Action, class Uwgt_S3DetectButtonIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.IconNeedsUpdate");

	Uwgt_S3DetectAction_C_IconNeedsUpdate_Params params;
	params.Action = Action;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon_UpdateOnly
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class Uwgt_S3DetectButtonIcon_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class Uwgt_S3DetectButtonIcon_C* Uwgt_S3DetectAction_C::STATIC_ShowNewIcon_UpdateOnly(int ButtonIndex, struct FS3DetectActionParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon_UpdateOnly");

	Uwgt_S3DetectAction_C_ShowNewIcon_UpdateOnly_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;

	return params.ReturnValue;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetPlatformButton
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3DetectAction_C::GetPlatformButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetPlatformButton");

	Uwgt_S3DetectAction_C_GetPlatformButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.EndNewInfoAnimation
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3DetectAction_C::STATIC_EndNewInfoAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.EndNewInfoAnimation");

	Uwgt_S3DetectAction_C_EndNewInfoAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.StartNewInfoAnimation
// (Native, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::StartNewInfoAnimation(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.StartNewInfoAnimation");

	Uwgt_S3DetectAction_C_StartNewInfoAnimation_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetButtonIcon
// (NetReliable, Native, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uwgt_S3DetectButtonIcon_C* Icon                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3DetectAction_C::GetButtonIcon(int ButtonIndex, class Uwgt_S3DetectButtonIcon_C** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetButtonIcon");

	Uwgt_S3DetectAction_C_GetButtonIcon_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BlinkHelpIcon
// (NetReliable, NetRequest, Exec, Event, NetResponse, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::BlinkHelpIcon(bool End)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BlinkHelpIcon");

	Uwgt_S3DetectAction_C_BlinkHelpIcon_Params params;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.SetCharaName
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 AlphabetName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::SetCharaName(const struct FString& CharaName, const struct FString& AlphabetName, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.SetCharaName");

	Uwgt_S3DetectAction_C_SetCharaName_Params params;
	params.CharaName = CharaName;
	params.AlphabetName = AlphabetName;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.CheckShowIconBaseAll
// (Net, NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void Uwgt_S3DetectAction_C::STATIC_CheckShowIconBaseAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.CheckShowIconBaseAll");

	Uwgt_S3DetectAction_C_CheckShowIconBaseAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.CreateIcons
// (NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void Uwgt_S3DetectAction_C::STATIC_CreateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.CreateIcons");

	Uwgt_S3DetectAction_C_CreateIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon
// (Net, NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_S3DetectAction_C::STATIC_ShowNewIcon(int Index, struct FS3DetectActionParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon");

	Uwgt_S3DetectAction_C_ShowNewIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.FadeOutIcon
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class Uwgt_S3DetectButtonIcon_C* Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Decide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::FadeOutIcon(class Uwgt_S3DetectButtonIcon_C* Icon, bool Decide)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.FadeOutIcon");

	Uwgt_S3DetectAction_C_FadeOutIcon_Params params;
	params.Icon = Icon;
	params.Decide = Decide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.DecideAction
// (Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            DecideIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ES3ActionIconType              ReturnType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::DecideAction(int DecideIndex, class AActor** ReturnActor, ES3ActionIconType* ReturnType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.DecideAction");

	Uwgt_S3DetectAction_C_DecideAction_Params params;
	params.DecideIndex = DecideIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnActor != nullptr)
		*ReturnActor = params.ReturnActor;
	if (ReturnType != nullptr)
		*ReturnType = params.ReturnType;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.UpdateIcon
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS3DetectActionParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InDecide                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::UpdateIcon(int ButtonIndex, bool InDecide, struct FS3DetectActionParam* Param, bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.UpdateIcon");

	Uwgt_S3DetectAction_C_UpdateIcon_Params params;
	params.ButtonIndex = ButtonIndex;
	params.InDecide = InDecide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
	if (Change != nullptr)
		*Change = params.Change;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.UpdateIconAll
// (Exec, Native, Static, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> InParams                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uwgt_S3DetectAction_C::STATIC_UpdateIconAll(TArray<struct FS3DetectActionParam>* InParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.UpdateIconAll");

	Uwgt_S3DetectAction_C_UpdateIconAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InParams != nullptr)
		*InParams = params.InParams;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.AdjustCenter
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*              PanelSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3DetectAction_C::STATIC_AdjustCenter(class UPanelSlot* PanelSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.AdjustCenter");

	Uwgt_S3DetectAction_C_AdjustCenter_Params params;
	params.PanelSlot = PanelSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.Construct
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void Uwgt_S3DetectAction_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.Construct");

	Uwgt_S3DetectAction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.Tick
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.Tick");

	Uwgt_S3DetectAction_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (NetReliable, Exec, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void Uwgt_S3DetectAction_C::STATIC_BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, Exec, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void Uwgt_S3DetectAction_C::STATIC_BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, Exec, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void Uwgt_S3DetectAction_C::STATIC_BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void Uwgt_S3DetectAction_C::STATIC_BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ExecuteUbergraph_wgt_S3DetectAction
// (Exec, Native, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::STATIC_ExecuteUbergraph_wgt_S3DetectAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.ExecuteUbergraph_wgt_S3DetectAction");

	Uwgt_S3DetectAction_C_ExecuteUbergraph_wgt_S3DetectAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ED_NewHelpAnim_Finish__DelegateSignature
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3DetectAction_C::ED_NewHelpAnim_Finish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.ED_NewHelpAnim_Finish__DelegateSignature");

	Uwgt_S3DetectAction_C_ED_NewHelpAnim_Finish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
