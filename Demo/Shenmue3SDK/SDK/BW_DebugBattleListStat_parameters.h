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

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueText
struct UBW_DebugBattleListStat_C_SetValueText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInt
struct UBW_DebugBattleListStat_C_SetValueInt_Params
{
	int                                                Numb;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueRatio
struct UBW_DebugBattleListStat_C_SetValueRatio_Params
{
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInts
struct UBW_DebugBattleListStat_C_SetValueInts_Params
{
	int                                                Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Denom;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.PreConstruct
struct UBW_DebugBattleListStat_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleListStat_C_BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleListStat_C_BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleListStat_C_BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ResetFocus
struct UBW_DebugBattleListStat_C_ResetFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ExecuteUbergraph_BW_DebugBattleListStat
struct UBW_DebugBattleListStat_C_ExecuteUbergraph_BW_DebugBattleListStat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMax__DelegateSignature
struct UBW_DebugBattleListStat_C_OnMax__DelegateSignature_Params
{
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMinus__DelegateSignature
struct UBW_DebugBattleListStat_C_OnMinus__DelegateSignature_Params
{
};

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnPlus__DelegateSignature
struct UBW_DebugBattleListStat_C_OnPlus__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
