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

// Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.UpdateText
struct UWBP_DebugCutscenePlayAreaID_C_UpdateText_Params
{
};

// Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.SetCutsceneID
struct UWBP_DebugCutscenePlayAreaID_C_SetCutsceneID_Params
{
	struct FName                                       InCutsceneID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
