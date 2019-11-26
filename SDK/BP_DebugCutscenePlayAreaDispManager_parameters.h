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

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsRequestedEndDisp
struct ABP_DebugCutscenePlayAreaDispManager_C_IsRequestedEndDisp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsDisp
struct ABP_DebugCutscenePlayAreaDispManager_C_IsDisp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.RequestEndDisp
struct ABP_DebugCutscenePlayAreaDispManager_C_RequestEndDisp_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.EndDisp
struct ABP_DebugCutscenePlayAreaDispManager_C_EndDisp_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.DispCutsceneArea
struct ABP_DebugCutscenePlayAreaDispManager_C_DispCutsceneArea_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsCurrentLevelUnloadable
struct ABP_DebugCutscenePlayAreaDispManager_C_IsCurrentLevelUnloadable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.AddCutsceneDispInfo
struct ABP_DebugCutscenePlayAreaDispManager_C_AddCutsceneDispInfo_Params
{
	struct FST_DbgCutscenePlayInfo                     InInfo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetLoadLevelName
struct ABP_DebugCutscenePlayAreaDispManager_C_GetLoadLevelName_Params
{
	struct FST_DbgCutscenePlayInfo                     InPlayInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       LevelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.IsAddedDispInfo
struct ABP_DebugCutscenePlayAreaDispManager_C_IsAddedDispInfo_Params
{
	struct FST_DbgCutscenePlayInfo                     InPlayInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.GetDebugPlayInfoList
struct ABP_DebugCutscenePlayAreaDispManager_C_GetDebugPlayInfoList_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.StartDisp
struct ABP_DebugCutscenePlayAreaDispManager_C_StartDisp_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.UserConstructionScript
struct ABP_DebugCutscenePlayAreaDispManager_C_UserConstructionScript_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveBeginPlay
struct ABP_DebugCutscenePlayAreaDispManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ReceiveTick
struct ABP_DebugCutscenePlayAreaDispManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.InitializeDispInfo
struct ABP_DebugCutscenePlayAreaDispManager_C_InitializeDispInfo_Params
{
};

// Function BP_DebugCutscenePlayAreaDispManager.BP_DebugCutscenePlayAreaDispManager_C.ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager
struct ABP_DebugCutscenePlayAreaDispManager_C_ExecuteUbergraph_BP_DebugCutscenePlayAreaDispManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
