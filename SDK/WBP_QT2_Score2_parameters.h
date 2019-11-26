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

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetEnabled
struct AWBP_QT2_Score2_C_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.GetTextArray
struct AWBP_QT2_Score2_C_GetTextArray_Params
{
	TArray<class UTextBlock*>                          Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.Set Text New
struct AWBP_QT2_Score2_C_Set_Text_New_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetVisibleScore
struct AWBP_QT2_Score2_C_SetVisibleScore_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetVisibleText
struct AWBP_QT2_Score2_C_SetVisibleText_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetText
struct AWBP_QT2_Score2_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NotNumber;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.UserConstructionScript
struct AWBP_QT2_Score2_C_UserConstructionScript_Params
{
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.ReceiveBeginPlay
struct AWBP_QT2_Score2_C_ReceiveBeginPlay_Params
{
};

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.ExecuteUbergraph_WBP_QT2_Score2
struct AWBP_QT2_Score2_C_ExecuteUbergraph_WBP_QT2_Score2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
