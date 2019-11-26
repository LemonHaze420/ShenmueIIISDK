
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

// Function BP_HighwayStar.BP_HighwayStar_C.LoadScore
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::LoadScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.LoadScore");

	ABP_HighwayStar_C_LoadScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.SaveScore
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::SaveScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.SaveScore");

	ABP_HighwayStar_C_SaveScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.UpdateQte
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::UpdateQte()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.UpdateQte");

	ABP_HighwayStar_C_UpdateQte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.MakeQteTriangle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::MakeQteTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.MakeQteTriangle");

	ABP_HighwayStar_C_MakeQteTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.RemoveQte
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::RemoveQte()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.RemoveQte");

	ABP_HighwayStar_C_RemoveQte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.InitAsyncLoad");

	ABP_HighwayStar_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_HighwayStar.BP_HighwayStar_C.DeleteScoreLightActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::DeleteScoreLightActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.DeleteScoreLightActor");

	ABP_HighwayStar_C_DeleteScoreLightActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.CreateScoreLightActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::CreateScoreLightActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.CreateScoreLightActor");

	ABP_HighwayStar_C_CreateScoreLightActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.SettingSEPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDestroy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::SettingSEPlayer(bool IsDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.SettingSEPlayer");

	ABP_HighwayStar_C_SettingSEPlayer_Params params;
	params.IsDestroy = IsDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.UpdatePatLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::UpdatePatLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.UpdatePatLight");

	ABP_HighwayStar_C_UpdatePatLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.StopPatLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::StopPatLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.StopPatLight");

	ABP_HighwayStar_C_StopPatLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.StartPatLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::StartPatLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.StartPatLight");

	ABP_HighwayStar_C_StartPatLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.DebugSetting
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::DebugSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.DebugSetting");

	ABP_HighwayStar_C_DebugSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.SetCarOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::SetCarOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.SetCarOffset");

	ABP_HighwayStar_C_SetCarOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.GetNowArrowRot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          RetRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::GetNowArrowRot(float* RetRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.GetNowArrowRot");

	ABP_HighwayStar_C_GetNowArrowRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetRot != nullptr)
		*RetRot = params.RetRot;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ScoreLightAllOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::ScoreLightAllOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ScoreLightAllOff");

	ABP_HighwayStar_C_ScoreLightAllOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.GetScoreLIghtBlinkIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ArgMy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RetIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::GetScoreLIghtBlinkIndex(bool ArgMy, int* RetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.GetScoreLIghtBlinkIndex");

	ABP_HighwayStar_C_GetScoreLIghtBlinkIndex_Params params;
	params.ArgMy = ArgMy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetIndex != nullptr)
		*RetIndex = params.RetIndex;
}


// Function BP_HighwayStar.BP_HighwayStar_C.UpdateDispScoreLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ArgOn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::UpdateDispScoreLight(bool ArgOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.UpdateDispScoreLight");

	ABP_HighwayStar_C_UpdateDispScoreLight_Params params;
	params.ArgOn = ArgOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ScoreCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::ScoreCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ScoreCheck");

	ABP_HighwayStar_C_ScoreCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ParamSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::ParamSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ParamSetting");

	ABP_HighwayStar_C_ParamSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ItemGetCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_count1                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::ItemGetCheck(int* item_count1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ItemGetCheck");

	ABP_HighwayStar_C_ItemGetCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (item_count1 != nullptr)
		*item_count1 = params.item_count1;
}


