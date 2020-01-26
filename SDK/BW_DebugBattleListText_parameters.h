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

// Function BW_DebugBattleListText.BW_DebugBattleListText_C.SetText
struct UBW_DebugBattleListText_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BW_DebugBattleListText.BW_DebugBattleListText_C.PreConstruct
struct UBW_DebugBattleListText_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugBattleListText.BW_DebugBattleListText_C.ExecuteUbergraph_BW_DebugBattleListText
struct UBW_DebugBattleListText_C_ExecuteUbergraph_BW_DebugBattleListText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
