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

// Function BP_BattleFlowBase.BP_BattleFlowBase_C.EnableDefaultEndConditions
struct ABP_BattleFlowBase_C_EnableDefaultEndConditions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleFlowBase.BP_BattleFlowBase_C.SetBattleManager
struct ABP_BattleFlowBase_C_SetBattleManager_Params
{
	class ABP_BattleManagerBase_C*                     Manager;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleFlowBase.BP_BattleFlowBase_C.Update
struct ABP_BattleFlowBase_C_Update_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleFlowBase.BP_BattleFlowBase_C.StartBattle
struct ABP_BattleFlowBase_C_StartBattle_Params
{
};

// Function BP_BattleFlowBase.BP_BattleFlowBase_C.UserConstructionScript
struct ABP_BattleFlowBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
