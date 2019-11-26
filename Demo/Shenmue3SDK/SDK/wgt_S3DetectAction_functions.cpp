
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

// Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetPlatformButton
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectAction_C::GetPlatformButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetPlatformButton");

	Uwgt_S3DetectAction_C_GetPlatformButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.EndNewInfoAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectAction_C::EndNewInfoAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.EndNewInfoAnimation");

	Uwgt_S3DetectAction_C_EndNewInfoAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.StartNewInfoAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::StartNewInfoAnimation(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.StartNewInfoAnimation");

	Uwgt_S3DetectAction_C_StartNewInfoAnimation_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetButtonIcon
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uwgt_S3DetectButtonIcon_C* Icon                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3DetectAction_C::GetButtonIcon(int ButtonIndex, class Uwgt_S3DetectButtonIcon_C** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.GetButtonIcon");

	Uwgt_S3DetectAction_C_GetButtonIcon_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BlinkHelpIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.CheckShowIconBaseAll
// (Private, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectAction_C::CheckShowIconBaseAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.CheckShowIconBaseAll");

	Uwgt_S3DetectAction_C_CheckShowIconBaseAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.CreateIcons
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectAction_C::CreateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.CreateIcons");

	Uwgt_S3DetectAction_C_CreateIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_S3DetectAction_C::ShowNewIcon(int Index, struct FS3DetectActionParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.ShowNewIcon");

	Uwgt_S3DetectAction_C_ShowNewIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.FadeOutIcon
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> InParams                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uwgt_S3DetectAction_C::UpdateIconAll(TArray<struct FS3DetectActionParam>* InParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.UpdateIconAll");

	Uwgt_S3DetectAction_C_UpdateIconAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InParams != nullptr)
		*InParams = params.InParams;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.AdjustCenter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelSlot*              PanelSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3DetectAction_C::AdjustCenter(class UPanelSlot* PanelSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.AdjustCenter");

	Uwgt_S3DetectAction_C_AdjustCenter_Params params;
	params.PanelSlot = PanelSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3DetectAction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.Construct");

	Uwgt_S3DetectAction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
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
// (BlueprintEvent)

void Uwgt_S3DetectAction_C::BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3DetectAction_C::BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpFade_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3DetectAction_C::BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpFlash_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3DetectAction_C::BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectAction_C_BndEvt__NewHelpAnim_35_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ExecuteUbergraph_wgt_S3DetectAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectAction_C::ExecuteUbergraph_wgt_S3DetectAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.ExecuteUbergraph_wgt_S3DetectAction");

	Uwgt_S3DetectAction_C_ExecuteUbergraph_wgt_S3DetectAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectAction.wgt_S3DetectAction_C.ED_NewHelpAnim_Finish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectAction_C::ED_NewHelpAnim_Finish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectAction.wgt_S3DetectAction_C.ED_NewHelpAnim_Finish__DelegateSignature");

	Uwgt_S3DetectAction_C_ED_NewHelpAnim_Finish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
