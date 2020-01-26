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

// Function BPW_SkillBar.BPW_SkillBar_C.SetTextOutlineSize
struct UBPW_SkillBar_C_SetTextOutlineSize_Params
{
	int                                                Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SkillBar.BPW_SkillBar_C.SetOutlineSize
struct UBPW_SkillBar_C_SetOutlineSize_Params
{
	class UTextBlock*                                  Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Outline_Size;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SkillBar.BPW_SkillBar_C.SetGaugeRatio
struct UBPW_SkillBar_C_SetGaugeRatio_Params
{
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SkillBar.BPW_SkillBar_C.LerpLevelUpDisplay
struct UBPW_SkillBar_C_LerpLevelUpDisplay_Params
{
	float                                              N;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SkillBar.BPW_SkillBar_C.SetLevelUpData
struct UBPW_SkillBar_C_SetLevelUpData_Params
{
	struct FST_SparringResultLevelUpData               LevelUpData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_SkillBar.BPW_SkillBar_C.ShowLevel
struct UBPW_SkillBar_C_ShowLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NextLevelRatio;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SkillBar.BPW_SkillBar_C.Construct
struct UBPW_SkillBar_C_Construct_Params
{
};

// Function BPW_SkillBar.BPW_SkillBar_C.PreConstruct
struct UBPW_SkillBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SkillBar.BPW_SkillBar_C.ExecuteUbergraph_BPW_SkillBar
struct UBPW_SkillBar_C_ExecuteUbergraph_BPW_SkillBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SkillBar.BPW_SkillBar_C.OnAnimLevelUp__DelegateSignature
struct UBPW_SkillBar_C_OnAnimLevelUp__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
