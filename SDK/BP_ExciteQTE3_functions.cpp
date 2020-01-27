
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

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.MaterialInitialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::MaterialInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.MaterialInitialize");

	ABP_ExciteQTE3_C_MaterialInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.InitAsyncLoad");

	ABP_ExciteQTE3_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinalizeSoundPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::FinalizeSoundPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinalizeSoundPlayer");

	ABP_ExciteQTE3_C_FinalizeSoundPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EnableBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::EnableBGM(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.EnableBGM");

	ABP_ExciteQTE3_C_EnableBGM_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.InitializeSoundPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::InitializeSoundPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.InitializeSoundPlayer");

	ABP_ExciteQTE3_C_InitializeSoundPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinalizeGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHighScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HighScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LastSocre                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::FinalizeGame(bool IsHighScore, int HighScore, int LastSocre)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinalizeGame");

	ABP_ExciteQTE3_C_FinalizeGame_Params params;
	params.IsHighScore = IsHighScore;
	params.HighScore = HighScore;
	params.LastSocre = LastSocre;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayMultUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mult                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::PlayMultUp(int Mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayMultUp");

	ABP_ExciteQTE3_C_PlayMultUp_Params params;
	params.Mult = Mult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Load
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Load");

	ABP_ExciteQTE3_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Save
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            hi_Score                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            last_score                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::Save(int hi_Score, int last_score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Save");

	ABP_ExciteQTE3_C_Save_Params params;
	params.hi_Score = hi_Score;
	params.last_score = last_score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ItemGetCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_count1                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::ItemGetCheck(int* item_count1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.ItemGetCheck");

	ABP_ExciteQTE3_C_ItemGetCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (item_count1 != nullptr)
		*item_count1 = params.item_count1;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_ExciteQTE3_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.SpawnInputControlActor");

	ABP_ExciteQTE3_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayLevelUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::PlayLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayLevelUp");

	ABP_ExciteQTE3_C_PlayLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayGameOver
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::PlayGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayGameOver");

	ABP_ExciteQTE3_C_PlayGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayOneUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::PlayOneUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayOneUp");

	ABP_ExciteQTE3_C_PlayOneUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinishGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::FinishGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinishGame");

	ABP_ExciteQTE3_C_FinishGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTEFailure
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::PlayQTEFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTEFailure");

	ABP_ExciteQTE3_C_PlayQTEFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTESuccess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::PlayQTESuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTESuccess");

	ABP_ExciteQTE3_C_PlayQTESuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReplayBeep
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::ReplayBeep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReplayBeep");

	ABP_ExciteQTE3_C_ReplayBeep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTEBeep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::PlayQTEBeep(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTEBeep");

	ABP_ExciteQTE3_C_PlayQTEBeep_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.UserConstructionScript");

	ABP_ExciteQTE3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.򠪦􆖐񍳔_
// (BlueprintEvent)

void ABP_ExciteQTE3_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.򠪦􆖐񍳔_");

	ABP_ExciteQTE3_C_UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Right
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_D_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Right");

	ABP_ExciteQTE3_C_Push_D_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Left
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_D_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Left");

	ABP_ExciteQTE3_C_Push_D_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push A
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push A");

	ABP_ExciteQTE3_C_Push_A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push B
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push B");

	ABP_ExciteQTE3_C_Push_B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push X
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_X()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push X");

	ABP_ExciteQTE3_C_Push_X_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push Y
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_Y()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push Y");

	ABP_ExciteQTE3_C_Push_Y_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.StartMiniGame");

	ABP_ExciteQTE3_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndMiniGame");

	ABP_ExciteQTE3_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.RestartMiniGame");

	ABP_ExciteQTE3_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Down
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_D_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Down");

	ABP_ExciteQTE3_C_Push_D_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Up
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Push_D_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Up");

	ABP_ExciteQTE3_C_Push_D_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.StartGame");

	ABP_ExciteQTE3_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndGame");

	ABP_ExciteQTE3_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.BeginGame
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::BeginGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.BeginGame");

	ABP_ExciteQTE3_C_BeginGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Payment
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Payment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Payment");

	ABP_ExciteQTE3_C_Payment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Play Fail
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Play_Fail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Play Fail");

	ABP_ExciteQTE3_C_Play_Fail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnEndKihudaFlow
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::OnEndKihudaFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnEndKihudaFlow");

	ABP_ExciteQTE3_C_OnEndKihudaFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.GameStartFinished0
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::GameStartFinished0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.GameStartFinished0");

	ABP_ExciteQTE3_C_GameStartFinished0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.UseCoinFinished0
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::UseCoinFinished0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.UseCoinFinished0");

	ABP_ExciteQTE3_C_UseCoinFinished0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.fail finished0
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::fail_finished0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.fail finished0");

	ABP_ExciteQTE3_C_fail_finished0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EventStopStartHighScore
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::EventStopStartHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.EventStopStartHighScore");

	ABP_ExciteQTE3_C_EventStopStartHighScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.WinMiniGame");

	ABP_ExciteQTE3_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.LoseMiniGame");

	ABP_ExciteQTE3_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Event_PlayBGM
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Event_PlayBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Event_PlayBGM");

	ABP_ExciteQTE3_C_Event_PlayBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExciteQTE3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReceiveBeginPlay");

	ABP_ExciteQTE3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReceiveTick");

	ABP_ExciteQTE3_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Zoom
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Zoom");

	ABP_ExciteQTE3_C_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Unzoom
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::Unzoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.Unzoom");

	ABP_ExciteQTE3_C_Unzoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndFlashingHighScore
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::EndFlashingHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndFlashingHighScore");

	ABP_ExciteQTE3_C_EndFlashingHighScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.MapBGMStop
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::MapBGMStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.MapBGMStop");

	ABP_ExciteQTE3_C_MapBGMStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_ExciteQTE3_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_ExciteQTE3_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_ExciteQTE3_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_ExciteQTE3_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ExciteQTE3_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.ResumeMiniGame");

	ABP_ExciteQTE3_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnTalkScriptEvent");

	ABP_ExciteQTE3_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.CancelMiniGame");

	ABP_ExciteQTE3_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnFinishedFadeEndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::OnFinishedFadeEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnFinishedFadeEndGame");

	ABP_ExciteQTE3_C_OnFinishedFadeEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnMaterialLoadEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LoadId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::OnMaterialLoadEnd(const struct FString& LoadId, class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnMaterialLoadEnd");

	ABP_ExciteQTE3_C_OnMaterialLoadEnd_Params params;
	params.LoadId = LoadId;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ExecuteUbergraph_BP_ExciteQTE3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExciteQTE3_C::ExecuteUbergraph_BP_ExciteQTE3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.ExecuteUbergraph_BP_ExciteQTE3");

	ABP_ExciteQTE3_C_ExecuteUbergraph_BP_ExciteQTE3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FailFinished Restart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ExciteQTE3_C::FailFinished_Restart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExciteQTE3.BP_ExciteQTE3_C.FailFinished Restart__DelegateSignature");

	ABP_ExciteQTE3_C_FailFinished_Restart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
