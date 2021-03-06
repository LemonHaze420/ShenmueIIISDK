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

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.EnableGameTime
struct UBP_TalkProcess_Battle_C_EnableGameTime_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.ResettingLookAtTargetActors
struct UBP_TalkProcess_Battle_C_ResettingLookAtTargetActors_Params
{
};

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.CachedLookAtTargetActors
struct UBP_TalkProcess_Battle_C_CachedLookAtTargetActors_Params
{
};

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.OnLoaded_F2C0EA96403370D7C0981B823EF8717B
struct UBP_TalkProcess_Battle_C_OnLoaded_F2C0EA96403370D7C0981B823EF8717B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.Activate
struct UBP_TalkProcess_Battle_C_Activate_Params
{
};

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.OnEndBattle
struct UBP_TalkProcess_Battle_C_OnEndBattle_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.ExecuteUbergraph_BP_TalkProcess_Battle
struct UBP_TalkProcess_Battle_C_ExecuteUbergraph_BP_TalkProcess_Battle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
