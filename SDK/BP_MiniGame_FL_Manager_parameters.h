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

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CheckWeather
struct ABP_MiniGame_FL_Manager_C_CheckWeather_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetNearRespawnTrans
struct ABP_MiniGame_FL_Manager_C_GetNearRespawnTrans_Params
{
	struct FTransform                                  trans;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetUnitPrice
struct ABP_MiniGame_FL_Manager_C_GetUnitPrice_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetNormaSuccessCount
struct ABP_MiniGame_FL_Manager_C_GetNormaSuccessCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateNormaSuccess
struct ABP_MiniGame_FL_Manager_C_UpdateNormaSuccess_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateInput
struct ABP_MiniGame_FL_Manager_C_UpdateInput_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetDetectAction
struct ABP_MiniGame_FL_Manager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CheckResult
struct ABP_MiniGame_FL_Manager_C_CheckResult_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetEarningsValue
struct ABP_MiniGame_FL_Manager_C_GetEarningsValue_Params
{
	int                                                Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateDifficulty
struct ABP_MiniGame_FL_Manager_C_UpdateDifficulty_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UpdateWidget
struct ABP_MiniGame_FL_Manager_C_UpdateWidget_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnActorVisibleController
struct ABP_MiniGame_FL_Manager_C_SpawnActorVisibleController_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetLoadLevelData
struct ABP_MiniGame_FL_Manager_C_GetLoadLevelData_Params
{
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_MiniGame_FL_Difficulty                  FST_MiniGame_FL_Difficulty_var;                                                 // (Parm, OutParm)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.GetDataTableByName
struct ABP_MiniGame_FL_Manager_C_GetDataTableByName_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_MiniGame_FL_Difficulty                  FST_MiniGame_FL_Difficulty_var;                                                 // (Parm, OutParm)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnInputControlActor
struct ABP_MiniGame_FL_Manager_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.SpawnPlayer
struct ABP_MiniGame_FL_Manager_C_SpawnPlayer_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UserConstructionScript
struct ABP_MiniGame_FL_Manager_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputTrigger
struct ABP_MiniGame_FL_Manager_C_InputTrigger_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputLeftStickHorizontal
struct ABP_MiniGame_FL_Manager_C_InputLeftStickHorizontal_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonRight
struct ABP_MiniGame_FL_Manager_C_InputButtonRight_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonBottom
struct ABP_MiniGame_FL_Manager_C_InputButtonBottom_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputRight
struct ABP_MiniGame_FL_Manager_C_InputRight_Params
{
	bool                                               Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputLeft
struct ABP_MiniGame_FL_Manager_C_InputLeft_Params
{
	bool                                               Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.InputButtonLeft
struct ABP_MiniGame_FL_Manager_C_InputButtonLeft_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_OpenHelp
struct ABP_MiniGame_FL_Manager_C_Event_OpenHelp_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.StartMiniGame
struct ABP_MiniGame_FL_Manager_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndMiniGame
struct ABP_MiniGame_FL_Manager_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnFinishedFade
struct ABP_MiniGame_FL_Manager_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.StartGame
struct ABP_MiniGame_FL_Manager_C_StartGame_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.WinMiniGame
struct ABP_MiniGame_FL_Manager_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.LoseMiniGame
struct ABP_MiniGame_FL_Manager_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.DrawMiniGame
struct ABP_MiniGame_FL_Manager_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.FinalizeTalk
struct ABP_MiniGame_FL_Manager_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnFinishedLevelUnloadedEvent_EndGame
struct ABP_MiniGame_FL_Manager_C_OnFinishedLevelUnloadedEvent_EndGame_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_StartGame
struct ABP_MiniGame_FL_Manager_C_Event_StartGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndResult
struct ABP_MiniGame_FL_Manager_C_OnEndResult_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndCutscene
struct ABP_MiniGame_FL_Manager_C_OnEndCutscene_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.OnEndFadeInForCutscene
struct ABP_MiniGame_FL_Manager_C_OnEndFadeInForCutscene_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.UnloadLevelFinish_OnStart
struct ABP_MiniGame_FL_Manager_C_UnloadLevelFinish_OnStart_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.FinishLoadLevelOnEnd
struct ABP_MiniGame_FL_Manager_C_FinishLoadLevelOnEnd_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.Event_HelpEnd
struct ABP_MiniGame_FL_Manager_C_Event_HelpEnd_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ReceiveBeginPlay
struct ABP_MiniGame_FL_Manager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ReceiveTick
struct ABP_MiniGame_FL_Manager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ResetEndGameDoOnce
struct ABP_MiniGame_FL_Manager_C_ResetEndGameDoOnce_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnPlayer
struct ABP_MiniGame_FL_Manager_C_RespawnPlayer_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnFadeOutEnd
struct ABP_MiniGame_FL_Manager_C_RespawnFadeOutEnd_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.RespawnFadeInEnd
struct ABP_MiniGame_FL_Manager_C_RespawnFadeInEnd_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndGame
struct ABP_MiniGame_FL_Manager_C_EndGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.EndGameAllContainerCarry
struct ABP_MiniGame_FL_Manager_C_EndGameAllContainerCarry_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.CancelMiniGame
struct ABP_MiniGame_FL_Manager_C_CancelMiniGame_Params
{
};

// Function BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C.ExecuteUbergraph_BP_MiniGame_FL_Manager
struct ABP_MiniGame_FL_Manager_C_ExecuteUbergraph_BP_MiniGame_FL_Manager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
