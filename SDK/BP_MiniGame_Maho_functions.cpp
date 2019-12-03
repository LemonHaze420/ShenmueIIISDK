
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

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitAsyncLoad
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Exec, Native, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::UpdateMahoAccumulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateMahoAccumulation");

	ABP_MiniGame_Maho_C_UpdateMahoAccumulation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetDifficulty
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::SetDifficulty(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetDifficulty");

	ABP_MiniGame_Maho_C_SetDifficulty_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetDetectAction
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_Maho_C::STATIC_GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetDetectAction");

	ABP_MiniGame_Maho_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetPlayLabel
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   labelName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::STATIC_GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState> State, struct FName* labelName)
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
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_Maho_C::STATIC_CanGameUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CanGameUpdate");

	ABP_MiniGame_Maho_C_CanGameUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateUILine
// (Net, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::UpdateUILine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateUILine");

	ABP_MiniGame_Maho_C_UpdateUILine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetNPCVisible
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::STATIC_SetNPCVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetNPCVisible");

	ABP_MiniGame_Maho_C_SetNPCVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateAnim
// (NetRequest, Native, Event, NetResponse, Static, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::STATIC_UpdateAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateAnim");

	ABP_MiniGame_Maho_C_UpdateAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UserConstructionScript
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_Maho_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UserConstructionScript");

	ABP_MiniGame_Maho_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__FinishedFunc
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::Timeline_CollisionScaleInitialize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__FinishedFunc");

	ABP_MiniGame_Maho_C_Timeline_CollisionScaleInitialize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__UpdateFunc
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::Timeline_CollisionScaleInitialize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__UpdateFunc");

	ABP_MiniGame_Maho_C_Timeline_CollisionScaleInitialize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__FinishedFunc
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::Timiline_SafeBar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__FinishedFunc");

	ABP_MiniGame_Maho_C_Timiline_SafeBar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__UpdateFunc
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::Timiline_SafeBar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__UpdateFunc");

	ABP_MiniGame_Maho_C_Timiline_SafeBar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartMiniGame");

	ABP_MiniGame_Maho_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.EndMiniGame
// (Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.EndMiniGame");

	ABP_MiniGame_Maho_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CollisionInitialize
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::CollisionInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CollisionInitialize");

	ABP_MiniGame_Maho_C_CollisionInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InputAction_ButtonRight
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::InputAction_ButtonRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InputAction_ButtonRight");

	ABP_MiniGame_Maho_C_InputAction_ButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveBeginPlay
// (Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveBeginPlay");

	ABP_MiniGame_Maho_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveTick
// (Net, Exec, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveTick");

	ABP_MiniGame_Maho_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateElapsedTime
// (Exec, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::UpdateElapsedTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateElapsedTime");

	ABP_MiniGame_Maho_C_UpdateElapsedTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReStartPlaying
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::ReStartPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReStartPlaying");

	ABP_MiniGame_Maho_C_ReStartPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TransEndFallDown
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::TransEndFallDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TransEndFallDown");

	ABP_MiniGame_Maho_C_TransEndFallDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitializeAnimValue
// (Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::InitializeAnimValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitializeAnimValue");

	ABP_MiniGame_Maho_C_InitializeAnimValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartGame
// (Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartGame");

	ABP_MiniGame_Maho_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.AfterFadeInEvent
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::AfterFadeInEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.AfterFadeInEvent");

	ABP_MiniGame_Maho_C_AfterFadeInEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetEnabledSafeLine
// (Net, NetReliable, NetRequest, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::SetEnabledSafeLine(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetEnabledSafeLine");

	ABP_MiniGame_Maho_C_SetEnabledSafeLine_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Event_OnChangeAnimState
// (NetReliable, NetRequest, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_MahoPartnerState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::Event_OnChangeAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Event_OnChangeAnimState");

	ABP_MiniGame_Maho_C_Event_OnChangeAnimState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetKungFuDifficulty
// (NetReliable, NetRequest, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::SetKungFuDifficulty(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetKungFuDifficulty");

	ABP_MiniGame_Maho_C_SetKungFuDifficulty_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TimeUpEvent
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::TimeUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TimeUpEvent");

	ABP_MiniGame_Maho_C_TimeUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.OnTimeUp
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::OnTimeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.OnTimeUp");

	ABP_MiniGame_Maho_C_OnTimeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.PlayScriptMaho
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Maho_C::PlayScriptMaho()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.PlayScriptMaho");

	ABP_MiniGame_Maho_C_PlayScriptMaho_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ExecuteUbergraph_BP_MiniGame_Maho
// (Net, NetRequest, Exec, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Maho_C::STATIC_ExecuteUbergraph_BP_MiniGame_Maho(int EntryPoint)
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
