
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

// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveTick
// (NetRequest, Exec, Native, Event, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3GameInstanceDebug_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveTick");

	UBPC_S3GameInstanceDebug_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveBeginPlay
// (Net, Native, Event, NetResponse, Static, Private, BlueprintEvent, BlueprintPure)

void UBPC_S3GameInstanceDebug_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveBeginPlay");

	UBPC_S3GameInstanceDebug_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ExecuteUbergraph_BPC_S3GameInstanceDebug
// (NetRequest, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
