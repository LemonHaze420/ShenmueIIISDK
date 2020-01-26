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

// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnRoundEnd__DelegateSignature
struct UBP_CCBattleEvents_C_OnRoundEnd__DelegateSignature_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnGameEnd__DelegateSignature
struct UBP_CCBattleEvents_C_OnGameEnd__DelegateSignature_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnSetStart__DelegateSignature
struct UBP_CCBattleEvents_C_OnSetStart__DelegateSignature_Params
{
};

// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnRoundStart__DelegateSignature
struct UBP_CCBattleEvents_C_OnRoundStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
