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

// Function BP_LinkGacha.BP_LinkGacha_C.GetGachaID
struct ABP_LinkGacha_C_GetGachaID_Params
{
	struct FName                                       GachaId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.DestroyLoadObject
struct ABP_LinkGacha_C_DestroyLoadObject_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.InitAsyncLoad
struct ABP_LinkGacha_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.GetSightCheckLocation
struct ABP_LinkGacha_C_GetSightCheckLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.IsTalking
struct ABP_LinkGacha_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.GetDetectAction
struct ABP_LinkGacha_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_LinkGacha.BP_LinkGacha_C.IsDispArrow
struct ABP_LinkGacha_C_IsDispArrow_Params
{
	bool                                               IsDisp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.SpawnInputControlActor
struct ABP_LinkGacha_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.InputCancel
struct ABP_LinkGacha_C_InputCancel_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.InputAction
struct ABP_LinkGacha_C_InputAction_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.InputLeft
struct ABP_LinkGacha_C_InputLeft_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.InputRight
struct ABP_LinkGacha_C_InputRight_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.DeleteArrow
struct ABP_LinkGacha_C_DeleteArrow_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.MakeArrow
struct ABP_LinkGacha_C_MakeArrow_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.Tick_Select
struct ABP_LinkGacha_C_Tick_Select_Params
{
	float                                              ArgDeltaSec;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.GetOldTargetGacha
struct ABP_LinkGacha_C_GetOldTargetGacha_Params
{
	class ABP_MiniGame_Gacha_C*                        newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.StartLinkGacha
struct ABP_LinkGacha_C_StartLinkGacha_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.Init
struct ABP_LinkGacha_C_Init_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.GetTargetGacha
struct ABP_LinkGacha_C_GetTargetGacha_Params
{
	class ABP_MiniGame_Gacha_C*                        newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.UserConstructionScript
struct ABP_LinkGacha_C_UserConstructionScript_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.GachaRewardWathing
struct ABP_LinkGacha_C_GachaRewardWathing_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.GachaThinkingGameContinue
struct ABP_LinkGacha_C_GachaThinkingGameContinue_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.GachaGameContinue
struct ABP_LinkGacha_C_GachaGameContinue_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.ResumeMiniGame
struct ABP_LinkGacha_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LinkGacha.BP_LinkGacha_C.EndMiniGame
struct ABP_LinkGacha_C_EndMiniGame_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkScriptEvent
struct ABP_LinkGacha_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.StartMiniGame
struct ABP_LinkGacha_C_StartMiniGame_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.ReceiveTick
struct ABP_LinkGacha_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.ReceiveBeginPlay
struct ABP_LinkGacha_C_ReceiveBeginPlay_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.CancelMiniGame
struct ABP_LinkGacha_C_CancelMiniGame_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkFinished
struct ABP_LinkGacha_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.DecideDetectAction
struct ABP_LinkGacha_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.OnTalkStart
struct ABP_LinkGacha_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LinkGacha.BP_LinkGacha_C.Screen_Player
struct ABP_LinkGacha_C_Screen_Player_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.Screen_NPC
struct ABP_LinkGacha_C_Screen_NPC_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.Event_EndMiniGameByDispacher
struct ABP_LinkGacha_C_Event_EndMiniGameByDispacher_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.Event_BindLinkEndMiniGame
struct ABP_LinkGacha_C_Event_BindLinkEndMiniGame_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.FinalizeTalk
struct ABP_LinkGacha_C_FinalizeTalk_Params
{
};

// Function BP_LinkGacha.BP_LinkGacha_C.ExecuteUbergraph_BP_LinkGacha
struct ABP_LinkGacha_C_ExecuteUbergraph_BP_LinkGacha_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
