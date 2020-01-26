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

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.GetAssetReferenceHolder
struct ABP_BattleTaskBase_C_GetAssetReferenceHolder_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.StartBattle
struct ABP_BattleTaskBase_C_StartBattle_Params
{
};

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.EndBattle
struct ABP_BattleTaskBase_C_EndBattle_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.UserConstructionScript
struct ABP_BattleTaskBase_C_UserConstructionScript_Params
{
};

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleResultDecided__DelegateSignature
struct ABP_BattleTaskBase_C_OnBattleResultDecided__DelegateSignature_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleLoaded__DelegateSignature
struct ABP_BattleTaskBase_C_OnBattleLoaded__DelegateSignature_Params
{
};

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleEnd__DelegateSignature
struct ABP_BattleTaskBase_C_OnBattleEnd__DelegateSignature_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
