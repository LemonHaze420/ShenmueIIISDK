
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

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_CJ_KSmodlue_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.GetDetectAction");

	ABP_CJ_KSmodlue_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_CJ_KSmodlue_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.GetPriority");

	ABP_CJ_KSmodlue_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.SetForcedCancel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CJ_KSmodlue_C::SetForcedCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.SetForcedCancel");

	ABP_CJ_KSmodlue_C_SetForcedCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.CheckGameTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           TimeOver                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_KSmodlue_C::CheckGameTime(bool* TimeOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.CheckGameTime");

	ABP_CJ_KSmodlue_C_CheckGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeOver != nullptr)
		*TimeOver = params.TimeOver;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.DetectEnable_Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_KSmodlue_C::DetectEnable_Cancel(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.DetectEnable_Cancel");

	ABP_CJ_KSmodlue_C_DetectEnable_Cancel_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.MakeCurrentText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CJ_KSmodlue_C::MakeCurrentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.MakeCurrentText");

	ABP_CJ_KSmodlue_C_MakeCurrentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CJ_KSmodlue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.UserConstructionScript");

	ABP_CJ_KSmodlue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.InpActEvt_Interruption_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CJ_KSmodlue_C::InpActEvt_Interruption_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.InpActEvt_Interruption_K2Node_InputActionEvent_2");

	ABP_CJ_KSmodlue_C_InpActEvt_Interruption_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CJ_KSmodlue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ReceiveBeginPlay");

	ABP_CJ_KSmodlue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_KSmodlue_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ReceiveTick");

	ABP_CJ_KSmodlue_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.KsSelEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_KSmodlue_C::KsSelEnd(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.KsSelEnd");

	ABP_CJ_KSmodlue_C_KsSelEnd_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_KSmodlue_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.DecideDetectAction");

	ABP_CJ_KSmodlue_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ForcedCancel
// (BlueprintCallable, BlueprintEvent)

void ABP_CJ_KSmodlue_C::ForcedCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ForcedCancel");

	ABP_CJ_KSmodlue_C_ForcedCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ExecuteUbergraph_BP_CJ_KSmodlue
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_KSmodlue_C::ExecuteUbergraph_BP_CJ_KSmodlue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ExecuteUbergraph_BP_CJ_KSmodlue");

	ABP_CJ_KSmodlue_C_ExecuteUbergraph_BP_CJ_KSmodlue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.CancelNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CJ_KSmodlue_C::CancelNotification__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.CancelNotification__DelegateSignature");

	ABP_CJ_KSmodlue_C_CancelNotification__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.TimeOverNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CJ_KSmodlue_C::TimeOverNotification__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.TimeOverNotification__DelegateSignature");

	ABP_CJ_KSmodlue_C_TimeOverNotification__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.SelectEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_KSmodlue_C::SelectEnd__DelegateSignature(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.SelectEnd__DelegateSignature");

	ABP_CJ_KSmodlue_C_SelectEnd__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
