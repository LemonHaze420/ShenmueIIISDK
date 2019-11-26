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

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInputWithShoulder
struct Uwgt_BTL_SkillInputDisplayer_C_SetInputWithShoulder_Params
{
	TArray<struct FName>                               InputActions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EGamepadShoulder>                      Shoulder;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInputByActions
struct Uwgt_BTL_SkillInputDisplayer_C_SetInputByActions_Params
{
	TArray<struct FName>                               InputActions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                StartIdx;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.CopyBoxSlotData
struct Uwgt_BTL_SkillInputDisplayer_C_CopyBoxSlotData_Params
{
	class UHorizontalBoxSlot*                          CopyFrom;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBoxSlot*                          CopyTo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.HideInput
struct Uwgt_BTL_SkillInputDisplayer_C_HideInput_Params
{
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetInput
struct Uwgt_BTL_SkillInputDisplayer_C_SetInput_Params
{
	TArray<struct FName>                               InputActions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EBTL_HoldInputType                                 Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkill(AttackLabel)
struct Uwgt_BTL_SkillInputDisplayer_C_SetSkill_AttackLabel__Params
{
	struct FName                                       Attack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkill(ItemLabel)
struct Uwgt_BTL_SkillInputDisplayer_C_SetSkill_ItemLabel__Params
{
	struct FName                                       ItemName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.SetSkillLibrary
struct Uwgt_BTL_SkillInputDisplayer_C_SetSkillLibrary_Params
{
	class UBTL_CommandLibrary_C*                       Library;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.PreConstruct
struct Uwgt_BTL_SkillInputDisplayer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.Construct
struct Uwgt_BTL_SkillInputDisplayer_C_Construct_Params
{
};

// Function wgt_BTL_SkillInputDisplayer.wgt_BTL_SkillInputDisplayer_C.ExecuteUbergraph_wgt_BTL_SkillInputDisplayer
struct Uwgt_BTL_SkillInputDisplayer_C_ExecuteUbergraph_wgt_BTL_SkillInputDisplayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
