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

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ResetScroll
struct UBPW_UI_SetExchangeIcon_C_ResetScroll_Params
{
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ScrollSetName
struct UBPW_UI_SetExchangeIcon_C_ScrollSetName_Params
{
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ChangeInventoryType
struct UBPW_UI_SetExchangeIcon_C_ChangeInventoryType_Params
{
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.CanExchange
struct UBPW_UI_SetExchangeIcon_C_CanExchange_Params
{
	bool                                               Exchange;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetItemID
struct UBPW_UI_SetExchangeIcon_C_GetItemID_Params
{
	int                                                ItemId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetName
struct UBPW_UI_SetExchangeIcon_C_GetName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.FocusIcon
struct UBPW_UI_SetExchangeIcon_C_FocusIcon_Params
{
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetDescription
struct UBPW_UI_SetExchangeIcon_C_GetDescription_Params
{
	struct FString                                     Description;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.SetData
struct UBPW_UI_SetExchangeIcon_C_SetData_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.Tick
struct UBPW_UI_SetExchangeIcon_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.PreConstruct
struct UBPW_UI_SetExchangeIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ExecuteUbergraph_BPW_UI_SetExchangeIcon
struct UBPW_UI_SetExchangeIcon_C_ExecuteUbergraph_BPW_UI_SetExchangeIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
