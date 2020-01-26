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

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.IsItemSet
struct Uwgt_S3ItemListViewerWindow_C_IsItemSet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetVisible
struct Uwgt_S3ItemListViewerWindow_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCursorVisibility
struct Uwgt_S3ItemListViewerWindow_C_SetCursorVisibility_Params
{
	bool                                               SelectCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemListMenuType                                MenuType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDialog;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCursor_ItemSetRightWindow
struct Uwgt_S3ItemListViewerWindow_C_SetCursor_ItemSetRightWindow_Params
{
	int                                                Row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.DescriptionWindowVisibility
struct Uwgt_S3ItemListViewerWindow_C_DescriptionWindowVisibility_Params
{
	TEnumAsByte<EN_Inventory_CategoryType>             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.InputAxis_Left
struct Uwgt_S3ItemListViewerWindow_C_InputAxis_Left_Params
{
	float                                              AxisiValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.EndViewMode
struct Uwgt_S3ItemListViewerWindow_C_EndViewMode_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.StartViewMode
struct Uwgt_S3ItemListViewerWindow_C_StartViewMode_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetHealthBarVisibility
struct Uwgt_S3ItemListViewerWindow_C_SetHealthBarVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.GetItemMesh
struct Uwgt_S3ItemListViewerWindow_C_GetItemMesh_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetItemCursor
struct Uwgt_S3ItemListViewerWindow_C_SetItemCursor_Params
{
	int                                                X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.GetRowColumn
struct Uwgt_S3ItemListViewerWindow_C_GetRowColumn_Params
{
	int                                                Row;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SelectedCategory
struct Uwgt_S3ItemListViewerWindow_C_SelectedCategory_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.UpdRowColumn
struct Uwgt_S3ItemListViewerWindow_C_UpdRowColumn_Params
{
	int                                                col;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCurPos
struct Uwgt_S3ItemListViewerWindow_C_SetCurPos_Params
{
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.AddCategoryLine
struct Uwgt_S3ItemListViewerWindow_C_AddCategoryLine_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ResetSelectItemList
struct Uwgt_S3ItemListViewerWindow_C_ResetSelectItemList_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetDispSelectItem
struct Uwgt_S3ItemListViewerWindow_C_SetDispSelectItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.AddCategory
struct Uwgt_S3ItemListViewerWindow_C_AddCategory_Params
{
	struct FString                                     name_jp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     name_eng;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FColor                                      str_color;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetPageCurrent
struct Uwgt_S3ItemListViewerWindow_C_SetPageCurrent_Params
{
	int                                                Now;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetPageMax
struct Uwgt_S3ItemListViewerWindow_C_SetPageMax_Params
{
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PrevScroll
struct Uwgt_S3ItemListViewerWindow_C_PrevScroll_Params
{
	float                                              NextScrollVal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.NextScroll
struct Uwgt_S3ItemListViewerWindow_C_NextScroll_Params
{
	float                                              NextScrollVal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PlayCloseAnime
struct Uwgt_S3ItemListViewerWindow_C_PlayCloseAnime_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PlayOpenAnime
struct Uwgt_S3ItemListViewerWindow_C_PlayOpenAnime_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PreConstruct
struct Uwgt_S3ItemListViewerWindow_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.Construct
struct Uwgt_S3ItemListViewerWindow_C_Construct_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.Tick
struct Uwgt_S3ItemListViewerWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3ItemListViewerWindow_C_BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3ItemListViewerWindow_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Start_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3ItemListViewerWindow_C_BndEvt__Start_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ExecuteUbergraph_wgt_S3ItemListViewerWindow
struct Uwgt_S3ItemListViewerWindow_C_ExecuteUbergraph_wgt_S3ItemListViewerWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ED_StartAnim__DelegateSignature
struct Uwgt_S3ItemListViewerWindow_C_ED_StartAnim__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
