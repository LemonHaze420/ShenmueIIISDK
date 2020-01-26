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

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DoesPlayerHaveFood
struct UBP_TalkProcess_ShowHP_C_DoesPlayerHaveFood_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.StillRunning
struct UBP_TalkProcess_ShowHP_C_StillRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.TickTransitions
struct UBP_TalkProcess_ShowHP_C_TickTransitions_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.IsLowHP
struct UBP_TalkProcess_ShowHP_C_IsLowHP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SetGlobalHPResultFlag
struct UBP_TalkProcess_ShowHP_C_SetGlobalHPResultFlag_Params
{
	bool                                               bIsFull;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UpdateGlobalHPResultFlag
struct UBP_TalkProcess_ShowHP_C_UpdateGlobalHPResultFlag_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CollectDependencies
struct UBP_TalkProcess_ShowHP_C_CollectDependencies_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DestroyUI
struct UBP_TalkProcess_ShowHP_C_DestroyUI_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SpawnUI
struct UBP_TalkProcess_ShowHP_C_SpawnUI_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ShouldShowMeter
struct UBP_TalkProcess_ShowHP_C_ShouldShowMeter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.OnLoaded_6A9A1405492543F002206D8B74ACA2FA
struct UBP_TalkProcess_ShowHP_C_OnLoaded_6A9A1405492543F002206D8B74ACA2FA_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Activate
struct UBP_TalkProcess_ShowHP_C_Activate_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Finalize
struct UBP_TalkProcess_ShowHP_C_Finalize_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.FinishHint
struct UBP_TalkProcess_ShowHP_C_FinishHint_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CleanUp
struct UBP_TalkProcess_ShowHP_C_CleanUp_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Update
struct UBP_TalkProcess_ShowHP_C_Update_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ForceFinish
struct UBP_TalkProcess_ShowHP_C_ForceFinish_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UnbindInventoryClose
struct UBP_TalkProcess_ShowHP_C_UnbindInventoryClose_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CloseInventory
struct UBP_TalkProcess_ShowHP_C_CloseInventory_Params
{
};

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ExecuteUbergraph_BP_TalkProcess_ShowHP
struct UBP_TalkProcess_ShowHP_C_ExecuteUbergraph_BP_TalkProcess_ShowHP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
