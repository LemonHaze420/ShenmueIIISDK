
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

// Function BPC_AutoCameraAnalizer.BPC_AutoCameraAnalizer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_AutoCameraAnalizer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoCameraAnalizer.BPC_AutoCameraAnalizer_C.ReceiveBeginPlay");

	UBPC_AutoCameraAnalizer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoCameraAnalizer.BPC_AutoCameraAnalizer_C.ExecuteUbergraph_BPC_AutoCameraAnalizer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoCameraAnalizer_C::ExecuteUbergraph_BPC_AutoCameraAnalizer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoCameraAnalizer.BPC_AutoCameraAnalizer_C.ExecuteUbergraph_BPC_AutoCameraAnalizer");

	UBPC_AutoCameraAnalizer_C_ExecuteUbergraph_BPC_AutoCameraAnalizer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
