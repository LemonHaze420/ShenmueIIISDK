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

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetFontSize
struct Uwgt_MemoPageBase_C_SetFontSize_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  PlaceNameText;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetPageIndex
struct Uwgt_MemoPageBase_C_SetPageIndex_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.Construct
struct Uwgt_MemoPageBase_C_Construct_Params
{
};

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetSlotContent
struct Uwgt_MemoPageBase_C_SetSlotContent_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3MemopadTextWidget*                        Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetSlotHiddenFlag
struct Uwgt_MemoPageBase_C_SetSlotHiddenFlag_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.ExecuteUbergraph_wgt_MemoPageBase
struct Uwgt_MemoPageBase_C_ExecuteUbergraph_wgt_MemoPageBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.ED_LoadFinish__DelegateSignature
struct Uwgt_MemoPageBase_C_ED_LoadFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
