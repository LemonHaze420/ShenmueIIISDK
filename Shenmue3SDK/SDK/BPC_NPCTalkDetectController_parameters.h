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

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsActiveMiniGameScript
struct UBPC_NPCTalkDetectController_C_IsActiveMiniGameScript_Params
{
	bool                                               MiniGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetActiveComponents
struct UBPC_NPCTalkDetectController_C_GetActiveComponents_Params
{
	TArray<class UBPC_S3_TalkComponent_C*>             TalkComponents;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ParseSubQuestControl
struct UBPC_NPCTalkDetectController_C_ParseSubQuestControl_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsEnabledDetectIcon
struct UBPC_NPCTalkDetectController_C_IsEnabledDetectIcon_Params
{
	ES3TalkType                                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.GetCurrentTalkComponent
struct UBPC_NPCTalkDetectController_C_GetCurrentTalkComponent_Params
{
	class US3TalkComponentBase*                        OutComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.FindComponent
struct UBPC_NPCTalkDetectController_C_FindComponent_Params
{
	ES3TalkType                                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3TalkComponentBase*                        Value;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.CanNPCTalk
struct UBPC_NPCTalkDetectController_C_CanNPCTalk_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.IsTalking
struct UBPC_NPCTalkDetectController_C_IsTalking_Params
{
	bool                                               bTalking;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.getActionType
struct UBPC_NPCTalkDetectController_C_getActionType_Params
{
	TArray<struct FS3DetectActionParam>                Params;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.RegisterTalkComponent
struct UBPC_NPCTalkDetectController_C_RegisterTalkComponent_Params
{
	ES3TalkType                                        TalkType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3TalkComponentBase*                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.OnStart
struct UBPC_NPCTalkDetectController_C_OnStart_Params
{
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.OnFinished
struct UBPC_NPCTalkDetectController_C_OnFinished_Params
{
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ReceiveBeginPlay
struct UBPC_NPCTalkDetectController_C_ReceiveBeginPlay_Params
{
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.DecideDetectAction
struct UBPC_NPCTalkDetectController_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCTalkDetectController.BPC_NPCTalkDetectController_C.ExecuteUbergraph_BPC_NPCTalkDetectController
struct UBPC_NPCTalkDetectController_C_ExecuteUbergraph_BPC_NPCTalkDetectController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
