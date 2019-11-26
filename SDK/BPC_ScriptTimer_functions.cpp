
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

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.ConvertTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimer_C::ConvertTime(float Minutes, int* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.ConvertTime");

	UBPC_ScriptTimer_C_ConvertTime_Params params;
	params.Minutes = Minutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.UpdateGlobalFlag
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_ScriptTimer_C::UpdateGlobalFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.UpdateGlobalFlag");

	UBPC_ScriptTimer_C_UpdateGlobalFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_ScriptTimer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.ReceiveBeginPlay");

	UBPC_ScriptTimer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.BindGameTimeManager
// (BlueprintCallable, BlueprintEvent)

void UBPC_ScriptTimer_C::BindGameTimeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.BindGameTimeManager");

	UBPC_ScriptTimer_C_BindGameTimeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.UnbindGameTimeManager
// (BlueprintCallable, BlueprintEvent)

void UBPC_ScriptTimer_C::UnbindGameTimeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.UnbindGameTimeManager");

	UBPC_ScriptTimer_C_UnbindGameTimeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.OnUpdateNextDay
// (BlueprintCallable, BlueprintEvent)

void UBPC_ScriptTimer_C::OnUpdateNextDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.OnUpdateNextDay");

	UBPC_ScriptTimer_C_OnUpdateNextDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.OnUpdateGameTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          UpdateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimer_C::OnUpdateGameTime(float UpdateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.OnUpdateGameTime");

	UBPC_ScriptTimer_C_OnUpdateGameTime_Params params;
	params.UpdateTime = UpdateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.StopTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GlobalFlagIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimer_C::StopTimer(int GlobalFlagIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.StopTimer");

	UBPC_ScriptTimer_C_StopTimer_Params params;
	params.GlobalFlagIndex = GlobalFlagIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GlobalFlagIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimer_C::StartTimer(int GlobalFlagIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.StartTimer");

	UBPC_ScriptTimer_C_StartTimer_Params params;
	params.GlobalFlagIndex = GlobalFlagIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimer.BPC_ScriptTimer_C.ExecuteUbergraph_BPC_ScriptTimer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimer_C::ExecuteUbergraph_BPC_ScriptTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimer.BPC_ScriptTimer_C.ExecuteUbergraph_BPC_ScriptTimer");

	UBPC_ScriptTimer_C_ExecuteUbergraph_BPC_ScriptTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
