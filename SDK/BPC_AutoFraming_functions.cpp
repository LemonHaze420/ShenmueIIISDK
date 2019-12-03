
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

// Function BPC_AutoFraming.BPC_AutoFraming_C.SetLookRotation
// (Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                StartRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_AutoFraming_C::STATIC_SetLookRotation(const struct FRotator& StartRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFraming.BPC_AutoFraming_C.SetLookRotation");

	UBPC_AutoFraming_C_SetLookRotation_Params params;
	params.StartRotation = StartRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFraming.BPC_AutoFraming_C.SetTargetSocket
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PanSpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoFraming_C::SetTargetSocket(const struct FName& Socket, float PanSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFraming.BPC_AutoFraming_C.SetTargetSocket");

	UBPC_AutoFraming_C_SetTargetSocket_Params params;
	params.Socket = Socket;
	params.PanSpeed = PanSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFraming.BPC_AutoFraming_C.SetTargetActor
// (Net, NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PanTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoFraming_C::STATIC_SetTargetActor(class AActor* Actor, float PanTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFraming.BPC_AutoFraming_C.SetTargetActor");

	UBPC_AutoFraming_C_SetTargetActor_Params params;
	params.Actor = Actor;
	params.PanTime = PanTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFraming.BPC_AutoFraming_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_AutoFraming_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFraming.BPC_AutoFraming_C.ReceiveBeginPlay");

	UBPC_AutoFraming_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFraming.BPC_AutoFraming_C.Update
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_AutoFraming_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFraming.BPC_AutoFraming_C.Update");

	UBPC_AutoFraming_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFraming.BPC_AutoFraming_C.ExecuteUbergraph_BPC_AutoFraming
// (NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoFraming_C::STATIC_ExecuteUbergraph_BPC_AutoFraming(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFraming.BPC_AutoFraming_C.ExecuteUbergraph_BPC_AutoFraming");

	UBPC_AutoFraming_C_ExecuteUbergraph_BPC_AutoFraming_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
