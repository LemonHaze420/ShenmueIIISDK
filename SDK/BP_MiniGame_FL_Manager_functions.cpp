
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

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CheckWeather
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::CheckWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CheckWeather");

	ABP_MiniGame_FL_Manager_C_CheckWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetNearRespawnTrans
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              trans                          (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::GetNearRespawnTrans(struct FTransform* trans)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetNearRespawnTrans");

	ABP_MiniGame_FL_Manager_C_GetNearRespawnTrans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (trans != nullptr)
		*trans = params.trans;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetUnitPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGame_FL_Manager_C::GetUnitPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetUnitPrice");

	ABP_MiniGame_FL_Manager_C_GetUnitPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetNormaSuccessCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::GetNormaSuccessCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetNormaSuccessCount");

	ABP_MiniGame_FL_Manager_C_GetNormaSuccessCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateNormaSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::UpdateNormaSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateNormaSuccess");

	ABP_MiniGame_FL_Manager_C_UpdateNormaSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateInput
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::UpdateInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateInput");

	ABP_MiniGame_FL_Manager_C_UpdateInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_FL_Manager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetDetectAction");

	ABP_MiniGame_FL_Manager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CheckResult
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::CheckResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CheckResult");

	ABP_MiniGame_FL_Manager_C_CheckResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetEarningsValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::GetEarningsValue(int* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetEarningsValue");

	ABP_MiniGame_FL_Manager_C_GetEarningsValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::UpdateDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateDifficulty");

	ABP_MiniGame_FL_Manager_C_UpdateDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateWidget");

	ABP_MiniGame_FL_Manager_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnActorVisibleController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::SpawnActorVisibleController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnActorVisibleController");

	ABP_MiniGame_FL_Manager_C_SpawnActorVisibleController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetLoadLevelData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_MiniGame_FL_Difficulty YtPn0R                       (Parm, OutParm)

void ABP_MiniGame_FL_Manager_C::GetLoadLevelData(bool* Found, struct FST_MiniGame_FL_Difficulty* YtPn0R)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetLoadLevelData");

	ABP_MiniGame_FL_Manager_C_GetLoadLevelData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (YtPn0R != nullptr)
		*YtPn0R = params.YtPn0R;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetDataTableByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_MiniGame_FL_Difficulty YtPn0R                       (Parm, OutParm)

void ABP_MiniGame_FL_Manager_C::GetDataTableByName(const struct FName& RowName, bool* Found, struct FST_MiniGame_FL_Difficulty* YtPn0R)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetDataTableByName");

	ABP_MiniGame_FL_Manager_C_GetDataTableByName_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (YtPn0R != nullptr)
		*YtPn0R = params.YtPn0R;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_FL_Manager_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnInputControlActor");

	ABP_MiniGame_FL_Manager_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::SpawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnPlayer");

	ABP_MiniGame_FL_Manager_C_SpawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UserConstructionScript");

	ABP_MiniGame_FL_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::InputTrigger(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputTrigger");

	ABP_MiniGame_FL_Manager_C_InputTrigger_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputLeftStickHorizontal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::InputLeftStickHorizontal(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputLeftStickHorizontal");

	ABP_MiniGame_FL_Manager_C_InputLeftStickHorizontal_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonRight
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::InputButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonRight");

	ABP_MiniGame_FL_Manager_C_InputButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonBottom
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::InputButtonBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonBottom");

	ABP_MiniGame_FL_Manager_C_InputButtonBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::InputRight(bool Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputRight");

	ABP_MiniGame_FL_Manager_C_InputRight_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::InputLeft(bool Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputLeft");

	ABP_MiniGame_FL_Manager_C_InputLeft_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::InputButtonLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonLeft");

	ABP_MiniGame_FL_Manager_C_InputButtonLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_OpenHelp
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::Event_OpenHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_OpenHelp");

	ABP_MiniGame_FL_Manager_C_Event_OpenHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.StartMiniGame");

	ABP_MiniGame_FL_Manager_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndMiniGame");

	ABP_MiniGame_FL_Manager_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnFinishedFade");

	ABP_MiniGame_FL_Manager_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.StartGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::StartGame(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.StartGame");

	ABP_MiniGame_FL_Manager_C_StartGame_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.WinMiniGame");

	ABP_MiniGame_FL_Manager_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.LoseMiniGame");

	ABP_MiniGame_FL_Manager_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.DrawMiniGame");

	ABP_MiniGame_FL_Manager_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.FinalizeTalk");

	ABP_MiniGame_FL_Manager_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnFinishedLevelUnloadedEvent_EndGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::OnFinishedLevelUnloadedEvent_EndGame(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnFinishedLevelUnloadedEvent_EndGame");

	ABP_MiniGame_FL_Manager_C_OnFinishedLevelUnloadedEvent_EndGame_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::Event_StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_StartGame");

	ABP_MiniGame_FL_Manager_C_Event_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndResult
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::OnEndResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndResult");

	ABP_MiniGame_FL_Manager_C_OnEndResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::OnEndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndCutscene");

	ABP_MiniGame_FL_Manager_C_OnEndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndFadeInForCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::OnEndFadeInForCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndFadeInForCutscene");

	ABP_MiniGame_FL_Manager_C_OnEndFadeInForCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UnloadLevelFinish_OnStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::UnloadLevelFinish_OnStart(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UnloadLevelFinish_OnStart");

	ABP_MiniGame_FL_Manager_C_UnloadLevelFinish_OnStart_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.FinishLoadLevelOnEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::FinishLoadLevelOnEnd(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.FinishLoadLevelOnEnd");

	ABP_MiniGame_FL_Manager_C_FinishLoadLevelOnEnd_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_HelpEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::Event_HelpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_HelpEnd");

	ABP_MiniGame_FL_Manager_C_Event_HelpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ReceiveBeginPlay");

	ABP_MiniGame_FL_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ReceiveTick");

	ABP_MiniGame_FL_Manager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ResetEndGameDoOnce
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::ResetEndGameDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ResetEndGameDoOnce");

	ABP_MiniGame_FL_Manager_C_ResetEndGameDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::RespawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnPlayer");

	ABP_MiniGame_FL_Manager_C_RespawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnFadeOutEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::RespawnFadeOutEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnFadeOutEnd");

	ABP_MiniGame_FL_Manager_C_RespawnFadeOutEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnFadeInEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::RespawnFadeInEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnFadeInEnd");

	ABP_MiniGame_FL_Manager_C_RespawnFadeInEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndGame");

	ABP_MiniGame_FL_Manager_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndGameAllContainerCarry
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::EndGameAllContainerCarry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndGameAllContainerCarry");

	ABP_MiniGame_FL_Manager_C_EndGameAllContainerCarry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Manager_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CancelMiniGame");

	ABP_MiniGame_FL_Manager_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ExecuteUbergraph_BP_MiniGame_FL_Manager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Manager_C::ExecuteUbergraph_BP_MiniGame_FL_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ExecuteUbergraph_BP_MiniGame_FL_Manager");

	ABP_MiniGame_FL_Manager_C_ExecuteUbergraph_BP_MiniGame_FL_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
