
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

// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.PrintLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_S3DetectDebug_C::PrintLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.PrintLog");

	UBPC_S3DetectDebug_C_PrintLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_S3DetectDebug_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveBeginPlay");

	UBPC_S3DetectDebug_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3DetectDebug_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveTick");

	UBPC_S3DetectDebug_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ExecuteUbergraph_BPC_S3DetectDebug
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3DetectDebug_C::ExecuteUbergraph_BPC_S3DetectDebug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ExecuteUbergraph_BPC_S3DetectDebug");

	UBPC_S3DetectDebug_C_ExecuteUbergraph_BPC_S3DetectDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
