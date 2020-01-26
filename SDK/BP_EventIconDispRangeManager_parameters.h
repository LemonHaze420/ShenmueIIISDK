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

// Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.SetEventIconDisp
struct ABP_EventIconDispRangeManager_C_SetEventIconDisp_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Invalid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.UserConstructionScript
struct ABP_EventIconDispRangeManager_C_UserConstructionScript_Params
{
};

// Function BP_EventIconDispRangeManager.BP_EventIconDispRangeManager_C.CatchEventSign__DelegateSignature
struct ABP_EventIconDispRangeManager_C_CatchEventSign__DelegateSignature_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
