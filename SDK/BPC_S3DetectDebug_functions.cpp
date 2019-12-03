
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

// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.PrintLog
// (NetReliable, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_S3DetectDebug_C::PrintLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.PrintLog");

	UBPC_S3DetectDebug_C_PrintLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveBeginPlay
// (Native, Event, NetResponse, Static, NetServer)

void UBPC_S3DetectDebug_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveBeginPlay");

	UBPC_S3DetectDebug_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveTick
// (Net, Exec, Native, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3DetectDebug_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveTick");

	UBPC_S3DetectDebug_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ExecuteUbergraph_BPC_S3DetectDebug
// (Net, NetReliable, Exec, NetResponse, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
