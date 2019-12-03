
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

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsDisableAttentionState
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3BellTowerAttentionController_C::STATIC_IsDisableAttentionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsDisableAttentionState");

	ABP_S3BellTowerAttentionController_C_IsDisableAttentionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsSubtitlePlaying
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, Protected, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3BellTowerAttentionController_C::STATIC_IsSubtitlePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsSubtitlePlaying");

	ABP_S3BellTowerAttentionController_C_IsSubtitlePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetForceEventButtonScript
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 InScript                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_S3BellTowerAttentionController_C::STATIC_SetForceEventButtonScript(const struct FString& InScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetForceEventButtonScript");

	ABP_S3BellTowerAttentionController_C_SetForceEventButtonScript_Params params;
	params.InScript = InScript;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetForceEventButtonScriptEnabled
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BellTowerAttentionController_C::STATIC_SetForceEventButtonScriptEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetForceEventButtonScriptEnabled");

	ABP_S3BellTowerAttentionController_C_SetForceEventButtonScriptEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetCancelInvalid
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Invalid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BellTowerAttentionController_C::STATIC_SetCancelInvalid(bool Invalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetCancelInvalid");

	ABP_S3BellTowerAttentionController_C_SetCancelInvalid_Params params;
	params.Invalid = Invalid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsDetectActionEventEnabled
// (Net, Native, Event, NetResponse, Public, Protected, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3BellTowerAttentionController_C::IsDetectActionEventEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsDetectActionEventEnabled");

	ABP_S3BellTowerAttentionController_C_IsDetectActionEventEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.FinishDispBigIcon
// (NetReliable, NetRequest, Event, Public, Private, HasDefaults, NetClient, DLLImport)

void ABP_S3BellTowerAttentionController_C::FinishDispBigIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.FinishDispBigIcon");

	ABP_S3BellTowerAttentionController_C_FinishDispBigIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.StartDispBigIcon
// (Exec, Native, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_S3BellTowerAttentionController_C::StartDispBigIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.StartDispBigIcon");

	ABP_S3BellTowerAttentionController_C_StartDispBigIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ChangeTarget
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3BellTowerAttentionController_C::STATIC_ChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ChangeTarget");

	ABP_S3BellTowerAttentionController_C_ChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.InputAction
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BellTowerAttentionController_C::STATIC_InputAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.InputAction");

	ABP_S3BellTowerAttentionController_C_InputAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.GetDetectAction
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3BellTowerAttentionController_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.GetDetectAction");

	ABP_S3BellTowerAttentionController_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.UserConstructionScript
// (NetRequest, Native, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_S3BellTowerAttentionController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.UserConstructionScript");

	ABP_S3BellTowerAttentionController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ReceiveEndPlay
// (Net, NetReliable, Native, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BellTowerAttentionController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ReceiveEndPlay");

	ABP_S3BellTowerAttentionController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetSearchStateEnabled
// (NetReliable, Native, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BellTowerAttentionController_C::SetSearchStateEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetSearchStateEnabled");

	ABP_S3BellTowerAttentionController_C_SetSearchStateEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.DecideDetectAction
// (Net, Native, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BellTowerAttentionController_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.DecideDetectAction");

	ABP_S3BellTowerAttentionController_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ExecuteUbergraph_BP_S3BellTowerAttentionController
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BellTowerAttentionController_C::STATIC_ExecuteUbergraph_BP_S3BellTowerAttentionController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ExecuteUbergraph_BP_S3BellTowerAttentionController");

	ABP_S3BellTowerAttentionController_C_ExecuteUbergraph_BP_S3BellTowerAttentionController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.OnChangedTargetDispatcher_BellTower__DelegateSignature
// (NetRequest, Native, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_S3BellTowerAttentionController_C::OnChangedTargetDispatcher_BellTower__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.OnChangedTargetDispatcher_BellTower__DelegateSignature");

	ABP_S3BellTowerAttentionController_C_OnChangedTargetDispatcher_BellTower__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
