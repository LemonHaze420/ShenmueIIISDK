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

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushRightButton
struct UBPW_UI_Config_Window_C_PushRightButton_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.PushLeftRightCursor
struct UBPW_UI_Config_Window_C_PushLeftRightCursor_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.InitChoiceList
struct UBPW_UI_Config_Window_C_InitChoiceList_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ChoiceList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.SetConfigName
struct UBPW_UI_Config_Window_C_SetConfigName_Params
{
	TArray<struct FString>                             NameList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.FocusButtonIndex
struct UBPW_UI_Config_Window_C_FocusButtonIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.Construct
struct UBPW_UI_Config_Window_C_Construct_Params
{
};

// Function BPW_UI_Config_Window.BPW_UI_Config_Window_C.ExecuteUbergraph_BPW_UI_Config_Window
struct UBPW_UI_Config_Window_C_ExecuteUbergraph_BPW_UI_Config_Window_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
