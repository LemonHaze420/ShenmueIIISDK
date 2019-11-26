
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.EnableDebugTalkScript
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameDebugStandaloneTalkScript_C::EnableDebugTalkScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.EnableDebugTalkScript");

	UBPC_MiniGameDebugStandaloneTalkScript_C_EnableDebugTalkScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MiniGameDebugStandaloneTalkScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.ReceiveBeginPlay");

	UBPC_MiniGameDebugStandaloneTalkScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameDebugStandaloneTalkScript.BPC_MiniGameDebugStandaloneTalkScript_C.ExecuteUbergraph_BPC_MiniGameDebugStandaloneTalkScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameDebugStandaloneTalkScript_C::ExecuteUbergraph_BPC_MiniGameDebugStandaloneTalkScript(int EntryPoint)
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
