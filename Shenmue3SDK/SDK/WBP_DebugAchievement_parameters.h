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

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.SetFocusToTypeSelector
struct UWBP_DebugAchievement_C_SetFocusToTypeSelector_Params
{
};

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.UpdateFocus
struct UWBP_DebugAchievement_C_UpdateFocus_Params
{
};

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.SetFocusToItem
struct UWBP_DebugAchievement_C_SetFocusToItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.OnPreviewKeyDown
struct UWBP_DebugAchievement_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.BuildAchievementList
struct UWBP_DebugAchievement_C_BuildAchievementList_Params
{
};

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.Construct
struct UWBP_DebugAchievement_C_Construct_Params
{
};

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.PropertyChanged
struct UWBP_DebugAchievement_C_PropertyChanged_Params
{
};

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.ExecuteUbergraph_WBP_DebugAchievement
struct UWBP_DebugAchievement_C_ExecuteUbergraph_WBP_DebugAchievement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
