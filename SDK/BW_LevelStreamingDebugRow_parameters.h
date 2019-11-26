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

// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LoadTimeWidget_Text
struct UBW_LevelStreamingDebugRow_C_Get_LoadTimeWidget_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_VisibilityTime_Text
struct UBW_LevelStreamingDebugRow_C_Get_VisibilityTime_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LevelName_Text
struct UBW_LevelStreamingDebugRow_C_Get_LevelName_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_LevelStreamingDebugRow.BW_LevelStreamingDebugRow_C.Get_LevelName_ColorAndOpacity
struct UBW_LevelStreamingDebugRow_C_Get_LevelName_ColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
