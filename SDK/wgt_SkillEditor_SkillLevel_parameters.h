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

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetLevelData
struct Uwgt_SkillEditor_SkillLevel_C_SetLevelData_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelChanged;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ProgressChanged;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.RefreshLevel
struct Uwgt_SkillEditor_SkillLevel_C_RefreshLevel_Params
{
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetMasterLevel
struct Uwgt_SkillEditor_SkillLevel_C_SetMasterLevel_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.IsMasterLevel
struct Uwgt_SkillEditor_SkillLevel_C_IsMasterLevel_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.PlayLevelUpAnimation
struct Uwgt_SkillEditor_SkillLevel_C_PlayLevelUpAnimation_Params
{
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetLevel
struct Uwgt_SkillEditor_SkillLevel_C_SetLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelChanged;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.SetFillRatio
struct Uwgt_SkillEditor_SkillLevel_C_SetFillRatio_Params
{
	float                                              FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.Construct
struct Uwgt_SkillEditor_SkillLevel_C_Construct_Params
{
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.Tick
struct Uwgt_SkillEditor_SkillLevel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.PreConstruct
struct Uwgt_SkillEditor_SkillLevel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SkillLevel.wgt_SkillEditor_SkillLevel_C.ExecuteUbergraph_wgt_SkillEditor_SkillLevel
struct Uwgt_SkillEditor_SkillLevel_C_ExecuteUbergraph_wgt_SkillEditor_SkillLevel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
