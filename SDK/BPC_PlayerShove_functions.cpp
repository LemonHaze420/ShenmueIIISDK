
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

// Function BPC_PlayerShove.BPC_PlayerShove_C.Update
// (Net, NetReliable, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerShove_C::STATIC_Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerShove.BPC_PlayerShove_C.Update");

	UBPC_PlayerShove_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerShove.BPC_PlayerShove_C.ReceiveBeginPlay
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_PlayerShove_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerShove.BPC_PlayerShove_C.ReceiveBeginPlay");

	UBPC_PlayerShove_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerShove.BPC_PlayerShove_C.ExecuteUbergraph_BPC_PlayerShove
// (NetRequest, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerShove_C::STATIC_ExecuteUbergraph_BPC_PlayerShove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerShove.BPC_PlayerShove_C.ExecuteUbergraph_BPC_PlayerShove");

	UBPC_PlayerShove_C_ExecuteUbergraph_BPC_PlayerShove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
