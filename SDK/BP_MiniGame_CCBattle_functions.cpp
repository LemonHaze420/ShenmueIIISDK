
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

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UpdateArcadeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::UpdateArcadeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UpdateArcadeData");

	ABP_MiniGame_CCBattle_C_UpdateArcadeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.GetDetectAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_CCBattle_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.GetDetectAction");

	ABP_MiniGame_CCBattle_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.InitAsyncLoad");

	ABP_MiniGame_CCBattle_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.SpawnInputControlActor
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_CCBattle_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.SpawnInputControlActor");

	ABP_MiniGame_CCBattle_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UserConstructionScript");

	ABP_MiniGame_CCBattle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCameraTimeLine__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_CCBattle_C::ZoomCameraTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCameraTimeLine__FinishedFunc");

	ABP_MiniGame_CCBattle_C_ZoomCameraTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCameraTimeLine__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_CCBattle_C::ZoomCameraTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCameraTimeLine__UpdateFunc");

	ABP_MiniGame_CCBattle_C_ZoomCameraTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.RestartMiniGame");

	ABP_MiniGame_CCBattle_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BGMPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::BGMPlay(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BGMPlay");

	ABP_MiniGame_CCBattle_C_BGMPlay_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BGMStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::BGMStop(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BGMStop");

	ABP_MiniGame_CCBattle_C_BGMStop_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.WinMiniGame");

	ABP_MiniGame_CCBattle_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.LoseMiniGame");

	ABP_MiniGame_CCBattle_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.EndMiniGame");

	ABP_MiniGame_CCBattle_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_1_OnGameClear__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_CCBattle_C::BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_1_OnGameClear__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_1_OnGameClear__DelegateSignature");

	ABP_MiniGame_CCBattle_C_BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_1_OnGameClear__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_2_OnGameOver__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_CCBattle_C::BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_2_OnGameOver__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_2_OnGameOver__DelegateSignature");

	ABP_MiniGame_CCBattle_C_BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_2_OnGameOver__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ContainerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::ContainerAction(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ContainerAction");

	ABP_MiniGame_CCBattle_C_ContainerAction_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.EndGameAfterWaiting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::EndGameAfterWaiting(float WaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.EndGameAfterWaiting");

	ABP_MiniGame_CCBattle_C_EndGameAfterWaiting_Params params;
	params.WaitTime = WaitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveBeginPlay");

	ABP_MiniGame_CCBattle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveTick");

	ABP_MiniGame_CCBattle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.StartMiniGame");

	ABP_MiniGame_CCBattle_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_CCBattle_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGame_CCBattle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_CCBattle_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGame_CCBattle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_CCBattle_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ResumeMiniGame");

	ABP_MiniGame_CCBattle_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.OnTalkScriptEvent");

	ABP_MiniGame_CCBattle_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.CancelMiniGame");

	ABP_MiniGame_CCBattle_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.OnFinishedFadeEndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::OnFinishedFadeEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.OnFinishedFadeEndGame");

	ABP_MiniGame_CCBattle_C_OnFinishedFadeEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveEndPlay");

	ABP_MiniGame_CCBattle_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.StartGame");

	ABP_MiniGame_CCBattle_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::ZoomCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCamera");

	ABP_MiniGame_CCBattle_C_ZoomCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UnZoomCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CCBattle_C::UnZoomCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UnZoomCamera");

	ABP_MiniGame_CCBattle_C_UnZoomCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ExecuteUbergraph_BP_MiniGame_CCBattle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CCBattle_C::ExecuteUbergraph_BP_MiniGame_CCBattle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ExecuteUbergraph_BP_MiniGame_CCBattle");

	ABP_MiniGame_CCBattle_C_ExecuteUbergraph_BP_MiniGame_CCBattle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
