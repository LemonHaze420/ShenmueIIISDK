
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

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.End
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameInputWaitTimer_C::STATIC_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.End");

	UBPC_MiniGameInputWaitTimer_C_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.Start
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameInputWaitTimer_C::STATIC_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.Start");

	UBPC_MiniGameInputWaitTimer_C_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.CheckLimitTime
// (Net, NetReliable, NetRequest, NetMulticast, Public, Private, Delegate, HasOutParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_MiniGameInputWaitTimer_C::CheckLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.CheckLimitTime");

	UBPC_MiniGameInputWaitTimer_C_CheckLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.SetLimitTime
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// float                          limit_time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameInputWaitTimer_C::STATIC_SetLimitTime(float limit_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.SetLimitTime");

	UBPC_MiniGameInputWaitTimer_C_SetLimitTime_Params params;
	params.limit_time = limit_time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ReceiveBeginPlay
// (Net, Event, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void UBPC_MiniGameInputWaitTimer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ReceiveBeginPlay");

	UBPC_MiniGameInputWaitTimer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ReceiveTick
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameInputWaitTimer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ReceiveTick");

	UBPC_MiniGameInputWaitTimer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ExecuteUbergraph_BPC_MiniGameInputWaitTimer
// (Net, NetReliable, NetRequest, NetResponse, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameInputWaitTimer_C::ExecuteUbergraph_BPC_MiniGameInputWaitTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ExecuteUbergraph_BPC_MiniGameInputWaitTimer");

	UBPC_MiniGameInputWaitTimer_C_ExecuteUbergraph_BPC_MiniGameInputWaitTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
