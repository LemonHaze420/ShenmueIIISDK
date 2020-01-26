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

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.MakeRewardNameText
struct UBW_DebugBattleRally_C_MakeRewardNameText_Params
{
	struct FS3BRallyAwardStatus                        Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.ListUpRewards
struct UBW_DebugBattleRally_C_ListUpRewards_Params
{
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.BuildMenu
struct UBW_DebugBattleRally_C_BuildMenu_Params
{
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.SetInitialFocus
struct UBW_DebugBattleRally_C_SetInitialFocus_Params
{
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnUserToggledAward
struct UBW_DebugBattleRally_C_OnUserToggledAward_Params
{
	class UBW_SimpleDebugToggle_C*                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECheckBoxState                                     NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnUserChangeAwardCount
struct UBW_DebugBattleRally_C_OnUserChangeAwardCount_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBW_IntegerProperty_C*                       Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.BndEvt__S3Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleRally_C_BndEvt__S3Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugBattleRally_C_BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnScrollBoxItemFocused
struct UBW_DebugBattleRally_C_OnScrollBoxItemFocused_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.ExecuteUbergraph_BW_DebugBattleRally
struct UBW_DebugBattleRally_C_ExecuteUbergraph_BW_DebugBattleRally_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
