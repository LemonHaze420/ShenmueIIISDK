
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

// Function BPC_BattleConditions.BPC_BattleConditions_C.ShouldDelayHPCheckFor
// (NetReliable, NetResponse, Static, Private, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_BattleConditions_C::STATIC_ShouldDelayHPCheckFor(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleConditions.BPC_BattleConditions_C.ShouldDelayHPCheckFor");

	UBPC_BattleConditions_C_ShouldDelayHPCheckFor_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_BattleConditions.BPC_BattleConditions_C.ConvertActorsToIDs
// (Native, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_BattleConditions_C::ConvertActorsToIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleConditions.BPC_BattleConditions_C.ConvertActorsToIDs");

	UBPC_BattleConditions_C_ConvertActorsToIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BattleConditions.BPC_BattleConditions_C.ReceiveBeginPlay
// (Exec, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_BattleConditions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleConditions.BPC_BattleConditions_C.ReceiveBeginPlay");

	UBPC_BattleConditions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BattleConditions.BPC_BattleConditions_C.ExecuteUbergraph_BPC_BattleConditions
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BattleConditions_C::STATIC_ExecuteUbergraph_BPC_BattleConditions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleConditions.BPC_BattleConditions_C.ExecuteUbergraph_BPC_BattleConditions");

	UBPC_BattleConditions_C_ExecuteUbergraph_BPC_BattleConditions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
