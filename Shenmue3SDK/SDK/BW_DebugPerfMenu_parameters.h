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

// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.BuildMenu
struct UBW_DebugPerfMenu_C_BuildMenu_Params
{
};

// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.SetInitialFocus
struct UBW_DebugPerfMenu_C_SetInitialFocus_Params
{
};

// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.OnLevelClicked
struct UBW_DebugPerfMenu_C_OnLevelClicked_Params
{
	class ULevelStreaming*                             Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.ExecuteUbergraph_BW_DebugPerfMenu
struct UBW_DebugPerfMenu_C_ExecuteUbergraph_BW_DebugPerfMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
