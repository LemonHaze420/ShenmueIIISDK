
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

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CheckEnabledFlagState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseFlag                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::CheckEnabledFlagState(bool* UseFlag, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CheckEnabledFlagState");

	ABP_MiniGame_KungFuBase_C_CheckEnabledFlagState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseFlag != nullptr)
		*UseFlag = params.UseFlag;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CheckFirstDetection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFirst                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::CheckFirstDetection(bool* IsFirst)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CheckFirstDetection");

	ABP_MiniGame_KungFuBase_C_CheckFirstDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFirst != nullptr)
		*IsFirst = params.IsFirst;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ChangeRelativePosZ
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          LocationZ                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::ChangeRelativePosZ(class USceneComponent* Target, float LocationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ChangeRelativePosZ");

	ABP_MiniGame_KungFuBase_C_ChangeRelativePosZ_Params params;
	params.Target = Target;
	params.LocationZ = LocationZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetHelpPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_MiniGame_KungFuBase_C::GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetHelpPriority");

	ABP_MiniGame_KungFuBase_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_KungFuBase_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetClothMeshComponent");

	ABP_MiniGame_KungFuBase_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InitAsyncLoad");

	ABP_MiniGame_KungFuBase_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UpdatePlayContinueScript
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::UpdatePlayContinueScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UpdatePlayContinueScript");

	ABP_MiniGame_KungFuBase_C_UpdatePlayContinueScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.IsKungFuSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::IsKungFuSuccess(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.IsKungFuSuccess");

	ABP_MiniGame_KungFuBase_C_IsKungFuSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CalcKungFuLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeDifficuty                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ChangeProgress                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::CalcKungFuLevel(bool* ChangeDifficuty, bool* ChangeProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CalcKungFuLevel");

	ABP_MiniGame_KungFuBase_C_CalcKungFuLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeDifficuty != nullptr)
		*ChangeDifficuty = params.ChangeDifficuty;
	if (ChangeProgress != nullptr)
		*ChangeProgress = params.ChangeProgress;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.SetKungFuDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::SetKungFuDifficulty(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.SetKungFuDifficulty");

	ABP_MiniGame_KungFuBase_C_SetKungFuDifficulty_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CheckValueInRance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CheckValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HighValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LowValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InRange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::CheckValueInRance(float CheckValue, float HighValue, float LowValue, bool* InRange, float* NearValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CheckValueInRance");

	ABP_MiniGame_KungFuBase_C_CheckValueInRance_Params params;
	params.CheckValue = CheckValue;
	params.HighValue = HighValue;
	params.LowValue = LowValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRange != nullptr)
		*InRange = params.InRange;
	if (NearValue != nullptr)
		*NearValue = params.NearValue;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_KungFuBase_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetDetectAction");

	ABP_MiniGame_KungFuBase_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetPlayLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   labelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState> State, struct FName* labelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetPlayLabel");

	ABP_MiniGame_KungFuBase_C_GetPlayLabel_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (labelName != nullptr)
		*labelName = params.labelName;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.PlayScriptLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::PlayScriptLabel(const struct FName& Label, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.PlayScriptLabel");

	ABP_MiniGame_KungFuBase_C_PlayScriptLabel_Params params;
	params.Label = Label;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UpdateElapsedTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::UpdateElapsedTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UpdateElapsedTime");

	ABP_MiniGame_KungFuBase_C_UpdateElapsedTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_KungFuBase_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.SpawnInputControlActor");

	ABP_MiniGame_KungFuBase_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UserConstructionScript");

	ABP_MiniGame_KungFuBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_ButtonRight
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::InputAction_ButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_ButtonRight");

	ABP_MiniGame_KungFuBase_C_InputAction_ButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_Top
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::InputAction_Top()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_Top");

	ABP_MiniGame_KungFuBase_C_InputAction_Top_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_Bottom
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::InputAction_Bottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_Bottom");

	ABP_MiniGame_KungFuBase_C_InputAction_Bottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_ButtonBottom
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::InputAction_ButtonBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_ButtonBottom");

	ABP_MiniGame_KungFuBase_C_InputAction_ButtonBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.StartMiniGame");

	ABP_MiniGame_KungFuBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.EndMiniGame");

	ABP_MiniGame_KungFuBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedFade");

	ABP_MiniGame_KungFuBase_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.WinMiniGame");

	ABP_MiniGame_KungFuBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.LoseMiniGame");

	ABP_MiniGame_KungFuBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.DrawMiniGame");

	ABP_MiniGame_KungFuBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.FinalizeTalk");

	ABP_MiniGame_KungFuBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedCoinSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::OnFinishedCoinSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedCoinSequence");

	ABP_MiniGame_KungFuBase_C_OnFinishedCoinSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedStart
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::OnFinishedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedStart");

	ABP_MiniGame_KungFuBase_C_OnFinishedStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.StartGame");

	ABP_MiniGame_KungFuBase_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.AfterFadeInEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::AfterFadeInEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.AfterFadeInEvent");

	ABP_MiniGame_KungFuBase_C_AfterFadeInEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnTimeUp
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::OnTimeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnTimeUp");

	ABP_MiniGame_KungFuBase_C_OnTimeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnSkillCountMax
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::OnSkillCountMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnSkillCountMax");

	ABP_MiniGame_KungFuBase_C_OnSkillCountMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnResultEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::OnResultEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnResultEnd");

	ABP_MiniGame_KungFuBase_C_OnResultEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.TimeUpEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::TimeUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.TimeUpEvent");

	ABP_MiniGame_KungFuBase_C_TimeUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_KungFuBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ReceiveBeginPlay");

	ABP_MiniGame_KungFuBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ReceiveTick");

	ABP_MiniGame_KungFuBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_KungFuBase_C_BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_KungFuBase_C_BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ExecuteUbergraph_BP_MiniGame_KungFuBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KungFuBase_C::ExecuteUbergraph_BP_MiniGame_KungFuBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ExecuteUbergraph_BP_MiniGame_KungFuBase");

	ABP_MiniGame_KungFuBase_C_ExecuteUbergraph_BP_MiniGame_KungFuBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
