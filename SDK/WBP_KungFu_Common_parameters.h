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

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetEnabledMasterImage
struct UWBP_KungFu_Common_C_SetEnabledMasterImage_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateKungFuLevelInfo
struct UWBP_KungFu_Common_C_UpdateKungFuLevelInfo_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.ChangeKungFuNameToNext
struct UWBP_KungFu_Common_C_ChangeKungFuNameToNext_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetCurrentTimeRate
struct UWBP_KungFu_Common_C_SetCurrentTimeRate_Params
{
	float                                              TimeRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Get_KungFuName_Text_1
struct UWBP_KungFu_Common_C_Get_KungFuName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetKungFuImage
struct UWBP_KungFu_Common_C_SetKungFuImage_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetArrowSettings
struct UWBP_KungFu_Common_C_SetArrowSettings_Params
{
	float                                              moveSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IntervalTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.DisabledAllArrow
struct UWBP_KungFu_Common_C_DisabledAllArrow_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.SetEnabledArrow
struct UWBP_KungFu_Common_C_SetEnabledArrow_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Up;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateImageAlpha
struct UWBP_KungFu_Common_C_UpdateImageAlpha_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TargetAlpha;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reach;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.UpdateButtonUI
struct UWBP_KungFu_Common_C_UpdateButtonUI_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.EnabledButtonIconAnim
struct UWBP_KungFu_Common_C_EnabledButtonIconAnim_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Count Check
struct UWBP_KungFu_Common_C_Count_Check_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.AddPushCount
struct UWBP_KungFu_Common_C_AddPushCount_Params
{
	int                                                AddCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Construct
struct UWBP_KungFu_Common_C_Construct_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Reset
struct UWBP_KungFu_Common_C_Reset_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Event_ChangeNextNameWithAnim
struct UWBP_KungFu_Common_C_Event_ChangeNextNameWithAnim_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Event_MaxLevelMasterdAnim
struct UWBP_KungFu_Common_C_Event_MaxLevelMasterdAnim_Params
{
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.Tick
struct UWBP_KungFu_Common_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.ExecuteUbergraph_WBP_KungFu_Common
struct UWBP_KungFu_Common_C_ExecuteUbergraph_WBP_KungFu_Common_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFu_Common.WBP_KungFu_Common_C.CountMAX__DelegateSignature
struct UWBP_KungFu_Common_C_CountMAX__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
