
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

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateSuddenDeathMole
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::STATIC_UpdateSuddenDeathMole()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateSuddenDeathMole");

	ABP_WhackMoleMiniGame_C_UpdateSuddenDeathMole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetMoleAppearWaitTime
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_GetMoleAppearWaitTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetMoleAppearWaitTime");

	ABP_WhackMoleMiniGame_C_GetMoleAppearWaitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetDummyHammerRandomRot
// (NetReliable, NetRequest, Static, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_WhackMoleMiniGame_C::STATIC_SetDummyHammerRandomRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetDummyHammerRandomRot");

	ABP_WhackMoleMiniGame_C_SetDummyHammerRandomRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetLastScore
// (Net, Native, Event, NetResponse, NetMulticast, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_WhackMoleMiniGame_C::SetLastScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetLastScore");

	ABP_WhackMoleMiniGame_C_SetLastScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetClothMeshComponent
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_WhackMoleMiniGame_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetClothMeshComponent");

	ABP_WhackMoleMiniGame_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetRenderScore
// (Exec, Static, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UChildActorComponent*    ScoreChildActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_SetRenderScore(class UChildActorComponent* ScoreChildActor, int Score, bool IsStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetRenderScore");

	ABP_WhackMoleMiniGame_C_SetRenderScore_Params params;
	params.ScoreChildActor = ScoreChildActor;
	params.Score = Score;
	params.IsStage = IsStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetRenderScoreEnabled
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_SetRenderScoreEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetRenderScoreEnabled");

	ABP_WhackMoleMiniGame_C_SetRenderScoreEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetMoleTickEnabled
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_SetMoleTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetMoleTickEnabled");

	ABP_WhackMoleMiniGame_C_SetMoleTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StopRoundBGM
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::STATIC_StopRoundBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StopRoundBGM");

	ABP_WhackMoleMiniGame_C_StopRoundBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetHighScore
// (Net, NetRequest, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_WhackMoleMiniGame_C::STATIC_SetHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetHighScore");

	ABP_WhackMoleMiniGame_C_SetHighScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.PlayRoundBGM
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::PlayRoundBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.PlayRoundBGM");

	ABP_WhackMoleMiniGame_C_PlayRoundBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CheckHighScore
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           HighScore                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_CheckHighScore(bool* HighScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CheckHighScore");

	ABP_WhackMoleMiniGame_C_CheckHighScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HighScore != nullptr)
		*HighScore = params.HighScore;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.LoadScore
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::STATIC_LoadScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.LoadScore");

	ABP_WhackMoleMiniGame_C_LoadScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SaveHighScore
// (Net, NetReliable, NetRequest, Event, NetResponse, Public, Private, Delegate, HasDefaults, NetClient, Const)

void ABP_WhackMoleMiniGame_C::SaveHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SaveHighScore");

	ABP_WhackMoleMiniGame_C_SaveHighScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SpawnInputControlActor
// (NetReliable, Event, NetResponse, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_WhackMoleMiniGame_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SpawnInputControlActor");

	ABP_WhackMoleMiniGame_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateInputCommand
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_WhackMoleMiniGame_C::UpdateInputCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateInputCommand");

	ABP_WhackMoleMiniGame_C_UpdateInputCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateInputInterval
