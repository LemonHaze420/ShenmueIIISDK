
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

// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.StartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           aps_exec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_TimeCheckCallEvent_C::StartEvent(bool aps_exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.StartEvent");

	ABP_Chobu_TimeCheckCallEvent_C_StartEvent_Params params;
	params.aps_exec = aps_exec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CanCallEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable_CallEvent               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_TimeCheckCallEvent_C::CanCallEvent(bool* Enable_CallEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CanCallEvent");

	ABP_Chobu_TimeCheckCallEvent_C_CanCallEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable_CallEvent != nullptr)
		*Enable_CallEvent = params.Enable_CallEvent;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CheckGameTimerange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TimeInRange                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_TimeCheckCallEvent_C::CheckGameTimerange(float Min, float Max, bool* TimeInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CheckGameTimerange");

	ABP_Chobu_TimeCheckCallEvent_C_CheckGameTimerange_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeInRange != nullptr)
		*TimeInRange = params.TimeInRange;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EventStartTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EventEndTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Call_EventName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_TimeCheckCallEvent_C::InitSet(float EventStartTime, float EventEndTime, const struct FName& Call_EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.InitSet");

	ABP_Chobu_TimeCheckCallEvent_C_InitSet_Params params;
	params.EventStartTime = EventStartTime;
	params.EventEndTime = EventEndTime;
	params.Call_EventName = Call_EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chobu_TimeCheckCallEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.UserConstructionScript");

	ABP_Chobu_TimeCheckCallEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.RenewalActorCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_TimeCheckCallEvent_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.RenewalActorCount");

	ABP_Chobu_TimeCheckCallEvent_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_TimeCheckCallEvent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.ReceiveTick");

	ABP_Chobu_TimeCheckCallEvent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CounterChangeKill
// (BlueprintCallable, BlueprintEvent)

void ABP_Chobu_TimeCheckCallEvent_C::CounterChangeKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.CounterChangeKill");

	ABP_Chobu_TimeCheckCallEvent_C_CounterChangeKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.ExecuteUbergraph_BP_Chobu_TimeCheckCallEvent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_TimeCheckCallEvent_C::ExecuteUbergraph_BP_Chobu_TimeCheckCallEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_TimeCheckCallEvent.BP_Chobu_TimeCheckCallEvent_C.ExecuteUbergraph_BP_Chobu_TimeCheckCallEvent");

	ABP_Chobu_TimeCheckCallEvent_C_ExecuteUbergraph_BP_Chobu_TimeCheckCallEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
