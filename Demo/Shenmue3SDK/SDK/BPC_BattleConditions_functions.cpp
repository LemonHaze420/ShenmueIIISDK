
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

// Function BPC_BattleConditions.BPC_BattleConditions_C.ShouldDelayHPCheckFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_BattleConditions_C::ShouldDelayHPCheckFor(TEnumAsByte<EBattleWinLoseResult> Result)
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
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_BattleConditions_C::ConvertActorsToIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleConditions.BPC_BattleConditions_C.ConvertActorsToIDs");

	UBPC_BattleConditions_C_ConvertActorsToIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BattleConditions.BPC_BattleConditions_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_BattleConditions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleConditions.BPC_BattleConditions_C.ReceiveBeginPlay");

	UBPC_BattleConditions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BattleConditions.BPC_BattleConditions_C.ExecuteUbergraph_BPC_BattleConditions
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BattleConditions_C::ExecuteUbergraph_BPC_BattleConditions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleConditions.BPC_BattleConditions_C.ExecuteUbergraph_BPC_BattleConditions");

	UBPC_BattleConditions_C_ExecuteUbergraph_BPC_BattleConditions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
