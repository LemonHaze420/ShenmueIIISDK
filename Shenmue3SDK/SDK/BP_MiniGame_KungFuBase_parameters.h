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

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetHelpPriority
struct ABP_MiniGame_KungFuBase_C_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetClothMeshComponent
struct ABP_MiniGame_KungFuBase_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InitAsyncLoad
struct ABP_MiniGame_KungFuBase_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UpdatePlayContinueScript
struct ABP_MiniGame_KungFuBase_C_UpdatePlayContinueScript_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.IsKungFuSuccess
struct ABP_MiniGame_KungFuBase_C_IsKungFuSuccess_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CalcKungFuLevel
struct ABP_MiniGame_KungFuBase_C_CalcKungFuLevel_Params
{
	bool                                               ChangeDifficuty;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ChangeProgress;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.SetKungFuDifficulty
struct ABP_MiniGame_KungFuBase_C_SetKungFuDifficulty_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.CheckValueInRance
struct ABP_MiniGame_KungFuBase_C_CheckValueInRance_Params
{
	float                                              CheckValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HighValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LowValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InRange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NearValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetDetectAction
struct ABP_MiniGame_KungFuBase_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.GetPlayLabel
struct ABP_MiniGame_KungFuBase_C_GetPlayLabel_Params
{
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       labelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.PlayScriptLabel
struct ABP_MiniGame_KungFuBase_C_PlayScriptLabel_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UpdateElapsedTime
struct ABP_MiniGame_KungFuBase_C_UpdateElapsedTime_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.SpawnInputControlActor
struct ABP_MiniGame_KungFuBase_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.UserConstructionScript
struct ABP_MiniGame_KungFuBase_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_ButtonRight
struct ABP_MiniGame_KungFuBase_C_InputAction_ButtonRight_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_Top
struct ABP_MiniGame_KungFuBase_C_InputAction_Top_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_Bottom
struct ABP_MiniGame_KungFuBase_C_InputAction_Bottom_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.InputAction_ButtonBottom
struct ABP_MiniGame_KungFuBase_C_InputAction_ButtonBottom_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.StartMiniGame
struct ABP_MiniGame_KungFuBase_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.EndMiniGame
struct ABP_MiniGame_KungFuBase_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedFade
struct ABP_MiniGame_KungFuBase_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.WinMiniGame
struct ABP_MiniGame_KungFuBase_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.LoseMiniGame
struct ABP_MiniGame_KungFuBase_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.DrawMiniGame
struct ABP_MiniGame_KungFuBase_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.FinalizeTalk
struct ABP_MiniGame_KungFuBase_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedCoinSequence
struct ABP_MiniGame_KungFuBase_C_OnFinishedCoinSequence_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnFinishedStart
struct ABP_MiniGame_KungFuBase_C_OnFinishedStart_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.StartGame
struct ABP_MiniGame_KungFuBase_C_StartGame_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.AfterFadeInEvent
struct ABP_MiniGame_KungFuBase_C_AfterFadeInEvent_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnTimeUp
struct ABP_MiniGame_KungFuBase_C_OnTimeUp_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnSkillCountMax
struct ABP_MiniGame_KungFuBase_C_OnSkillCountMax_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.OnResultEnd
struct ABP_MiniGame_KungFuBase_C_OnResultEnd_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.TimeUpEvent
struct ABP_MiniGame_KungFuBase_C_TimeUpEvent_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ReceiveBeginPlay
struct ABP_MiniGame_KungFuBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ReceiveTick
struct ABP_MiniGame_KungFuBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.ExecuteUbergraph_BP_MiniGame_KungFuBase
struct ABP_MiniGame_KungFuBase_C_ExecuteUbergraph_BP_MiniGame_KungFuBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
