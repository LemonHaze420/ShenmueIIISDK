
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

// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MiniGameStandaloneTalkScript_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveBeginPlay");

	UBPC_MiniGameStandaloneTalkScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameStandaloneTalkScript_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveEndPlay");

	UBPC_MiniGameStandaloneTalkScript_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameStandaloneTalkScript_C::ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript");

	UBPC_MiniGameStandaloneTalkScript_C_ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
