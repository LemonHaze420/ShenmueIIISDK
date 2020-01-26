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

// Function wgt_MemoPage_Row8_2.wgt_MemoPage_Row8_1_C.Construct
struct Uwgt_MemoPage_Row8_1_C_Construct_Params
{
};

// Function wgt_MemoPage_Row8_2.wgt_MemoPage_Row8_1_C.PushButton
struct Uwgt_MemoPage_Row8_1_C_PushButton_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function wgt_MemoPage_Row8_2.wgt_MemoPage_Row8_1_C.SetPageIndex
struct Uwgt_MemoPage_Row8_1_C_SetPageIndex_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MemoPage_Row8_2.wgt_MemoPage_Row8_1_C.ExecuteUbergraph_wgt_MemoPage_Row8_2
struct Uwgt_MemoPage_Row8_1_C_ExecuteUbergraph_wgt_MemoPage_Row8_2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
