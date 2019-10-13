#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayoutStringLen
struct Uwgt_BattleSkillDisplay_C_RefreshLayoutStringLen_Params
{
	int                                                StrLen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Threshold;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayout
struct Uwgt_BattleSkillDisplay_C_RefreshLayout_Params
{
	int                                                Layout;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ReanchorWidget
struct Uwgt_BattleSkillDisplay_C_ReanchorWidget_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAnchorData                                 AnchorData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetLayout
struct Uwgt_BattleSkillDisplay_C_SetLayout_Params
{
	int                                                LayoutType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.CacheWidgetAchorData
struct Uwgt_BattleSkillDisplay_C_CacheWidgetAchorData_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAnchorData                                 AnchorData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.GetActiveSkillLibrary
struct Uwgt_BattleSkillDisplay_C_GetActiveSkillLibrary_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillLibrary
struct Uwgt_BattleSkillDisplay_C_SetSkillLibrary_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ShowSkillLevel
struct Uwgt_BattleSkillDisplay_C_ShowSkillLevel_Params
{
	struct FName                                       Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillLevel
struct Uwgt_BattleSkillDisplay_C_SetSkillLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NextProgress;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkill
struct Uwgt_BattleSkillDisplay_C_SetSkill_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SkillName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillName
struct Uwgt_BattleSkillDisplay_C_SetSkillName_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	ES3Locale                                          Language;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ShowSkillCommand
struct Uwgt_BattleSkillDisplay_C_ShowSkillCommand_Params
{
	struct FName                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetRenderTex
struct Uwgt_BattleSkillDisplay_C_SetRenderTex_Params
{
	class UTextureRenderTarget2D*                      RenderTex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.StopMotion
struct Uwgt_BattleSkillDisplay_C_StopMotion_Params
{
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PlayItemMotion
struct Uwgt_BattleSkillDisplay_C_PlayItemMotion_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Construct
struct Uwgt_BattleSkillDisplay_C_Construct_Params
{
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Destruct
struct Uwgt_BattleSkillDisplay_C_Destruct_Params
{
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PreConstruct
struct Uwgt_BattleSkillDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ExecuteUbergraph_wgt_BattleSkillDisplay
struct Uwgt_BattleSkillDisplay_C_ExecuteUbergraph_wgt_BattleSkillDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
