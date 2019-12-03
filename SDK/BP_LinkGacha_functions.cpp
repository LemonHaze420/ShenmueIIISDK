
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

// Function BP_LinkGacha.BP_LinkGacha_C.GetGachaID
// (Net, NetReliable, Native, Static, NetMulticast, Protected, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FName                   GachaId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::STATIC_GetGachaID(struct FName* GachaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GetGachaID");

	ABP_LinkGacha_C_GetGachaID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GachaId != nullptr)
		*GachaId = params.GachaId;
}


// Function BP_LinkGacha.BP_LinkGacha_C.DestroyLoadObject
// (Net, Exec, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::DestroyLoadObject(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.DestroyLoadObject");

	ABP_LinkGacha_C_DestroyLoadObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InitAsyncLoad
// (NetRequest, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::STATIC_InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InitAsyncLoad");

	ABP_LinkGacha_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GetSightCheckLocation
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Protected, Delegate, DLLImport, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_LinkGacha_C::GetSightCheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GetSightCheckLocation");

	ABP_LinkGacha_C_GetSightCheckLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGacha.BP_LinkGacha_C.IsTalking
// (NetReliable, NetRequest, Native, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LinkGacha_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.IsTalking");

	ABP_LinkGacha_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GetDetectAction
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_LinkGacha_C::STATIC_GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GetDetectAction");

	ABP_LinkGacha_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGacha.BP_LinkGacha_C.IsDispArrow
// (NetReliable, NetRequest, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           IsDisp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::IsDispArrow(bool* IsDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.IsDispArrow");

	ABP_LinkGacha_C_IsDispArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDisp != nullptr)
		*IsDisp = params.IsDisp;
}


// Function BP_LinkGacha.BP_LinkGacha_C.SpawnInputControlActor
// (NetRequest, Event, Static, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_LinkGacha_C::STATIC_SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.SpawnInputControlActor");

	ABP_LinkGacha_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputCancel
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_LinkGacha_C::STATIC_InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputCancel");

	ABP_LinkGacha_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputAction
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::STATIC_InputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputAction");

	ABP_LinkGacha_C_InputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputLeft
// (NetRequest, Exec, Native, Public, Protected, DLLImport, Const)

void ABP_LinkGacha_C::InputLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputLeft");

	ABP_LinkGacha_C_InputLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputRight
// (Native, Public, Protected, DLLImport, Const)

void ABP_LinkGacha_C::InputRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputRight");

	ABP_LinkGacha_C_InputRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.DeleteArrow
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::STATIC_DeleteArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.DeleteArrow");

	ABP_LinkGacha_C_DeleteArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.MakeArrow
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_LinkGacha_C::STATIC_MakeArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.MakeArrow");

	ABP_LinkGacha_C_MakeArrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Tick_Select
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ArgDeltaSec                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::Tick_Select(float ArgDeltaSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Tick_Select");

	ABP_LinkGacha_C_Tick_Select_Params params;
	params.ArgDeltaSec = ArgDeltaSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GetOldTargetGacha
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class ABP_MiniGame_Gacha_C*    newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::GetOldTargetGacha(class ABP_MiniGame_Gacha_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GetOldTargetGacha");

	ABP_LinkGacha_C_GetOldTargetGacha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_LinkGacha.BP_LinkGacha_C.StartLinkGacha
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::StartLinkGacha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.StartLinkGacha");

	ABP_LinkGacha_C_StartLinkGacha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Init
// (NetReliable, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Init");

	ABP_LinkGacha_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GetTargetGacha
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, Const)
// Parameters:
// class ABP_MiniGame_Gacha_C*    newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::GetTargetGacha(class ABP_MiniGame_Gacha_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GetTargetGacha");

	ABP_LinkGacha_C_GetTargetGacha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_LinkGacha.BP_LinkGacha_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.UserConstructionScript");

	ABP_LinkGacha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GachaRewardWathing
// (Net, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::GachaRewardWathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GachaRewardWathing");

	ABP_LinkGacha_C_GachaRewardWathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GachaThinkingGameContinue
// (Net, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::GachaThinkingGameContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GachaThinkingGameContinue");

	ABP_LinkGacha_C_GachaThinkingGameContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GachaGameContinue
// (Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::GachaGameContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GachaGameContinue");

	ABP_LinkGacha_C_GachaGameContinue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ResumeMiniGame
// (Exec, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LinkGacha_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.ResumeMiniGame");

	ABP_LinkGacha_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.EndMiniGame
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.EndMiniGame");

	ABP_LinkGacha_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkScriptEvent
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.OnTalkScriptEvent");

	ABP_LinkGacha_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.StartMiniGame
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.StartMiniGame");

	ABP_LinkGacha_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ReceiveTick
// (Net, NetReliable, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.ReceiveTick");

	ABP_LinkGacha_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ReceiveBeginPlay
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.ReceiveBeginPlay");

	ABP_LinkGacha_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.CancelMiniGame
// (Net, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.CancelMiniGame");

	ABP_LinkGacha_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkFinished
// (Net, NetReliable, Exec, Native, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.OnTalkFinished");

	ABP_LinkGacha_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.DecideDetectAction
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.DecideDetectAction");

	ABP_LinkGacha_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkStart
// (NetReliable, NetRequest, Native, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LinkGacha_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.OnTalkStart");

	ABP_LinkGacha_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Screen_Player
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Screen_Player");

	ABP_LinkGacha_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Screen_NPC
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Screen_NPC");

	ABP_LinkGacha_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Event_EndMiniGameByDispacher
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::Event_EndMiniGameByDispacher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Event_EndMiniGameByDispacher");

	ABP_LinkGacha_C_Event_EndMiniGameByDispacher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Event_BindLinkEndMiniGame
// (NetReliable, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_LinkGacha_C::Event_BindLinkEndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Event_BindLinkEndMiniGame");

	ABP_LinkGacha_C_Event_BindLinkEndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.FinalizeTalk
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_LinkGacha_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.FinalizeTalk");

	ABP_LinkGacha_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ExecuteUbergraph_BP_LinkGacha
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Private, Delegate, DLLImport, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::ExecuteUbergraph_BP_LinkGacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.ExecuteUbergraph_BP_LinkGacha");

	ABP_LinkGacha_C_ExecuteUbergraph_BP_LinkGacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
