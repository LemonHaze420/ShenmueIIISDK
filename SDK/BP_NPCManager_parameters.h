#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_NPCManager.BP_NPCManager_C.IsDebugDisableNPC
struct ABP_NPCManager_C_IsDebugDisableNPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPCManager.BP_NPCManager_C.InitializeNPC
struct ABP_NPCManager_C_InitializeNPC_Params
{
	class AS3Character*                                Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3NPCDefinition*                            NPCDef;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCManager.BP_NPCManager_C.SetUpTagCharaComponent
struct ABP_NPCManager_C_SetUpTagCharaComponent_Params
{
	class ABP_ScheduleNPC_C*                           TargetNPC;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3NPCDefinition*                            NPCDef;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCManager.BP_NPCManager_C.SetUpTalkComponents
struct ABP_NPCManager_C_SetUpTalkComponents_Params
{
	class ABP_ScheduleNPC_C*                           TargetNPC;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3NPCDefinition*                            NPCDef;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCManager.BP_NPCManager_C.UserConstructionScript
struct ABP_NPCManager_C_UserConstructionScript_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.BlueprintInitializeNPC
struct ABP_NPCManager_C_BlueprintInitializeNPC_Params
{
	class AS3Character*                                NewNPC;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3NPCController*                            NewAI;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3NPCDefinition*                            NPCDef;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCManager.BP_NPCManager_C.ReceiveTick
struct ABP_NPCManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCManager.BP_NPCManager_C.ReceiveBeginPlay
struct ABP_NPCManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.ExecuteUbergraph_BP_NPCManager
struct ABP_NPCManager_C_ExecuteUbergraph_BP_NPCManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
