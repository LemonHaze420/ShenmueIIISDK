
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

// Function BPC_BSComponent.BPC_BSComponent_C.IntToGameTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GameTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::IntToGameTime(int Value, float* GameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.IntToGameTime");

	UBPC_BSComponent_C_IntToGameTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameTime != nullptr)
		*GameTime = params.GameTime;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ParseCurrentStepBsSchedule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_BSComponent_C::ParseCurrentStepBsSchedule()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ParseCurrentStepBsSchedule");

	UBPC_BSComponent_C_ParseCurrentStepBsSchedule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ResetEventCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newEventCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::ResetEventCount(int newEventCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ResetEventCount");

	UBPC_BSComponent_C_ResetEventCount_Params params;
	params.newEventCount = newEventCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.EventOnEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::EventOnEnd(bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.EventOnEnd");

	UBPC_BSComponent_C_EventOnEnd_Params params;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.StringToGameTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Time_String_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsNumeric                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GameTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::StringToGameTime(const struct FString& Time_String_, bool* IsNumeric, float* GameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.StringToGameTime");

	UBPC_BSComponent_C_StringToGameTime_Params params;
	params.Time_String_ = Time_String_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNumeric != nullptr)
		*IsNumeric = params.IsNumeric;
	if (GameTime != nullptr)
		*GameTime = params.GameTime;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_BSComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ReceiveBeginPlay");

	UBPC_BSComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnStartBS
// (BlueprintCallable, BlueprintEvent)

void UBPC_BSComponent_C::OnStartBS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnStartBS");

	UBPC_BSComponent_C_OnStartBS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.InitializeBSTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkDataListBase*     TalkDataList                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::InitializeBSTalk(class US3TalkDataListBase* TalkDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.InitializeBSTalk");

	UBPC_BSComponent_C_InitializeBSTalk_Params params;
	params.TalkDataList = TalkDataList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnStepChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::OnStepChanged(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnStepChanged");

	UBPC_BSComponent_C_OnStepChanged_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnBsEnableScheduleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          receiveTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::OnBsEnableScheduleEvent(float receiveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnBsEnableScheduleEvent");

	UBPC_BSComponent_C_OnBsEnableScheduleEvent_Params params;
	params.receiveTime = receiveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnBsCountScheduleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          receiveTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::OnBsCountScheduleEvent(float receiveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnBsCountScheduleEvent");

	UBPC_BSComponent_C_OnBsCountScheduleEvent_Params params;
	params.receiveTime = receiveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnReceiveTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::OnReceiveTimeEvent(int EventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnReceiveTimeEvent");

	UBPC_BSComponent_C_OnReceiveTimeEvent_Params params;
	params.EventIndex = EventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ReceiveEndPlay");

	UBPC_BSComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ExecuteUbergraph_BPC_BSComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::ExecuteUbergraph_BPC_BSComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ExecuteUbergraph_BPC_BSComponent");

	UBPC_BSComponent_C_ExecuteUbergraph_BPC_BSComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnEndTalkEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::OnEndTalkEvent__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnEndTalkEvent__DelegateSignature");

	UBPC_BSComponent_C_OnEndTalkEvent__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
