
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TimedBrazier.BP_TimedBrazier_C.IsLightOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           lightOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::IsLightOn(bool* lightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.IsLightOn");

	ABP_TimedBrazier_C_IsLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightOn != nullptr)
		*lightOn = params.lightOn;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::PlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.PlaySound");

	ABP_TimedBrazier_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.UserConstructionScript");

	ABP_TimedBrazier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_TimedBrazier_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__FinishedFunc");

	ABP_TimedBrazier_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_TimedBrazier_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__UpdateFunc");

	ABP_TimedBrazier_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.catch_onTimeJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::catch_onTimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.catch_onTimeJump");

	ABP_TimedBrazier_C_catch_onTimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.delayedEveningStart
// (BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::delayedEveningStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.delayedEveningStart");

	ABP_TimedBrazier_C_delayedEveningStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Start
// (BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::Manual_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Start");

	ABP_TimedBrazier_C_Manual_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Stop
// (BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::Manual_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Stop");

	ABP_TimedBrazier_C_Manual_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Toggle
// (BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Toggle");

	ABP_TimedBrazier_C_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveEndPlay");

	ABP_TimedBrazier_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisible");

	ABP_TimedBrazier_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.DayTimeEventDispatcher_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::DayTimeEventDispatcher_Event_1(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.DayTimeEventDispatcher_Event_1");

	ABP_TimedBrazier_C_DayTimeEventDispatcher_Event_1_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleBasedOnTime
// (BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::SetVisibleBasedOnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleBasedOnTime");

	ABP_TimedBrazier_C_SetVisibleBasedOnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TimedBrazier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveBeginPlay");

	ABP_TimedBrazier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)

void ABP_TimedBrazier_C::UpdateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.UpdateTime");

	ABP_TimedBrazier_C_UpdateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleReinit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::SetVisibleReinit(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleReinit");

	ABP_TimedBrazier_C_SetVisibleReinit_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.ExecuteUbergraph_BP_TimedBrazier
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::ExecuteUbergraph_BP_TimedBrazier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.ExecuteUbergraph_BP_TimedBrazier");

	ABP_TimedBrazier_C_ExecuteUbergraph_BP_TimedBrazier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
