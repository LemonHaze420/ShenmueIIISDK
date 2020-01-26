
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindFirstAttackWithMatchingCommands
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandLibrary_C::FindFirstAttackWithMatchingCommands(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindFirstAttackWithMatchingCommands");

	UBTL_CommandLibrary_C_FindFirstAttackWithMatchingCommands_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.MakeDefaultByteToNameMap
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<unsigned char, struct FName> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<unsigned char, struct FName> UBTL_CommandLibrary_C::MakeDefaultByteToNameMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.MakeDefaultByteToNameMap");

	UBTL_CommandLibrary_C_MakeDefaultByteToNameMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.IsAttackEquippable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttackID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibrary_C::IsAttackEquippable(const struct FName& AttackID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.IsAttackEquippable");

	UBTL_CommandLibrary_C_IsAttackEquippable_Params params;
	params.AttackID = AttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetAllAttacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Attacks                        (Parm, OutParm, ZeroConstructor)

void UBTL_CommandLibrary_C::GetAllAttacks(TArray<struct FName>* Attacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetAllAttacks");

	UBTL_CommandLibrary_C_GetAllAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attacks != nullptr)
		*Attacks = params.Attacks;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.Initialize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibrary_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.Initialize");

	UBTL_CommandLibrary_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetAllSkillitemList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           AllItems                       (Parm, OutParm, ZeroConstructor)

void UBTL_CommandLibrary_C::GetAllSkillitemList(TArray<struct FName>* AllItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetAllSkillitemList");

	UBTL_CommandLibrary_C_GetAllSkillitemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllItems != nullptr)
		*AllItems = params.AllItems;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetSkillSortInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Sortint                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::GetSkillSortInt(const struct FName& Key, int* Sortint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.GetSkillSortInt");

	UBTL_CommandLibrary_C_GetSkillSortInt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sortint != nullptr)
		*Sortint = params.Sortint;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.MakeSkillCommandSortInt
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SortInt1                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::MakeSkillCommandSortInt(const struct FName& SkillItem, int* SortInt1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.MakeSkillCommandSortInt");

	UBTL_CommandLibrary_C_MakeSkillCommandSortInt_Params params;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortInt1 != nullptr)
		*SortInt1 = params.SortInt1;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackEquipSetting
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBTL_AutoOnOff                 Setting                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::FindAttackEquipSetting(const struct FName& Attack, EBTL_AutoOnOff* Setting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackEquipSetting");

	UBTL_CommandLibrary_C_FindAttackEquipSetting_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Setting != nullptr)
		*Setting = params.Setting;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindMatchingCombo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Attacks                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            FoundIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::FindMatchingCombo(TArray<struct FName> Attacks, int* FoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindMatchingCombo");

	UBTL_CommandLibrary_C_FindMatchingCombo_Params params;
	params.Attacks = Attacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundIndex != nullptr)
		*FoundIndex = params.FoundIndex;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackInputsWithCombo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttackID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           InputEvents                    (Parm, OutParm, ZeroConstructor)
// EBTL_HoldInputType             Hold                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::FindAttackInputsWithCombo(const struct FName& AttackID, TArray<struct FName>* InputEvents, EBTL_HoldInputType* Hold, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackInputsWithCombo");

	UBTL_CommandLibrary_C_FindAttackInputsWithCombo_Params params;
	params.AttackID = AttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputEvents != nullptr)
		*InputEvents = params.InputEvents;
	if (Hold != nullptr)
		*Hold = params.Hold;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackCommand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EBattleAttackInput>> OutCommand                     (Parm, OutParm, ZeroConstructor)
// EBTL_HoldInputType             Hold                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::FindAttackCommand(const struct FName& Attack, TArray<TEnumAsByte<EBattleAttackInput>>* OutCommand, EBTL_HoldInputType* Hold, bool* bFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackCommand");

	UBTL_CommandLibrary_C_FindAttackCommand_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCommand != nullptr)
		*OutCommand = params.OutCommand;
	if (Hold != nullptr)
		*Hold = params.Hold;
	if (bFound != nullptr)
		*bFound = params.bFound;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackInputs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           InputEvents                    (Parm, OutParm, ZeroConstructor)
// EBTL_HoldInputType             Hold                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::FindAttackInputs(const struct FName& Attack, TArray<struct FName>* InputEvents, EBTL_HoldInputType* Hold, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackInputs");

	UBTL_CommandLibrary_C_FindAttackInputs_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputEvents != nullptr)
		*InputEvents = params.InputEvents;
	if (Hold != nullptr)
		*Hold = params.Hold;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackByItemName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Attack                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_CommandLibrary_C::FindAttackByItemName(const struct FName& SkillItem, struct FName* Attack, bool* bFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.FindAttackByItemName");

	UBTL_CommandLibrary_C_FindAttackByItemName_Params params;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attack != nullptr)
		*Attack = params.Attack;
	if (bFound != nullptr)
		*bFound = params.bFound;
}


// Function BTL_CommandLibrary.BTL_CommandLibrary_C.StringToCommandArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 S                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<TEnumAsByte<EBattleAttackInput>> Commands                       (Parm, OutParm, ZeroConstructor)

void UBTL_CommandLibrary_C::StringToCommandArray(const struct FString& S, TArray<TEnumAsByte<EBattleAttackInput>>* Commands)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTL_CommandLibrary.BTL_CommandLibrary_C.StringToCommandArray");

	UBTL_CommandLibrary_C_StringToCommandArray_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Commands != nullptr)
		*Commands = params.Commands;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
