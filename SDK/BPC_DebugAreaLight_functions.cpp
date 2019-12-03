
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

// Function BPC_DebugAreaLight.BPC_DebugAreaLight_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DebugAreaLight_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DebugAreaLight.BPC_DebugAreaLight_C.ReceiveTick");

	UBPC_DebugAreaLight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DebugAreaLight.BPC_DebugAreaLight_C.ReceiveBeginPlay
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPC_DebugAreaLight_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DebugAreaLight.BPC_DebugAreaLight_C.ReceiveBeginPlay");

	UBPC_DebugAreaLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DebugAreaLight.BPC_DebugAreaLight_C.ExecuteUbergraph_BPC_DebugAreaLight
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DebugAreaLight_C::STATIC_ExecuteUbergraph_BPC_DebugAreaLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DebugAreaLight.BPC_DebugAreaLight_C.ExecuteUbergraph_BPC_DebugAreaLight");

	UBPC_DebugAreaLight_C_ExecuteUbergraph_BPC_DebugAreaLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
