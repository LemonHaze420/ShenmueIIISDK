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

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.GetDataString
struct UBPW_UI_GeneralWindow_C_GetDataString_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.CenterButton
struct UBPW_UI_GeneralWindow_C_CenterButton_Params
{
	bool                                               RightButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetupButton
struct UBPW_UI_GeneralWindow_C_SetupButton_Params
{
	struct FST_GeneralWindow_Button                    Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.SetData
struct UBPW_UI_GeneralWindow_C_SetData_Params
{
};

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.PreConstruct
struct UBPW_UI_GeneralWindow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.Construct
struct UBPW_UI_GeneralWindow_C_Construct_Params
{
};

// Function BPW_UI_GeneralWindow.BPW_UI_GeneralWindow_C.ExecuteUbergraph_BPW_UI_GeneralWindow
struct UBPW_UI_GeneralWindow_C_ExecuteUbergraph_BPW_UI_GeneralWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
