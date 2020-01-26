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

// Function WBP_BtlRetry.WBP_BtlRetry_C.SetTextByLabel
struct UWBP_BtlRetry_C_SetTextByLabel_Params
{
	class UTextBlock*                                  TextWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.SetImageVisibilty
struct UWBP_BtlRetry_C_SetImageVisibilty_Params
{
	struct FName                                       TextID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.SetAllOpacity
struct UWBP_BtlRetry_C_SetAllOpacity_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.PushEvent
struct UWBP_BtlRetry_C_PushEvent_Params
{
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.ChangeLocationText
struct UWBP_BtlRetry_C_ChangeLocationText_Params
{
	struct FName                                       UI_Text_ID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.GetTargetText
struct UWBP_BtlRetry_C_GetTargetText_Params
{
	struct FName                                       UI_Text_ID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TargetText;                                               // (Parm, OutParm)
	bool                                               Null_Error;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.ChangeText
struct UWBP_BtlRetry_C_ChangeText_Params
{
	struct FName                                       UI_Text_ID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.Construct
struct UWBP_BtlRetry_C_Construct_Params
{
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.Tick
struct UWBP_BtlRetry_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.PreConstruct
struct UWBP_BtlRetry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BtlRetry.WBP_BtlRetry_C.ExecuteUbergraph_WBP_BtlRetry
struct UWBP_BtlRetry_C_ExecuteUbergraph_WBP_BtlRetry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
