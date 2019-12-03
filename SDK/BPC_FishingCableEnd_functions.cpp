
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

// Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ReceiveTick
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FishingCableEnd_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ReceiveTick");

	UBPC_FishingCableEnd_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ExecuteUbergraph_BPC_FishingCableEnd
// (Net, Native, NetResponse, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FishingCableEnd_C::ExecuteUbergraph_BPC_FishingCableEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ExecuteUbergraph_BPC_FishingCableEnd");

	UBPC_FishingCableEnd_C_ExecuteUbergraph_BPC_FishingCableEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
