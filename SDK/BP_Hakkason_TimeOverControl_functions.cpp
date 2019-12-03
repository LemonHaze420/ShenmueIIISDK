
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

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.isTimerOverStop
// (Net, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Stop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::STATIC_isTimerOverStop(bool* Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.isTimerOverStop");

	ABP_Hakkason_TimeOverControl_C_isTimerOverStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stop != nullptr)
		*Stop = params.Stop;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.StepRangeSet
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            StepMin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StepMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::STATIC_StepRangeSet(int StepMin, int StepMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.StepRangeSet");

	ABP_Hakkason_TimeOverControl_C_StepRangeSet_Params params;
	params.StepMin = StepMin;
	params.StepMax = StepMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckStepOver
// (Net, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           StepOver                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::STATIC_CheckStepOver(bool* StepOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckStepOver");

	ABP_Hakkason_TimeOverControl_C_CheckStepOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepOver != nullptr)
		*StepOver = params.StepOver;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckGameTimerange
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TimeInRange                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::CheckGameTimerange(float Min, float Max, bool* TimeInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckGameTimerange");

	ABP_Hakkason_TimeOverControl_C_CheckGameTimerange_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeInRange != nullptr)
		*TimeInRange = params.TimeInRange;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.InitSet
// (Net, Event, Static, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// float                          LmitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::STATIC_InitSet(float LmitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.InitSet");

	ABP_Hakkason_TimeOverControl_C_InitSet_Params params;
	params.LmitTime = LmitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.UserConstructionScript
// (Net, Event, NetResponse, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Hakkason_TimeOverControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.UserConstructionScript");

	ABP_Hakkason_TimeOverControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.TickChangeCheckKill
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_TimeOverControl_C::STATIC_TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.TickChangeCheckKill");

	ABP_Hakkason_TimeOverControl_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.RenewalActorCount
// (Net, NetReliable, Native, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::STATIC_RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.RenewalActorCount");

	ABP_Hakkason_TimeOverControl_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ReceiveTick
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ReceiveTick");

	ABP_Hakkason_TimeOverControl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ExecuteUbergraph_BP_Hakkason_TimeOverControl
// (Static, NetMulticast, Public, Delegate, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::STATIC_ExecuteUbergraph_BP_Hakkason_TimeOverControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ExecuteUbergraph_BP_Hakkason_TimeOverControl");

	ABP_Hakkason_TimeOverControl_C_ExecuteUbergraph_BP_Hakkason_TimeOverControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
