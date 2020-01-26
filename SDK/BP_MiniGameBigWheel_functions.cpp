
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

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetBoardItemAngle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::SetBoardItemAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetBoardItemAngle");

	ABP_MiniGameBigWheel_C_SetBoardItemAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetItemImageCN
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::SetItemImageCN()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetItemImageCN");

	ABP_MiniGameBigWheel_C_SetItemImageCN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitializeCNTex
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::InitializeCNTex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitializeCNTex");

	ABP_MiniGameBigWheel_C_InitializeCNTex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResetValueCN
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::ResetValueCN()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResetValueCN");

	ABP_MiniGameBigWheel_C_ResetValueCN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsOverLimitTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBigWheel_C::IsOverLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsOverLimitTime");

	ABP_MiniGameBigWheel_C_IsOverLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResetButtonValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::ResetButtonValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResetButtonValue");

	ABP_MiniGameBigWheel_C_ResetButtonValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateButtonPower
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::UpdateButtonPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateButtonPower");

	ABP_MiniGameBigWheel_C_UpdateButtonPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetGameMainUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::SetGameMainUpdate(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetGameMainUpdate");

	ABP_MiniGameBigWheel_C_SetGameMainUpdate_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsSpecialEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Event                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::IsSpecialEvent(bool* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsSpecialEvent");

	ABP_MiniGameBigWheel_C_IsSpecialEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.AddJackpotCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::AddJackpotCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.AddJackpotCount");

	ABP_MiniGameBigWheel_C_AddJackpotCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.LoadJackpotCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::LoadJackpotCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.LoadJackpotCount");

	ABP_MiniGameBigWheel_C_LoadJackpotCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnObjectLoaded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::OnObjectLoaded(const struct FString& LoadId, class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnObjectLoaded");

	ABP_MiniGameBigWheel_C_OnObjectLoaded_Params params;
	params.LoadId = LoadId;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateSpecialItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::UpdateSpecialItemData(class UDataTable* DataTable, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateSpecialItemData");

	ABP_MiniGameBigWheel_C_UpdateSpecialItemData_Params params;
	params.DataTable = DataTable;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RewardSpecialItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::RewardSpecialItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RewardSpecialItem");

	ABP_MiniGameBigWheel_C_RewardSpecialItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetEnabledButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::SetEnabledButton(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetEnabledButton");

	ABP_MiniGameBigWheel_C_SetEnabledButton_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateTicketNum
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::UpdateTicketNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateTicketNum");

	ABP_MiniGameBigWheel_C_UpdateTicketNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsEnabledPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBigWheel_C::IsEnabledPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsEnabledPlay");

	ABP_MiniGameBigWheel_C_IsEnabledPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitializeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitializeValue");

	ABP_MiniGameBigWheel_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGameBigWheel_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.GetDetectAction");

	ABP_MiniGameBigWheel_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.CreateCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::CreateCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.CreateCollision");

	ABP_MiniGameBigWheel_C_CreateCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateBoard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::UpdateBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateBoard");

	ABP_MiniGameBigWheel_C_UpdateBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitAsyncLoad
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitAsyncLoad");

	ABP_MiniGameBigWheel_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGameBigWheel_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SpawnInputControlActor");

	ABP_MiniGameBigWheel_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UserConstructionScript");

	ABP_MiniGameBigWheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RotateTimeLine__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGameBigWheel_C::RotateTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RotateTimeLine__FinishedFunc");

	ABP_MiniGameBigWheel_C_RotateTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RotateTimeLine__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGameBigWheel_C::RotateTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RotateTimeLine__UpdateFunc");

	ABP_MiniGameBigWheel_C_RotateTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.StartMiniGame");

	ABP_MiniGameBigWheel_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.EndMiniGame");

	ABP_MiniGameBigWheel_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RestartMiniGame");

	ABP_MiniGameBigWheel_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BGMPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::BGMPlay(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BGMPlay");

	ABP_MiniGameBigWheel_C_BGMPlay_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BGMStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::BGMStop(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BGMStop");

	ABP_MiniGameBigWheel_C_BGMStop_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.WinMiniGame");

	ABP_MiniGameBigWheel_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.LoseMiniGame");

	ABP_MiniGameBigWheel_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnHitItemCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MiniGameBigWheelItemData ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameBigWheel_C::OnHitItemCollision(const struct FST_MiniGameBigWheelItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnHitItemCollision");

	ABP_MiniGameBigWheel_C_OnHitItemCollision_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameBigWheel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveBeginPlay");

	ABP_MiniGameBigWheel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveTick");

	ABP_MiniGameBigWheel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGameBigWheel_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGameBigWheel_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGameBigWheel_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGameBigWheel_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGameBigWheel_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResumeMiniGame");

	ABP_MiniGameBigWheel_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnTalkScriptEvent");

	ABP_MiniGameBigWheel_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.CancelMiniGame");

	ABP_MiniGameBigWheel_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnFinishedFadeEndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::OnFinishedFadeEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnFinishedFadeEndGame");

	ABP_MiniGameBigWheel_C_OnFinishedFadeEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveEndPlay");

	ABP_MiniGameBigWheel_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnInputButtonRight
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::OnInputButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnInputButtonRight");

	ABP_MiniGameBigWheel_C_OnInputButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnInputButtonBottom
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::OnInputButtonBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnInputButtonBottom");

	ABP_MiniGameBigWheel_C_OnInputButtonBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnFinishedFade");

	ABP_MiniGameBigWheel_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.PlayResultProcess
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheel_C::PlayResultProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.PlayResultProcess");

	ABP_MiniGameBigWheel_C_PlayResultProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ExecuteUbergraph_BP_MiniGameBigWheel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheel_C::ExecuteUbergraph_BP_MiniGameBigWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ExecuteUbergraph_BP_MiniGameBigWheel");

	ABP_MiniGameBigWheel_C_ExecuteUbergraph_BP_MiniGameBigWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
