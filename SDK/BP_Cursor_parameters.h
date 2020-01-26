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

// Function BP_Cursor.BP_Cursor_C.PlaySelectAnim
struct ABP_Cursor_C_PlaySelectAnim_Params
{
	float                                              AnimTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Cursor.BP_Cursor_C.UserConstructionScript
struct ABP_Cursor_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
