
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

// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.Trace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_NPCDebugTrace_C::Trace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.Trace");

	UBPC_NPCDebugTrace_C_Trace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_NPCDebugTrace_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ReceiveBeginPlay");

	UBPC_NPCDebugTrace_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCDebugTrace_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ReceiveTick");

	UBPC_NPCDebugTrace_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ExecuteUbergraph_BPC_NPCDebugTrace
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCDebugTrace_C::ExecuteUbergraph_BPC_NPCDebugTrace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ExecuteUbergraph_BPC_NPCDebugTrace");

	UBPC_NPCDebugTrace_C_ExecuteUbergraph_BPC_NPCDebugTrace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
