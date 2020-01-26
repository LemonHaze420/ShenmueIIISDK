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

// Function BPW_UI_Config.BPW_UI_Config_C.SetDiscription
struct UBPW_UI_Config_C_SetDiscription_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config.BPW_UI_Config_C.ChangeSelectButtonIcon
struct UBPW_UI_Config_C_ChangeSelectButtonIcon_Params
{
};

// Function BPW_UI_Config.BPW_UI_Config_C.PushLeftRightIndex
struct UBPW_UI_Config_C_PushLeftRightIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config.BPW_UI_Config_C.InitChoiceList
struct UBPW_UI_Config_C_InitChoiceList_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ChoiceList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_UI_Config.BPW_UI_Config_C.SetPage
struct UBPW_UI_Config_C_SetPage_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config.BPW_UI_Config_C.InitDescription
struct UBPW_UI_Config_C_InitDescription_Params
{
	TArray<struct FString>                             DescriptionList;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_UI_Config.BPW_UI_Config_C.SetConfigName
struct UBPW_UI_Config_C_SetConfigName_Params
{
	TArray<struct FString>                             NameList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_UI_Config.BPW_UI_Config_C.FocusButtonIndex
struct UBPW_UI_Config_C_FocusButtonIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config.BPW_UI_Config_C.PreConstruct
struct UBPW_UI_Config_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config.BPW_UI_Config_C.Construct
struct UBPW_UI_Config_C_Construct_Params
{
};

// Function BPW_UI_Config.BPW_UI_Config_C.ExecuteUbergraph_BPW_UI_Config
struct UBPW_UI_Config_C_ExecuteUbergraph_BPW_UI_Config_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
