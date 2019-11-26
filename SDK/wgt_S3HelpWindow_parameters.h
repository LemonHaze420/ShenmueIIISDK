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

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AllReset
struct Uwgt_S3HelpWindow_C_AllReset_Params
{
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddPage
struct Uwgt_S3HelpWindow_C_AddPage_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddImg
struct Uwgt_S3HelpWindow_C_AddImg_Params
{
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.AddCategory
struct Uwgt_S3HelpWindow_C_AddCategory_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Last;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetScroll
struct Uwgt_S3HelpWindow_C_SetScroll_Params
{
	int                                                SelectCategoryIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ChgHelpImage
struct Uwgt_S3HelpWindow_C_ChgHelpImage_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PrevScroll
struct Uwgt_S3HelpWindow_C_PrevScroll_Params
{
	float                                              NextScrollVal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectCategoryIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.NextScroll
struct Uwgt_S3HelpWindow_C_NextScroll_Params
{
	float                                              NextScrollVal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectCategoryIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayCloseAnime
struct Uwgt_S3HelpWindow_C_PlayCloseAnime_Params
{
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.PlayOpenAnime
struct Uwgt_S3HelpWindow_C_PlayOpenAnime_Params
{
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.OnLoaded_6E1564824F630812B0409FA66A36D2DC
struct Uwgt_S3HelpWindow_C_OnLoaded_6E1564824F630812B0409FA66A36D2DC_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Construct
struct Uwgt_S3HelpWindow_C_Construct_Params
{
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.Tick
struct Uwgt_S3HelpWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3HelpWindow_C_BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3HelpWindow_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.SetTexture
struct Uwgt_S3HelpWindow_C_SetTexture_Params
{
};

// Function wgt_S3HelpWindow.wgt_S3HelpWindow_C.ExecuteUbergraph_wgt_S3HelpWindow
struct Uwgt_S3HelpWindow_C_ExecuteUbergraph_wgt_S3HelpWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