// (NetRequest, Event, NetResponse, Public, Private, Delegate, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::UpdateInputInterval(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateInputInterval");

	ABP_WhackMoleMiniGame_C_UpdateInputInterval_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateMoleAppearFromData
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMG_WMData*              MoleData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RoundNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_UpdateMoleAppearFromData(class UMG_WMData* MoleData, int RoundNum, bool* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateMoleAppearFromData");

	ABP_WhackMoleMiniGame_C_UpdateMoleAppearFromData_Params params;
	params.MoleData = MoleData;
	params.RoundNum = RoundNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (End != nullptr)
		*End = params.End;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.IsCameraPosMove
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Move                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_IsCameraPosMove(bool* Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.IsCameraPosMove");

	ABP_WhackMoleMiniGame_C_IsCameraPosMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Move != nullptr)
		*Move = params.Move;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateCamera
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_UpdateCamera(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateCamera");

	ABP_WhackMoleMiniGame_C_UpdateCamera_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InitializeValue
// (Exec, Native, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, Const)

void ABP_WhackMoleMiniGame_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InitializeValue");

	ABP_WhackMoleMiniGame_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CanNextRound
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           Next                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::CanNextRound(bool* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CanNextRound");

	ABP_WhackMoleMiniGame_C_CanNextRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next != nullptr)
		*Next = params.Next;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetMaxTime
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UMG_WMData*              Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RoundNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::GetMaxTime(class UMG_WMData* Data, int RoundNum, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetMaxTime");

	ABP_WhackMoleMiniGame_C_GetMaxTime_Params params;
	params.Data = Data;
	params.RoundNum = RoundNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateWhackAnim
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::UpdateWhackAnim(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateWhackAnim");

	ABP_WhackMoleMiniGame_C_UpdateWhackAnim_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetUnAdjustedPos
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 pos                            (Parm, OutParm, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_GetUnAdjustedPos(const struct FVector& Input, struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetUnAdjustedPos");

	ABP_WhackMoleMiniGame_C_GetUnAdjustedPos_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetAdjustedPos
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 Input                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 pos                            (Parm, OutParm, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_GetAdjustedPos(const struct FVector& Input, struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetAdjustedPos");

	ABP_WhackMoleMiniGame_C_GetAdjustedPos_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.IsAppearMole
// (NetReliable, Public, Private, NetServer, NetClient, Const)
// Parameters:
// TArray<class ABP_MiniGameMole_C*> MoleList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::IsAppearMole(TArray<class ABP_MiniGameMole_C*>* MoleList, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.IsAppearMole");

	ABP_WhackMoleMiniGame_C_IsAppearMole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoleList != nullptr)
		*MoleList = params.MoleList;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CheckMoleWhack
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, Const)

void ABP_WhackMoleMiniGame_C::STATIC_CheckMoleWhack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CheckMoleWhack");

	ABP_WhackMoleMiniGame_C_CheckMoleWhack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InterpPlayerMeshPos
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_InterpPlayerMeshPos(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InterpPlayerMeshPos");

	ABP_WhackMoleMiniGame_C_InterpPlayerMeshPos_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetPlayerMeshPos
// (Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FVector                 NewPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::SetPlayerMeshPos(const struct FVector& NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetPlayerMeshPos");

	ABP_WhackMoleMiniGame_C_SetPlayerMeshPos_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.AddScorePoint
// (NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// int                            AddScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::AddScorePoint(int AddScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.AddScorePoint");

	ABP_WhackMoleMiniGame_C_AddScorePoint_Params params;
	params.AddScore = AddScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndCheck
// (Net, NetReliable, Exec, Static, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// bool                           EndGame                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_EndCheck(bool* EndGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndCheck");

	ABP_WhackMoleMiniGame_C_EndCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndGame != nullptr)
		*EndGame = params.EndGame;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputAction
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_InputAction(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputAction");

	ABP_WhackMoleMiniGame_C_InputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UserConstructionScript
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UserConstructionScript");

	ABP_WhackMoleMiniGame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FieldOfViewTimeLine__FinishedFunc
// (Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::FieldOfViewTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FieldOfViewTimeLine__FinishedFunc");

	ABP_WhackMoleMiniGame_C_FieldOfViewTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FieldOfViewTimeLine__UpdateFunc
// (Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::FieldOfViewTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FieldOfViewTimeLine__UpdateFunc");

	ABP_WhackMoleMiniGame_C_FieldOfViewTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FinishedFunc
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashScore1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FinishedFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashScore1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__UpdateFunc
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashScore1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__UpdateFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashScore1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FlashOff__EventFunc
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashScore1__FlashOff__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FlashOff__EventFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashScore1__FlashOff__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FlashOn__EventFunc
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashScore1__FlashOn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FlashOn__EventFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashScore1__FlashOn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FinishedFunc
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashHighScore__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FinishedFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashHighScore__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__UpdateFunc
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashHighScore__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__UpdateFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashHighScore__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FlashOff__EventFunc
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashHighScore__FlashOff__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FlashOff__EventFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashHighScore__FlashOff__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FlashOn__EventFunc
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::TL_FlashHighScore__FlashOn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FlashOn__EventFunc");

	ABP_WhackMoleMiniGame_C_TL_FlashHighScore__FlashOn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputAButton
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::InputAButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputAButton");

	ABP_WhackMoleMiniGame_C_InputAButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputBButton
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::InputBButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputBButton");

	ABP_WhackMoleMiniGame_C_InputBButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputXButton
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::InputXButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputXButton");

	ABP_WhackMoleMiniGame_C_InputXButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputYButton
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::InputYButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputYButton");

	ABP_WhackMoleMiniGame_C_InputYButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputLeftStick
// (Net, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::InputLeftStick(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputLeftStick");

	ABP_WhackMoleMiniGame_C_InputLeftStick_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpInterpSpeed
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::UpInterpSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpInterpSpeed");

	ABP_WhackMoleMiniGame_C_UpInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.DownInterpSpeed
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::DownInterpSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.DownInterpSpeed");

	ABP_WhackMoleMiniGame_C_DownInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputRightStick
// (NetRequest, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::InputRightStick(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputRightStick");

	ABP_WhackMoleMiniGame_C_InputRightStick_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputLeftUp
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::InputLeftUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputLeftUp");

	ABP_WhackMoleMiniGame_C_InputLeftUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputRightDown
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::InputRightDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputRightDown");

	ABP_WhackMoleMiniGame_C_InputRightDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedFade
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedFade");

	ABP_WhackMoleMiniGame_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndMiniGame
// (NetReliable, NetRequest, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndMiniGame");

	ABP_WhackMoleMiniGame_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StartMiniGame
// (NetReliable, NetRequest, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StartMiniGame");

	ABP_WhackMoleMiniGame_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WinMiniGame
// (Net, NetRequest, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WinMiniGame");

	ABP_WhackMoleMiniGame_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.LoseMiniGame
// (Net, NetReliable, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.LoseMiniGame");

	ABP_WhackMoleMiniGame_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.DrawMiniGame
// (Net, NetReliable, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.DrawMiniGame");

	ABP_WhackMoleMiniGame_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FinalizeTalk
// (NetReliable, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FinalizeTalk");

	ABP_WhackMoleMiniGame_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent
// (Net, NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent");

	ABP_WhackMoleMiniGame_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent_2
// (Net, NetReliable, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_WhackMoleMiniGame_C::CustomEvent_2(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent_2");

	ABP_WhackMoleMiniGame_C_CustomEvent_2_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent_3
// (Net, NetReliable, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::CustomEvent_3(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent_3");

	ABP_WhackMoleMiniGame_C_CustomEvent_3_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.RestartMiniGame
// (NetReliable, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.RestartMiniGame");

	ABP_WhackMoleMiniGame_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedCoinSequence
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::OnFinishedCoinSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedCoinSequence");

	ABP_WhackMoleMiniGame_C_OnFinishedCoinSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedStart
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::OnFinishedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedStart");

	ABP_WhackMoleMiniGame_C_OnFinishedStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.Event_EndMiniGame
// (Net, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.Event_EndMiniGame");

	ABP_WhackMoleMiniGame_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ReceiveBeginPlay
// (Net, NetRequest, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackMoleMiniGame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ReceiveBeginPlay");

	ABP_WhackMoleMiniGame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ReceiveTick
// (NetReliable, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ReceiveTick");

	ABP_WhackMoleMiniGame_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WhackMole
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::WhackMole()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WhackMole");

	ABP_WhackMoleMiniGame_C_WhackMole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FlashScore1
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::FlashScore1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FlashScore1");

	ABP_WhackMoleMiniGame_C_FlashScore1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StartRound
// (Net, NetRequest, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// int                            RoundNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::StartRound(int RoundNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StartRound");

	ABP_WhackMoleMiniGame_C_StartRound_Params params;
	params.RoundNum = RoundNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EnableScore1
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::EnableScore1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EnableScore1");

	ABP_WhackMoleMiniGame_C_EnableScore1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature");

	ABP_WhackMoleMiniGame_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature");

	ABP_WhackMoleMiniGame_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ResumeMiniGame
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_WhackMoleMiniGame_C::STATIC_ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ResumeMiniGame");

	ABP_WhackMoleMiniGame_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnTalkScriptEvent
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::STATIC_OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnTalkScriptEvent");

	ABP_WhackMoleMiniGame_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndGame
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndGame");

	ABP_WhackMoleMiniGame_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnEndKihudaFlow
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::OnEndKihudaFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnEndKihudaFlow");

	ABP_WhackMoleMiniGame_C_OnEndKihudaFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ChangedClothes
// (Net, NetReliable, Native, Event, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ChangedClothes");

	ABP_WhackMoleMiniGame_C_ChangedClothes_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.PlayFlashHighScore
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::PlayFlashHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.PlayFlashHighScore");

	ABP_WhackMoleMiniGame_C_PlayFlashHighScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WhackMoleMiss
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_WhackMoleMiniGame_C::WhackMoleMiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WhackMoleMiss");

	ABP_WhackMoleMiniGame_C_WhackMoleMiss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ExecuteUbergraph_BP_WhackMoleMiniGame
// (Net, NetReliable, Native, Event, NetMulticast, Private, Protected, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackMoleMiniGame_C::ExecuteUbergraph_BP_WhackMoleMiniGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ExecuteUbergraph_BP_WhackMoleMiniGame");

	ABP_WhackMoleMiniGame_C_ExecuteUbergraph_BP_WhackMoleMiniGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
