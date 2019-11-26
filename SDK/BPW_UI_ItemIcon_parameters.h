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

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetSelectSellItem
struct UBPW_UI_ItemIcon_C_GetSelectSellItem_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_SelectSellItem                          SelectSellItem;                                           // (Parm, OutParm)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ResetSelectSellItem
struct UBPW_UI_ItemIcon_C_ResetSelectSellItem_Params
{
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.CalcHaveItemNum
struct UBPW_UI_ItemIcon_C_CalcHaveItemNum_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HaveItemNum;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSelectSellItem
struct UBPW_UI_ItemIcon_C_SetSelectSellItem_Params
{
	struct FST_SelectSellItem                          SelectSellItemID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetSkillImage
struct UBPW_UI_ItemIcon_C_SetSkillImage_Params
{
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetImageBrightness
struct UBPW_UI_ItemIcon_C_SetImageBrightness_Params
{
	bool                                               IsBright;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetFrameType
struct UBPW_UI_ItemIcon_C_SetFrameType_Params
{
	TEnumAsByte<EN_IconFramePos>                       newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ItemImageLight
struct UBPW_UI_ItemIcon_C_ItemImageLight_Params
{
	bool                                               IsLight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemNum
struct UBPW_UI_ItemIcon_C_GetItemNum_Params
{
	int                                                ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetNum
struct UBPW_UI_ItemIcon_C_SetNum_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PageNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.GetItemID
struct UBPW_UI_ItemIcon_C_GetItemID_Params
{
	int                                                ItemId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.IconVisibility
struct UBPW_UI_ItemIcon_C_IconVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PropotionIconSize
struct UBPW_UI_ItemIcon_C_PropotionIconSize_Params
{
	float                                              ItemIconSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.FocusIcon
struct UBPW_UI_ItemIcon_C_FocusIcon_Params
{
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.SetIcon
struct UBPW_UI_ItemIcon_C_SetIcon_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ProportionFontSize
struct UBPW_UI_ItemIcon_C_ProportionFontSize_Params
{
	float                                              ItemIconSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.Construct
struct UBPW_UI_ItemIcon_C_Construct_Params
{
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.PreConstruct
struct UBPW_UI_ItemIcon_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_ItemIcon.BPW_UI_ItemIcon_C.ExecuteUbergraph_BPW_UI_ItemIcon
struct UBPW_UI_ItemIcon_C_ExecuteUbergraph_BPW_UI_ItemIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
