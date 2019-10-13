
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

// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.isTimerOverStop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Stop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::isTimerOverStop(bool* Stop)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepMin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StepMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::StepRangeSet(int StepMin, int StepMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.StepRangeSet");

	ABP_Hakkason_TimeOverControl_C_StepRangeSet_Params params;
	params.StepMin = StepMin;
	params.StepMax = StepMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckStepOver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           StepOver                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::CheckStepOver(bool* StepOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckStepOver");

	ABP_Hakkason_TimeOverControl_C_CheckStepOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepOver != nullptr)
		*StepOver = params.StepOver;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.CheckGameTimerange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeInRange != nullptr)
		*TimeInRange = params.TimeInRange;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LmitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::InitSet(float LmitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.InitSet");

	ABP_Hakkason_TimeOverControl_C_InitSet_Params params;
	params.LmitTime = LmitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_TimeOverControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.UserConstructionScript");

	ABP_Hakkason_TimeOverControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.TickChangeCheckKill
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_TimeOverControl_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.TickChangeCheckKill");

	ABP_Hakkason_TimeOverControl_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.RenewalActorCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.RenewalActorCount");

	ABP_Hakkason_TimeOverControl_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ReceiveTick");

	ABP_Hakkason_TimeOverControl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C.ExecuteUbergraph_BP_Hakkason_TimeOverControl
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_TimeOverControl_C::ExecuteUbergraph_BP_Hakkason_TimeOverControl(int EntryPoint)
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
