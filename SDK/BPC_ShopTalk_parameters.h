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

// Function BPC_ShopTalk.BPC_ShopTalk_C.GetStartTalkActionType
struct UBPC_ShopTalk_C_GetStartTalkActionType_Params
{
	bool                                               bCanTalk;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3DetectActionParam                        Params;                                                   // (Parm, OutParm)
};

// Function BPC_ShopTalk.BPC_ShopTalk_C.getActionType
struct UBPC_ShopTalk_C_getActionType_Params
{
	bool                                               Sight;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3DetectActionParam>                Params;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_ShopTalk.BPC_ShopTalk_C.DecideDetectAction
struct UBPC_ShopTalk_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ShopTalk.BPC_ShopTalk_C.ExecuteUbergraph_BPC_ShopTalk
struct UBPC_ShopTalk_C_ExecuteUbergraph_BPC_ShopTalk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
