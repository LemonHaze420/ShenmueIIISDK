
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

// Function DebugACActor.DebugACActor_C.UserConstructionScript
// (Net, NetRequest, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ADebugACActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugACActor.DebugACActor_C.UserConstructionScript");

	ADebugACActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugACActor.DebugACActor_C.ReceiveBeginPlay
// (NetReliable, Event, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ADebugACActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugACActor.DebugACActor_C.ReceiveBeginPlay");

	ADebugACActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugACActor.DebugACActor_C.ExecuteUbergraph_DebugACActor
// (Exec, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADebugACActor_C::ExecuteUbergraph_DebugACActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugACActor.DebugACActor_C.ExecuteUbergraph_DebugACActor");

	ADebugACActor_C_ExecuteUbergraph_DebugACActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