// Function BP_HighwayStar.BP_HighwayStar_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_HighwayStar_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.SpawnInputControlActor");

	ABP_HighwayStar_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HighwayStar.BP_HighwayStar_C.CreateRootPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::CreateRootPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.CreateRootPoint");

	ABP_HighwayStar_C_CreateRootPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.AddScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::AddScore(bool InputPin, int AddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.AddScore");

	ABP_HighwayStar_C_AddScore_Params params;
	params.InputPin = InputPin;
	params.AddNum = AddNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.updateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::updateLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.updateLocation");

	ABP_HighwayStar_C_updateLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.setCarRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::setCarRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.setCarRotation");

	ABP_HighwayStar_C_setCarRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.UserConstructionScript");

	ABP_HighwayStar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.򠪦􆖐񍳔_
// (BlueprintEvent)

void ABP_HighwayStar_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.򠪦􆖐񍳔_");

	ABP_HighwayStar_C_UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.LightFlickerTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_HighwayStar_C::LightFlickerTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.LightFlickerTimeline__FinishedFunc");

	ABP_HighwayStar_C_LightFlickerTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.LightFlickerTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_HighwayStar_C::LightFlickerTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.LightFlickerTimeline__UpdateFunc");

	ABP_HighwayStar_C_LightFlickerTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__FinishedFunc
// (BlueprintEvent)

void ABP_HighwayStar_C::Lamp_Flashing__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__FinishedFunc");

	ABP_HighwayStar_C_Lamp_Flashing__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__UpdateFunc
// (BlueprintEvent)

void ABP_HighwayStar_C::Lamp_Flashing__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__UpdateFunc");

	ABP_HighwayStar_C_Lamp_Flashing__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__on__EventFunc
// (BlueprintEvent)

void ABP_HighwayStar_C::Lamp_Flashing__on__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__on__EventFunc");

	ABP_HighwayStar_C_Lamp_Flashing__on__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__off__EventFunc
// (BlueprintEvent)

void ABP_HighwayStar_C::Lamp_Flashing__off__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__off__EventFunc");

	ABP_HighwayStar_C_Lamp_Flashing__off__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Initialize_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Initialize_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Initialize_Event");

	ABP_HighwayStar_C_Initialize_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Finalize_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Finalize_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Finalize_Event");

	ABP_HighwayStar_C_Finalize_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.StartMiniGame");

	ABP_HighwayStar_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.EndMiniGame");

	ABP_HighwayStar_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.RestartMiniGame");

	ABP_HighwayStar_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BGMPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::BGMPlay(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BGMPlay");

	ABP_HighwayStar_C_BGMPlay_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BGMStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::BGMStop(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BGMStop");

	ABP_HighwayStar_C_BGMStop_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Reset Start
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Reset_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Reset Start");

	ABP_HighwayStar_C_Reset_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Reset Info Save
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Reset_Info_Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Reset Info Save");

	ABP_HighwayStar_C_Reset_Info_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.SE_LampPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::SE_LampPlay(bool IsEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.SE_LampPlay");

	ABP_HighwayStar_C_SE_LampPlay_Params params;
	params.IsEnemy = IsEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.WinMiniGame");

	ABP_HighwayStar_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.LoseMiniGame");

	ABP_HighwayStar_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HighwayStar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ReceiveBeginPlay");

	ABP_HighwayStar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ReceiveTick");

	ABP_HighwayStar_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Zoom
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Zoom");

	ABP_HighwayStar_C_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Unzoom
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Unzoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Unzoom");

	ABP_HighwayStar_C_Unzoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HighwayStar_C::BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HighwayStar_C::BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_131
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_131(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_131");

	ABP_HighwayStar_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_131_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Right Stick X
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::Right_Stick_X(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Right Stick X");

	ABP_HighwayStar_C_Right_Stick_X_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.LightFlicker
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::LightFlicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.LightFlicker");

	ABP_HighwayStar_C_LightFlicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.LightStop
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::LightStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.LightStop");

	ABP_HighwayStar_C_LightStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.PushUp
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::PushUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.PushUp");

	ABP_HighwayStar_C_PushUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.PushDown
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::PushDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.PushDown");

	ABP_HighwayStar_C_PushDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HighwayStar_C::BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__life_check_00_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HighwayStar_C::BndEvt__life_check_00_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__life_check_00_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__life_check_00_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.RestartTick
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::RestartTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.RestartTick");

	ABP_HighwayStar_C_RestartTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.LapsCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::LapsCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.LapsCheck");

	ABP_HighwayStar_C_LapsCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.RotateArrow
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::RotateArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.RotateArrow");

	ABP_HighwayStar_C_RotateArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Play Use Coin
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Play_Use_Coin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Play Use Coin");

	ABP_HighwayStar_C_Play_Use_Coin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_HighwayStar_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_HighwayStar_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_HighwayStar_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_HighwayStar_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ResumeMiniGame");

	ABP_HighwayStar_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.OnTalkScriptEvent");

	ABP_HighwayStar_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.OnEndKihudaFlow
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::OnEndKihudaFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.OnEndKihudaFlow");

	ABP_HighwayStar_C_OnEndKihudaFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.UsedCoin
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::UsedCoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.UsedCoin");

	ABP_HighwayStar_C_UsedCoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.GameStartEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::GameStartEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.GameStartEnd");

	ABP_HighwayStar_C_GameStartEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.CancelMiniGame");

	ABP_HighwayStar_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.OnFinishedFadeEndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::OnFinishedFadeEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.OnFinishedFadeEndGame");

	ABP_HighwayStar_C_OnFinishedFadeEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ReceiveEndPlay");

	ABP_HighwayStar_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.QteWidgetUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::QteWidgetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.QteWidgetUpdate");

	ABP_HighwayStar_C_QteWidgetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.OnEndGameOver
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::OnEndGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.OnEndGameOver");

	ABP_HighwayStar_C_OnEndGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.OnEndPerfect
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::OnEndPerfect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.OnEndPerfect");

	ABP_HighwayStar_C_OnEndPerfect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.PlayForceFeedBack
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::PlayForceFeedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.PlayForceFeedBack");

	ABP_HighwayStar_C_PlayForceFeedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.StartGame");

	ABP_HighwayStar_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.Event_EndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_HighwayStar_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.Event_EndMiniGame");

	ABP_HighwayStar_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighwayStar.BP_HighwayStar_C.ExecuteUbergraph_BP_HighwayStar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HighwayStar_C::ExecuteUbergraph_BP_HighwayStar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighwayStar.BP_HighwayStar_C.ExecuteUbergraph_BP_HighwayStar");

	ABP_HighwayStar_C_ExecuteUbergraph_BP_HighwayStar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
