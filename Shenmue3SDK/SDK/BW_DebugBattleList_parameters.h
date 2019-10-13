#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BW_DebugBattleList.BW_DebugBattleList_C.AddBattles
struct UBW_DebugBattleList_C_AddBattles_Params
{
	class ABP_DebugBattleListActor_C*                  DebugList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.AddBattleWidget
struct UBW_DebugBattleList_C_AddBattleWidget_Params
{
	class UBW_DebugBattleListItem_C*                   NewItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.MakeRankText
struct UBW_DebugBattleList_C_MakeRankText_Params
{
	struct FName                                       InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_DojoVictoryStandard                     ST_DojoVictoryStandard;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.SetSkillItemCount
struct UBW_DebugBattleList_C_SetSkillItemCount_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.ChangeDojoRank
struct UBW_DebugBattleList_C_ChangeDojoRank_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.GetHealingItemCount
struct UBW_DebugBattleList_C_GetHealingItemCount_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.AddHealingItems
struct UBW_DebugBattleList_C_AddHealingItems_Params
{
	int                                                Amt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.FilterNonMaxLevel
struct UBW_DebugBattleList_C_FilterNonMaxLevel_Params
{
	TArray<struct FName>                               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               OutArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.GetOwnedLevelableSkills
struct UBW_DebugBattleList_C_GetOwnedLevelableSkills_Params
{
	TArray<struct FName>                               ItemLabels;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.AddSkillItems
struct UBW_DebugBattleList_C_AddSkillItems_Params
{
	int                                                AddNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.LevelAnySkills
struct UBW_DebugBattleList_C_LevelAnySkills_Params
{
	int                                                CompleteSkills;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.AddPointsToCurrentSkillSet
struct UBW_DebugBattleList_C_AddPointsToCurrentSkillSet_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.UpdateTextHeavy
struct UBW_DebugBattleList_C_UpdateTextHeavy_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.UpdateText
struct UBW_DebugBattleList_C_UpdateText_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.CallOnStartBattle
struct UBW_DebugBattleList_C_CallOnStartBattle_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.Initialize
struct UBW_DebugBattleList_C_Initialize_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.Tick
struct UBW_DebugBattleList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.Construct
struct UBW_DebugBattleList_C_Construct_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__HealItems_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__HealItems_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__HealItems_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_ChobuStart_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__Button_ChobuStart_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_2_OnPlus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_2_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_3_OnMinus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_3_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_HakkasonStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__Button_HakkasonStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_MaxRyo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__Button_MaxRyo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListLevelStat_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListLevelStat_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__AttackLevel_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__AttackLevel_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__VitalityLevel_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__VitalityLevel_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_BoolProperty_K2Node_ComponentBoundEvent_1_BoolPropertyChanged__DelegateSignature
struct UBW_DebugBattleList_C_BndEvt__BW_BoolProperty_K2Node_ComponentBoundEvent_1_BoolPropertyChanged__DelegateSignature_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.OnBattleButtonFocused
struct UBW_DebugBattleList_C_OnBattleButtonFocused_Params
{
	class US3Button*                                   Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.BuildMenu
struct UBW_DebugBattleList_C_BuildMenu_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.SetInitialFocus
struct UBW_DebugBattleList_C_SetInitialFocus_Params
{
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.ExecuteUbergraph_BW_DebugBattleList
struct UBW_DebugBattleList_C_ExecuteUbergraph_BW_DebugBattleList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleList.BW_DebugBattleList_C.OnStartBattle__DelegateSignature
struct UBW_DebugBattleList_C_OnStartBattle__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
