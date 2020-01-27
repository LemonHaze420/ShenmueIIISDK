#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindCurrentComboInputs
struct UBPC_BTL_CommandSolverBase_C_FindCurrentComboInputs_Params
{
	struct FName                                       AttackID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	TArray<struct FName>                               Inputs;                                                   // (Parm, OutParm, ZeroConstructor)
	EBTL_HoldInputType                                 HoldInput;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.Init
struct UBPC_BTL_CommandSolverBase_C_Init_Params
{
};

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackInputsIncludingCombo
struct UBPC_BTL_CommandSolverBase_C_FindAttackInputsIncludingCombo_Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InputEvents;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackCommand
struct UBPC_BTL_CommandSolverBase_C_FindAttackCommand_Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<SDK::EBattleAttackInput>>       OutCommand;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindAttackInputs
struct UBPC_BTL_CommandSolverBase_C_FindAttackInputs_Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InputEvents;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.FindSpecialAttackByItemName
struct UBPC_BTL_CommandSolverBase_C_FindSpecialAttackByItemName_Params
{
	struct FName                                       SkillName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Attack;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.ReceiveBeginPlay
struct UBPC_BTL_CommandSolverBase_C_ReceiveBeginPlay_Params
{
};

// Function BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C.ExecuteUbergraph_BPC_BTL_CommandSolverBase
struct UBPC_BTL_CommandSolverBase_C_ExecuteUbergraph_BPC_BTL_CommandSolverBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
