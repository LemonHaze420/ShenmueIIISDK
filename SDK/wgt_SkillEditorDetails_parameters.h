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

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetSkillLibrary
struct Uwgt_SkillEditorDetails_C_SetSkillLibrary_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDefaultFrameVisible
struct Uwgt_SkillEditorDetails_C_SetDefaultFrameVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDescriptionText
struct Uwgt_SkillEditorDetails_C_SetDescriptionText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetItem_TableIndex
struct Uwgt_SkillEditorDetails_C_SetItem_TableIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.Construct
struct Uwgt_SkillEditorDetails_C_Construct_Params
{
};

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.PreConstruct
struct Uwgt_SkillEditorDetails_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.ExecuteUbergraph_wgt_SkillEditorDetails
struct Uwgt_SkillEditorDetails_C_ExecuteUbergraph_wgt_SkillEditorDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
