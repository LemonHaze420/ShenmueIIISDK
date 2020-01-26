
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

// Function BPF_Dialog.BPF_Dialog_C.CreateItemDialogText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           InLabels                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ShowLabels                     (Parm, OutParm, ZeroConstructor)

void UBPF_Dialog_C::STATIC_CreateItemDialogText(class UObject* __WorldContext, TArray<struct FName>* InLabels, TArray<struct FName>* ShowLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Dialog.BPF_Dialog_C.CreateItemDialogText");

	UBPF_Dialog_C_CreateItemDialogText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLabels != nullptr)
		*InLabels = params.InLabels;
	if (ShowLabels != nullptr)
		*ShowLabels = params.ShowLabels;
}


// Function BPF_Dialog.BPF_Dialog_C.GetPlatformCodeLabel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Dialog_C::STATIC_GetPlatformCodeLabel(class UObject* __WorldContext, struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Dialog.BPF_Dialog_C.GetPlatformCodeLabel");

	UBPF_Dialog_C_GetPlatformCodeLabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function BPF_Dialog.BPF_Dialog_C.AllowRewardDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3PlayerBehavior              ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Dialog_C::STATIC_AllowRewardDialog(ES3PlayerBehavior ID, class UObject* __WorldContext, bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Dialog.BPF_Dialog_C.AllowRewardDialog");

	UBPF_Dialog_C_AllowRewardDialog_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function BPF_Dialog.BPF_Dialog_C.CanShowDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Dialog_C::STATIC_CanShowDialog(bool Reward, class UObject* __WorldContext, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Dialog.BPF_Dialog_C.CanShowDialog");

	UBPF_Dialog_C_CanShowDialog_Params params;
	params.Reward = Reward;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BPF_Dialog.BPF_Dialog_C.OverrideDialogButton
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneralWindowParam  Param                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   DecideLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_GeneralWindow_Button> DecideIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CancelLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_GeneralWindow_Button> CancelIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_GeneralWindowParam  newParam                       (Parm, OutParm)

void UBPF_Dialog_C::STATIC_OverrideDialogButton(const struct FST_GeneralWindowParam& Param, const struct FName& DecideLabel, TEnumAsByte<EN_GeneralWindow_Button> DecideIcon, const struct FName& CancelLabel, TEnumAsByte<EN_GeneralWindow_Button> CancelIcon, class UObject* __WorldContext, struct FST_GeneralWindowParam* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Dialog.BPF_Dialog_C.OverrideDialogButton");

	UBPF_Dialog_C_OverrideDialogButton_Params params;
	params.Param = Param;
	params.DecideLabel = DecideLabel;
	params.DecideIcon = DecideIcon;
	params.CancelLabel = CancelLabel;
	params.CancelIcon = CancelIcon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
