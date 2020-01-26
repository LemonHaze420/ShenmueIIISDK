
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

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitAsyncLoad");

	ABP_MiniGame_Maho_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateMahoAccumulation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::UpdateMahoAccumulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateMahoAccumulation");

	ABP_MiniGame_Maho_C_UpdateMahoAccumulation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetDifficulty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::SetDifficulty(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetDifficulty");

	ABP_MiniGame_Maho_C_SetDifficulty_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_Maho_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetDetectAction");

	ABP_MiniGame_Maho_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetPlayLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   labelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState> State, struct FName* labelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetPlayLabel");

	ABP_MiniGame_Maho_C_GetPlayLabel_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (labelName != nullptr)
		*labelName = params.labelName;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CanGameUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_Maho_C::CanGameUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CanGameUpdate");

	ABP_MiniGame_Maho_C_CanGameUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateUILine
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::UpdateUILine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateUILine");

	ABP_MiniGame_Maho_C_UpdateUILine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetNPCVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::SetNPCVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetNPCVisible");

	ABP_MiniGame_Maho_C_SetNPCVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateAnim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::UpdateAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateAnim");

	ABP_MiniGame_Maho_C_UpdateAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UserConstructionScript");

	ABP_MiniGame_Maho_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Maho_C::Timeline_CollisionScaleInitialize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__FinishedFunc");

	ABP_MiniGame_Maho_C_Timeline_CollisionScaleInitialize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Maho_C::Timeline_CollisionScaleInitialize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__UpdateFunc");

	ABP_MiniGame_Maho_C_Timeline_CollisionScaleInitialize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Maho_C::Timiline_SafeBar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__FinishedFunc");

	ABP_MiniGame_Maho_C_Timiline_SafeBar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Maho_C::Timiline_SafeBar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__UpdateFunc");

	ABP_MiniGame_Maho_C_Timiline_SafeBar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartMiniGame");

	ABP_MiniGame_Maho_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.EndMiniGame");

	ABP_MiniGame_Maho_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CollisionInitialize
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::CollisionInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CollisionInitialize");

	ABP_MiniGame_Maho_C_CollisionInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InputAction_ButtonRight
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::InputAction_ButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InputAction_ButtonRight");

	ABP_MiniGame_Maho_C_InputAction_ButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_Maho_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveBeginPlay");

	ABP_MiniGame_Maho_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveTick");

	ABP_MiniGame_Maho_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateElapsedTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::UpdateElapsedTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateElapsedTime");

	ABP_MiniGame_Maho_C_UpdateElapsedTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReStartPlaying
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::ReStartPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReStartPlaying");

	ABP_MiniGame_Maho_C_ReStartPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TransEndFallDown
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::TransEndFallDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TransEndFallDown");

	ABP_MiniGame_Maho_C_TransEndFallDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitializeAnimValue
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::InitializeAnimValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitializeAnimValue");

	ABP_MiniGame_Maho_C_InitializeAnimValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartGame");

	ABP_MiniGame_Maho_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.AfterFadeInEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::AfterFadeInEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.AfterFadeInEvent");

	ABP_MiniGame_Maho_C_AfterFadeInEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetEnabledSafeLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::SetEnabledSafeLine(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetEnabledSafeLine");

	ABP_MiniGame_Maho_C_SetEnabledSafeLine_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Event_OnChangeAnimState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::Event_OnChangeAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Event_OnChangeAnimState");

	ABP_MiniGame_Maho_C_Event_OnChangeAnimState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetKungFuDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::SetKungFuDifficulty(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetKungFuDifficulty");

	ABP_MiniGame_Maho_C_SetKungFuDifficulty_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TimeUpEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::TimeUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TimeUpEvent");

	ABP_MiniGame_Maho_C_TimeUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.OnTimeUp
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::OnTimeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.OnTimeUp");

	ABP_MiniGame_Maho_C_OnTimeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.PlayScriptMaho
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::PlayScriptMaho()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.PlayScriptMaho");

	ABP_MiniGame_Maho_C_PlayScriptMaho_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReachedMaxKungFuLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Maho_C::ReachedMaxKungFuLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReachedMaxKungFuLevel");

	ABP_MiniGame_Maho_C_ReachedMaxKungFuLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ExecuteUbergraph_BP_MiniGame_Maho
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::ExecuteUbergraph_BP_MiniGame_Maho(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ExecuteUbergraph_BP_MiniGame_Maho");

	ABP_MiniGame_Maho_C_ExecuteUbergraph_BP_MiniGame_Maho_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
