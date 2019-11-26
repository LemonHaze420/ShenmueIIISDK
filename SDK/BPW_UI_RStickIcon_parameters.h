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

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.IsVisibleIcon
struct UBPW_UI_RStickIcon_C_IsVisibleIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPosCenter
struct UBPW_UI_RStickIcon_C_SetPosCenter_Params
{
};

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPosRight
struct UBPW_UI_RStickIcon_C_SetPosRight_Params
{
};

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetPos
struct UBPW_UI_RStickIcon_C_SetPos_Params
{
	struct FVector2D                                   InPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.SetVisible
struct UBPW_UI_RStickIcon_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.Construct
struct UBPW_UI_RStickIcon_C_Construct_Params
{
};

// Function BPW_UI_RStickIcon.BPW_UI_RStickIcon_C.ExecuteUbergraph_BPW_UI_RStickIcon
struct UBPW_UI_RStickIcon_C_ExecuteUbergraph_BPW_UI_RStickIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
