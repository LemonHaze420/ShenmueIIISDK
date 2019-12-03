
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

// Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.EnableDebugTalkScript
// (Exec, Native, Static, MulticastDelegate, Public, Private, Delegate, NetClient, Const)

void UBPC_MiniGameDebugStandaloneTalkScript_C::STATIC_EnableDebugTalkScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.EnableDebugTalkScript");

	UBPC_MiniGameDebugStandaloneTalkScript_C_EnableDebugTalkScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.ReceiveBeginPlay
// (Exec, Native, NetResponse, Static, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameDebugStandaloneTalkScript_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.ReceiveBeginPlay");

	UBPC_MiniGameDebugStandaloneTalkScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.ExecuteUbergraph_BPC_MiniGameDebugStandaloneTalkScript
// (Event, Static, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameDebugStandaloneTalkScript_C::STATIC_ExecuteUbergraph_BPC_MiniGameDebugStandaloneTalkScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.ExecuteUbergraph_BPC_MiniGameDebugStandaloneTalkScript");

	UBPC_MiniGameDebugStandaloneTalkScript_C_ExecuteUbergraph_BPC_MiniGameDebugStandaloneTalkScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
