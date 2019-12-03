
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

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsActiveMiniGameScript
// (NetRequest, Exec, Native, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           MiniGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::IsActiveMiniGameScript(bool* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsActiveMiniGameScript");

	UBPC_NPCTalkDetectController_C_IsActiveMiniGameScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniGame != nullptr)
		*MiniGame = params.MiniGame;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetActiveComponents
// (NetRequest, Native, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBPC_S3_TalkComponent_C*> TalkComponents                 (Parm, OutParm, ZeroConstructor)

void UBPC_NPCTalkDetectController_C::STATIC_GetActiveComponents(TArray<class UBPC_S3_TalkComponent_C*>* TalkComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetActiveComponents");

	UBPC_NPCTalkDetectController_C_GetActiveComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkComponents != nullptr)
		*TalkComponents = params.TalkComponents;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ParseSubQuestControl
// (NetReliable, Exec, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::ParseSubQuestControl(const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ParseSubQuestControl");

	UBPC_NPCTalkDetectController_C_ParseSubQuestControl_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsEnabledDetectIcon
// (Net, Exec, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3TalkType                    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::IsEnabledDetectIcon(ES3TalkType Type, bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsEnabledDetectIcon");

	UBPC_NPCTalkDetectController_C_IsEnabledDetectIcon_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetCurrentTalkComponent
// (Net, NetRequest, Event, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US3TalkComponentBase*    OutComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::GetCurrentTalkComponent(class US3TalkComponentBase** OutComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetCurrentTalkComponent");

	UBPC_NPCTalkDetectController_C_GetCurrentTalkComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutComponent != nullptr)
		*OutComponent = params.OutComponent;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.FindComponent
// (NetMulticast, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// ES3TalkType                    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3TalkComponentBase*    Value                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_NPCTalkDetectController_C::FindComponent(ES3TalkType Type, class US3TalkComponentBase** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.FindComponent");

	UBPC_NPCTalkDetectController_C_FindComponent_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.CanNPCTalk
// (NetReliable, NetRequest, NetMulticast, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::CanNPCTalk(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.CanNPCTalk");

	UBPC_NPCTalkDetectController_C_CanNPCTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsTalking
// (Event, Static, NetMulticast, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bTalking                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::STATIC_IsTalking(bool* bTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsTalking");

	UBPC_NPCTalkDetectController_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTalking != nullptr)
		*bTalking = params.bTalking;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetActionType
// (NetReliable, NetRequest, Event, NetResponse, Static, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> Params                         (Parm, OutParm, ZeroConstructor)

void UBPC_NPCTalkDetectController_C::STATIC_GetActionType(TArray<struct FS3DetectActionParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetActionType");

	UBPC_NPCTalkDetectController_C_GetActionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.RegisterTalkComponent
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3TalkType                    TalkType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3TalkComponentBase*    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::STATIC_RegisterTalkComponent(ES3TalkType TalkType, class US3TalkComponentBase* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.RegisterTalkComponent");

	UBPC_NPCTalkDetectController_C_RegisterTalkComponent_Params params;
	params.TalkType = TalkType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.OnStart
// (NetReliable, Exec, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_NPCTalkDetectController_C::STATIC_OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.OnStart");

	UBPC_NPCTalkDetectController_C_OnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.OnFinished
// (Net, Exec, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_NPCTalkDetectController_C::STATIC_OnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.OnFinished");

	UBPC_NPCTalkDetectController_C_OnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ReceiveBeginPlay
// (Net, Exec, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_NPCTalkDetectController_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ReceiveBeginPlay");

	UBPC_NPCTalkDetectController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.DecideDetectAction
// (Exec, Native, Event, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// ES3ActionIconType              ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::STATIC_DecideDetectAction(ES3ActionIconType ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.DecideDetectAction");

	UBPC_NPCTalkDetectController_C_DecideDetectAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ExecuteUbergraph_BPC_NPCTalkDetectController
// (NetReliable, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCTalkDetectController_C::ExecuteUbergraph_BPC_NPCTalkDetectController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ExecuteUbergraph_BPC_NPCTalkDetectController");

	UBPC_NPCTalkDetectController_C_ExecuteUbergraph_BPC_NPCTalkDetectController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
