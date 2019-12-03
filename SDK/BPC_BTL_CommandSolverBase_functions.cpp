
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

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindCurrentComboInputs
// (Exec, Event, Static, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   AttackID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// TArray<struct FName>           Inputs                         (Parm, OutParm, ZeroConstructor)
// EBTL_HoldInputType             HoldInput                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UBPC_BTL_CommandSolverBase_C::STATIC_FindCurrentComboInputs(const struct FName& AttackID, TArray<struct FName>* Inputs, EBTL_HoldInputType* HoldInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindCurrentComboInputs");

	UBPC_BTL_CommandSolverBase_C_FindCurrentComboInputs_Params params;
	params.AttackID = AttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inputs != nullptr)
		*Inputs = params.Inputs;
	if (HoldInput != nullptr)
		*HoldInput = params.HoldInput;

	return params.ReturnValue;
}


// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.Init
// (Event, NetResponse, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)

void UBPC_BTL_CommandSolverBase_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.Init");

	UBPC_BTL_CommandSolverBase_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackInputsIncludingCombo
// (NetReliable, Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           InputEvents                    (Parm, OutParm, ZeroConstructor)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BTL_CommandSolverBase_C::STATIC_FindAttackInputsIncludingCombo(const struct FName& Attack, TArray<struct FName>* InputEvents, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackInputsIncludingCombo");

	UBPC_BTL_CommandSolverBase_C_FindAttackInputsIncludingCombo_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputEvents != nullptr)
		*InputEvents = params.InputEvents;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackCommand
// (Exec, Native, NetResponse, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EBattleAttackInput>> OutCommand                     (Parm, OutParm, ZeroConstructor)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BTL_CommandSolverBase_C::FindAttackCommand(const struct FName& Attack, TArray<TEnumAsByte<EBattleAttackInput>>* OutCommand, bool* bFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackCommand");

	UBPC_BTL_CommandSolverBase_C_FindAttackCommand_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCommand != nullptr)
		*OutCommand = params.OutCommand;
	if (bFound != nullptr)
		*bFound = params.bFound;
}


// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackInputs
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           InputEvents                    (Parm, OutParm, ZeroConstructor)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BTL_CommandSolverBase_C::STATIC_FindAttackInputs(const struct FName& Attack, TArray<struct FName>* InputEvents, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackInputs");

	UBPC_BTL_CommandSolverBase_C_FindAttackInputs_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputEvents != nullptr)
		*InputEvents = params.InputEvents;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindSpecialAttackByItemName
// (NetReliable, Event, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   SkillName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Attack                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BTL_CommandSolverBase_C::FindSpecialAttackByItemName(const struct FName& SkillName, struct FName* Attack, bool* bFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindSpecialAttackByItemName");

	UBPC_BTL_CommandSolverBase_C_FindSpecialAttackByItemName_Params params;
	params.SkillName = SkillName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attack != nullptr)
		*Attack = params.Attack;
	if (bFound != nullptr)
		*bFound = params.bFound;
}


// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void UBPC_BTL_CommandSolverBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.ReceiveBeginPlay");

	UBPC_BTL_CommandSolverBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.ExecuteUbergraph_BPC_BTL_CommandSolverBase
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BTL_CommandSolverBase_C::ExecuteUbergraph_BPC_BTL_CommandSolverBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.ExecuteUbergraph_BPC_BTL_CommandSolverBase");

	UBPC_BTL_CommandSolverBase_C_ExecuteUbergraph_BPC_BTL_CommandSolverBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
