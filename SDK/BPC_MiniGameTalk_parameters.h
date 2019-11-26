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

// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.GetStartTalkActionType
struct UBPC_MiniGameTalk_C_GetStartTalkActionType_Params
{
	bool                                               bCanTalk;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3DetectActionParam                        Params;                                                   // (Parm, OutParm)
};

// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.getActionType
struct UBPC_MiniGameTalk_C_getActionType_Params
{
	bool                                               Sight;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3DetectActionParam>                Params;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.DecideDetectAction
struct UBPC_MiniGameTalk_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.ParseTalkScriptData
struct UBPC_MiniGameTalk_C_ParseTalkScriptData_Params
{
	class US3TalkDataListBase*                         TalkDataList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.FromExternalFunctions_MemoSet
struct UBPC_MiniGameTalk_C_FromExternalFunctions_MemoSet_Params
{
};

// Function BPC_MiniGameTalk.BPC_MiniGameTalk_C.ExecuteUbergraph_BPC_MiniGameTalk
struct UBPC_MiniGameTalk_C_ExecuteUbergraph_BPC_MiniGameTalk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
