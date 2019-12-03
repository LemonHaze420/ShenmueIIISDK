
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

// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveBeginPlay
// (Net, NetRequest, NetResponse, Static, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameStandaloneTalkScript_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveBeginPlay");

	UBPC_MiniGameStandaloneTalkScript_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveEndPlay
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameStandaloneTalkScript_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveEndPlay");

	UBPC_MiniGameStandaloneTalkScript_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript
// (NetReliable, Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
