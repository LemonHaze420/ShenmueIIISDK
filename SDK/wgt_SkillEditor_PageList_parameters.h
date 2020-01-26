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

// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.Construct
struct Uwgt_SkillEditor_PageList_C_Construct_Params
{
};

// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.InitializePageCount
struct Uwgt_SkillEditor_PageList_C_InitializePageCount_Params
{
	int                                                PageMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.SetCurrentPage
struct Uwgt_SkillEditor_PageList_C_SetCurrentPage_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.EnableAnimation
struct Uwgt_SkillEditor_PageList_C_EnableAnimation_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.ExecuteUbergraph_wgt_SkillEditor_PageList
struct Uwgt_SkillEditor_PageList_C_ExecuteUbergraph_wgt_SkillEditor_PageList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
