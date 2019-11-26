
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GachaId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::GetGachaID(struct FName* GachaId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GetGachaID");

	ABP_LinkGacha_C_GetGachaID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GachaId != nullptr)
		*GachaId = params.GachaId;
}


// Function BP_LinkGacha.BP_LinkGacha_C.DestroyLoadObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::InitAsyncLoad(bool* dummy)
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
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LinkGacha_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.IsTalking");

	ABP_LinkGacha_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_LinkGacha_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GetDetectAction");

	ABP_LinkGacha_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGacha.BP_LinkGacha_C.IsDispArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_LinkGacha_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.SpawnInputControlActor");

	ABP_LinkGacha_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputCancel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputCancel");

	ABP_LinkGacha_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::InputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputAction");

	ABP_LinkGacha_C_InputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputLeft
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::InputLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputLeft");

	ABP_LinkGacha_C_InputLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.InputRight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::InputRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.InputRight");

	ABP_LinkGacha_C_InputRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.DeleteArrow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::DeleteArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.DeleteArrow");

	ABP_LinkGacha_C_DeleteArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.MakeArrow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::MakeArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.MakeArrow");

	ABP_LinkGacha_C_MakeArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Tick_Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ArgDeltaSec                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::Tick_Select(float ArgDeltaSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Tick_Select");

	ABP_LinkGacha_C_Tick_Select_Params params;
	params.ArgDeltaSec = ArgDeltaSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GetOldTargetGacha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::StartLinkGacha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.StartLinkGacha");

	ABP_LinkGacha_C_StartLinkGacha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Init");

	ABP_LinkGacha_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GetTargetGacha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.UserConstructionScript");

	ABP_LinkGacha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GachaRewardWathing
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::GachaRewardWathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GachaRewardWathing");

	ABP_LinkGacha_C_GachaRewardWathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GachaThinkingGameContinue
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::GachaThinkingGameContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GachaThinkingGameContinue");

	ABP_LinkGacha_C_GachaThinkingGameContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.GachaGameContinue
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::GachaGameContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.GachaGameContinue");

	ABP_LinkGacha_C_GachaGameContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_LinkGacha_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.ResumeMiniGame");

	ABP_LinkGacha_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.EndMiniGame");

	ABP_LinkGacha_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.OnTalkScriptEvent");

	ABP_LinkGacha_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.StartMiniGame");

	ABP_LinkGacha_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.ReceiveTick");

	ABP_LinkGacha_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LinkGacha_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.ReceiveBeginPlay");

	ABP_LinkGacha_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.CancelMiniGame");

	ABP_LinkGacha_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.DecideDetectAction");

	ABP_LinkGacha_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LinkGacha_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.OnTalkStart");

	ABP_LinkGacha_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Screen_Player");

	ABP_LinkGacha_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Screen_NPC");

	ABP_LinkGacha_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Event_EndMiniGameByDispacher
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::Event_EndMiniGameByDispacher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Event_EndMiniGameByDispacher");

	ABP_LinkGacha_C_Event_EndMiniGameByDispacher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.Event_BindLinkEndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::Event_BindLinkEndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.Event_BindLinkEndMiniGame");

	ABP_LinkGacha_C_Event_BindLinkEndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha.BP_LinkGacha_C.FinalizeTalk");

	ABP_LinkGacha_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha.BP_LinkGacha_C.ExecuteUbergraph_BP_LinkGacha
// ()
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
