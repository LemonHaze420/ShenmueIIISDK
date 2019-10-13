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

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.EnableHUD
struct ABP_BattleManagerBase_C_EnableHUD_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsResultDecided
struct ABP_BattleManagerBase_C_IsResultDecided_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.TryPlayerQuit
struct ABP_BattleManagerBase_C_TryPlayerQuit_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartBattle
struct ABP_BattleManagerBase_C_StartBattle_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteDebugCommand
struct ABP_BattleManagerBase_C_ExecuteDebugCommand_Params
{
	struct FString                                     Argument;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartEndingBattle
struct ABP_BattleManagerBase_C_StartEndingBattle_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.CloseBattle
struct ABP_BattleManagerBase_C_CloseBattle_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.LaunchBattle
struct ABP_BattleManagerBase_C_LaunchBattle_Params
{
	class UBTL_LaunchParameters_C*                     LaunchParams;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.UserConstructionScript
struct ABP_BattleManagerBase_C_UserConstructionScript_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleClose__DelegateSignature
struct ABP_BattleManagerBase_C_OnBattleClose__DelegateSignature_Params
{
};

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleEnd__DelegateSignature
struct ABP_BattleManagerBase_C_OnBattleEnd__DelegateSignature_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
