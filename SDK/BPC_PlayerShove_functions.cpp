
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

// Function BPC_PlayerShove.BPC_PlayerShove_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerShove_C::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerShove.BPC_PlayerShove_C.Update");

	UBPC_PlayerShove_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerShove.BPC_PlayerShove_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_PlayerShove_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerShove.BPC_PlayerShove_C.ReceiveBeginPlay");

	UBPC_PlayerShove_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerShove.BPC_PlayerShove_C.ExecuteUbergraph_BPC_PlayerShove
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerShove_C::ExecuteUbergraph_BPC_PlayerShove(int EntryPoint)
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
