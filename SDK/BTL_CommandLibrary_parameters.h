#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindFirstAttackWithMatchingCommands
struct UBTL_CommandLibrary_C_FindFirstAttackWithMatchingCommands_Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.MakeDefaultByteToNameMap
struct UBTL_CommandLibrary_C_MakeDefaultByteToNameMap_Params
{
	TMap<unsigned char, struct FName>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.IsAttackEquippable
struct UBTL_CommandLibrary_C_IsAttackEquippable_Params
{
	struct FName                                       AttackID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetAllAttacks
struct UBTL_CommandLibrary_C_GetAllAttacks_Params
{
	TArray<struct FName>                               Attacks;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.Initialize
struct UBTL_CommandLibrary_C_Initialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetAllSkillitemList
struct UBTL_CommandLibrary_C_GetAllSkillitemList_Params
{
	TArray<struct FName>                               AllItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetSkillSortInt
struct UBTL_CommandLibrary_C_GetSkillSortInt_Params
{
	struct FName                                       Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Sortint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.MakeSkillCommandSortInt
struct UBTL_CommandLibrary_C_MakeSkillCommandSortInt_Params
{
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SortInt1;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackEquipSetting
struct UBTL_CommandLibrary_C_FindAttackEquipSetting_Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBTL_AutoOnOff                                     Setting;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindMatchingCombo
struct UBTL_CommandLibrary_C_FindMatchingCombo_Params
{
	TArray<struct FName>                               Attacks;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                FoundIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackInputsWithCombo
struct UBTL_CommandLibrary_C_FindAttackInputsWithCombo_Params
{
	struct FName                                       AttackID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InputEvents;                                              // (Parm, OutParm, ZeroConstructor)
	EBTL_HoldInputType                                 Hold;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackCommand
struct UBTL_CommandLibrary_C_FindAttackCommand_Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EBattleAttackInput>>            OutCommand;                                               // (Parm, OutParm, ZeroConstructor)
	EBTL_HoldInputType                                 Hold;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackInputs
struct UBTL_CommandLibrary_C_FindAttackInputs_Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InputEvents;                                              // (Parm, OutParm, ZeroConstructor)
	EBTL_HoldInputType                                 Hold;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackByItemName
struct UBTL_CommandLibrary_C_FindAttackByItemName_Params
{
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Attack;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.StringToCommandArray
struct UBTL_CommandLibrary_C_StringToCommandArray_Params
{
	struct FString                                     S;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<TEnumAsByte<EBattleAttackInput>>            Commands;                                                 // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
