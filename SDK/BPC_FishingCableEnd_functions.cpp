
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
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FishingCableEnd_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ReceiveTick");

	UBPC_FishingCableEnd_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ExecuteUbergraph_BPC_FishingCableEnd
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FishingCableEnd_C::ExecuteUbergraph_BPC_FishingCableEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ExecuteUbergraph_BPC_FishingCableEnd");

	UBPC_FishingCableEnd_C_ExecuteUbergraph_BPC_FishingCableEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
