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

// Function BPW_UI_Clock.BPW_UI_Clock_C.SetDifficultyImage
struct UBPW_UI_Clock_C_SetDifficultyImage_Params
{
	TEnumAsByte<EBattleDifficulty>                     Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Clock.BPW_UI_Clock_C.SetMaterialTime
struct UBPW_UI_Clock_C_SetMaterialTime_Params
{
	struct FDateTime                                   InDateTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_Clock.BPW_UI_Clock_C.GetForceVisibilityOperation
struct UBPW_UI_Clock_C_GetForceVisibilityOperation_Params
{
	bool                                               ForceVisibilityOperation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Clock.BPW_UI_Clock_C.SetClockVisibility
struct UBPW_UI_Clock_C_SetClockVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Clock.BPW_UI_Clock_C.SetForceVisibilityOperation
struct UBPW_UI_Clock_C_SetForceVisibilityOperation_Params
{
	bool                                               ForceOperation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Clock.BPW_UI_Clock_C.Construct
struct UBPW_UI_Clock_C_Construct_Params
{
};

// Function BPW_UI_Clock.BPW_UI_Clock_C.Tick
struct UBPW_UI_Clock_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Clock.BPW_UI_Clock_C.ExecuteUbergraph_BPW_UI_Clock
struct UBPW_UI_Clock_C_ExecuteUbergraph_BPW_UI_Clock_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
