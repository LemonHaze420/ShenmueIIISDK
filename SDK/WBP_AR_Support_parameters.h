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

// Function WBP_AR_Support.WBP_AR_Support_C.GetPushCountRate
struct UWBP_AR_Support_C_GetPushCountRate_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_Support.WBP_AR_Support_C.UpdateFillRatio
struct UWBP_AR_Support_C_UpdateFillRatio_Params
{
};

// Function WBP_AR_Support.WBP_AR_Support_C.ChangeButtonIcon
struct UWBP_AR_Support_C_ChangeButtonIcon_Params
{
	TEnumAsByte<EN_padSwitch>                          ButtonType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_Support.WBP_AR_Support_C.Count Check
struct UWBP_AR_Support_C_Count_Check_Params
{
};

// Function WBP_AR_Support.WBP_AR_Support_C.AddPushCount
struct UWBP_AR_Support_C_AddPushCount_Params
{
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_Support.WBP_AR_Support_C.Construct
struct UWBP_AR_Support_C_Construct_Params
{
};

// Function WBP_AR_Support.WBP_AR_Support_C.Tick
struct UWBP_AR_Support_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_Support.WBP_AR_Support_C.Reset
struct UWBP_AR_Support_C_Reset_Params
{
};

// Function WBP_AR_Support.WBP_AR_Support_C.SetEnabledSupportUI
struct UWBP_AR_Support_C_SetEnabledSupportUI_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_Support.WBP_AR_Support_C.ExecuteUbergraph_WBP_AR_Support
struct UWBP_AR_Support_C_ExecuteUbergraph_WBP_AR_Support_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_Support.WBP_AR_Support_C.CountChange__DelegateSignature
struct UWBP_AR_Support_C_CountChange__DelegateSignature_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_Support.WBP_AR_Support_C.CountMAX__DelegateSignature
struct UWBP_AR_Support_C_CountMAX__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
