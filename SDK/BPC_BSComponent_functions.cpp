
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

// Function BPC_BSComponent.BPC_BSComponent_C.IntToGameTime
// (Event, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (NetReliable, MulticastDelegate, NetServer)

void UBPC_BSComponent_C::ParseCurrentStepBsSchedule()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ParseCurrentStepBsSchedule");

	UBPC_BSComponent_C_ParseCurrentStepBsSchedule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ResetEventCount
// (NetResponse, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            newEventCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_ResetEventCount(int newEventCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ResetEventCount");

	UBPC_BSComponent_C_ResetEventCount_Params params;
	params.newEventCount = newEventCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.EventOnEnd
// (NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_EventOnEnd(bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.EventOnEnd");

	UBPC_BSComponent_C_EventOnEnd_Params params;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.StringToGameTime
// (NetReliable, Exec, Native, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Time_String_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsNumeric                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GameTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_StringToGameTime(const struct FString& Time_String_, bool* IsNumeric, float* GameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.StringToGameTime");

	UBPC_BSComponent_C_StringToGameTime_Params params;
	params.Time_String_ = Time_String_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNumeric != nullptr)
		*IsNumeric = params.IsNumeric;
	if (GameTime != nullptr)
		*GameTime = params.GameTime;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Event, NetMulticast, NetServer)

void UBPC_BSComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ReceiveBeginPlay");

	UBPC_BSComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnStartBS
// (NetReliable, Exec, Native, Event, NetMulticast, NetServer)

void UBPC_BSComponent_C::OnStartBS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnStartBS");

	UBPC_BSComponent_C_OnStartBS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.InitializeBSTalk
// (Net, NetRequest, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class US3TalkDataListBase*     TalkDataList                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_InitializeBSTalk(class US3TalkDataListBase* TalkDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.InitializeBSTalk");

	UBPC_BSComponent_C_InitializeBSTalk_Params params;
	params.TalkDataList = TalkDataList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnStepChanged
// (NetRequest, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_OnStepChanged(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnStepChanged");

	UBPC_BSComponent_C_OnStepChanged_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnBsEnableScheduleEvent
// (Net, NetReliable, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          receiveTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_OnBsEnableScheduleEvent(float receiveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnBsEnableScheduleEvent");

	UBPC_BSComponent_C_OnBsEnableScheduleEvent_Params params;
	params.receiveTime = receiveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnBsCountScheduleEvent
// (NetReliable, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          receiveTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_OnBsCountScheduleEvent(float receiveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnBsCountScheduleEvent");

	UBPC_BSComponent_C_OnBsCountScheduleEvent_Params params;
	params.receiveTime = receiveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnReceiveTimeEvent
// (NetReliable, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EventIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_OnReceiveTimeEvent(int EventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.OnReceiveTimeEvent");

	UBPC_BSComponent_C_OnReceiveTimeEvent_Params params;
	params.EventIndex = EventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ReceiveEndPlay
// (Net, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ReceiveEndPlay");

	UBPC_BSComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.ExecuteUbergraph_BPC_BSComponent
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BSComponent_C::STATIC_ExecuteUbergraph_BPC_BSComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BSComponent.BPC_BSComponent_C.ExecuteUbergraph_BPC_BSComponent");

	UBPC_BSComponent_C_ExecuteUbergraph_BPC_BSComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BSComponent.BPC_BSComponent_C.OnEndTalkEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
