
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

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ReceiveBeginPlay
// (Net, Native, NetMulticast, NetServer)

void UBPC_ScriptTimeOverChecker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ReceiveBeginPlay");

	UBPC_ScriptTimeOverChecker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.StopTimeOverCheck
// (NetReliable, Native, NetMulticast, NetServer)

void UBPC_ScriptTimeOverChecker_C::StopTimeOverCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.StopTimeOverCheck");

	UBPC_ScriptTimeOverChecker_C_StopTimeOverCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.StartTimeOverCheck
// (NetReliable, Native, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          GameStopTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimeOverChecker_C::StartTimeOverCheck(float GameStopTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.StartTimeOverCheck");

	UBPC_ScriptTimeOverChecker_C_StartTimeOverCheck_Params params;
	params.GameStopTime = GameStopTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ReceiveTick
// (NetReliable, Native, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimeOverChecker_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ReceiveTick");

	UBPC_ScriptTimeOverChecker_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.OnEndTalk
// (Native, NetMulticast, NetServer)

void UBPC_ScriptTimeOverChecker_C::OnEndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.OnEndTalk");

	UBPC_ScriptTimeOverChecker_C_OnEndTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ExecuteUbergraph_BPC_ScriptTimeOverChecker
// (NetReliable, Exec, Event, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimeOverChecker_C::STATIC_ExecuteUbergraph_BPC_ScriptTimeOverChecker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ExecuteUbergraph_BPC_ScriptTimeOverChecker");

	UBPC_ScriptTimeOverChecker_C_ExecuteUbergraph_BPC_ScriptTimeOverChecker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.OnGameTimeOverDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, Public, Protected, NetServer, NetClient, DLLImport)
// Parameters:
// float                          GameStopTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ScriptTimeOverChecker_C::STATIC_OnGameTimeOverDispatcher__DelegateSignature(float GameStopTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.OnGameTimeOverDispatcher__DelegateSignature");

	UBPC_ScriptTimeOverChecker_C_OnGameTimeOverDispatcher__DelegateSignature_Params params;
	params.GameStopTime = GameStopTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
