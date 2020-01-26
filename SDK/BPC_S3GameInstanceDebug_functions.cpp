
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

// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3GameInstanceDebug_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveTick");

	UBPC_S3GameInstanceDebug_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_S3GameInstanceDebug_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveBeginPlay");

	UBPC_S3GameInstanceDebug_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ExecuteUbergraph_BPC_S3GameInstanceDebug
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3GameInstanceDebug_C::ExecuteUbergraph_BPC_S3GameInstanceDebug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ExecuteUbergraph_BPC_S3GameInstanceDebug");

	UBPC_S3GameInstanceDebug_C_ExecuteUbergraph_BPC_S3GameInstanceDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
