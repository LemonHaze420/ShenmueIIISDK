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

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.GetAreaId
struct UBPW_SaveLoadWindow_C_GetAreaId_Params
{
	class US3SaveGame*                                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaId;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.LoadAllData
struct UBPW_SaveLoadWindow_C_LoadAllData_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.OverrideData
struct UBPW_SaveLoadWindow_C_OverrideData_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Get New Date Time
struct UBPW_SaveLoadWindow_C_Get_New_Date_Time_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   New_Date_Time;                                            // (Parm, OutParm)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Select
struct UBPW_SaveLoadWindow_C_Select_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Scroll
struct UBPW_SaveLoadWindow_C_Scroll_Params
{
	float                                              Scroll;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Finish
struct UBPW_SaveLoadWindow_C_Finish_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Decide
struct UBPW_SaveLoadWindow_C_Decide_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.PushCursor
struct UBPW_SaveLoadWindow_C_PushCursor_Params
{
	struct FKey                                        B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.FocusData
struct UBPW_SaveLoadWindow_C_FocusData_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.MakeDataWidget
struct UBPW_SaveLoadWindow_C_MakeDataWidget_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.AddLoadData
struct UBPW_SaveLoadWindow_C_AddLoadData_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3SaveGame*                                 Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.OnPreviewKeyDown
struct UBPW_SaveLoadWindow_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.DownPush
struct UBPW_SaveLoadWindow_C_DownPush_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.UpPush
struct UBPW_SaveLoadWindow_C_UpPush_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.RightButton
struct UBPW_SaveLoadWindow_C_RightButton_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.DownButton
struct UBPW_SaveLoadWindow_C_DownButton_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ScrollDealy
struct UBPW_SaveLoadWindow_C_ScrollDealy_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Construct
struct UBPW_SaveLoadWindow_C_Construct_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.WheleMouse
struct UBPW_SaveLoadWindow_C_WheleMouse_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.Tick
struct UBPW_SaveLoadWindow_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.CloseDialog
struct UBPW_SaveLoadWindow_C_CloseDialog_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.SelectSaveLoad
struct UBPW_SaveLoadWindow_C_SelectSaveLoad_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.CancelSaveLoad
struct UBPW_SaveLoadWindow_C_CancelSaveLoad_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.FinishSave
struct UBPW_SaveLoadWindow_C_FinishSave_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ExecuteUbergraph_BPW_SaveLoadWindow
struct UBPW_SaveLoadWindow_C_ExecuteUbergraph_BPW_SaveLoadWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_Finish__DelegateSignature
struct UBPW_SaveLoadWindow_C_ED_Finish__DelegateSignature_Params
{
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_SelectMouse__DelegateSignature
struct UBPW_SaveLoadWindow_C_ED_SelectMouse__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SaveLoadWindow.BPW_SaveLoadWindow_C.ED_ForcusMous__DelegateSignature
struct UBPW_SaveLoadWindow_C_ED_ForcusMous__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
