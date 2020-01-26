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

// Function wgt_FishingRodList.wgt_FishingRodList_C.DestroyCaptureItem
struct Uwgt_FishingRodList_C_DestroyCaptureItem_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.SetItemCapture
struct Uwgt_FishingRodList_C_SetItemCapture_Params
{
	struct FString                                     RodId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LureID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.SetPayButtonVisible
struct Uwgt_FishingRodList_C_SetPayButtonVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.PagePrev
struct Uwgt_FishingRodList_C_PagePrev_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.PageNext
struct Uwgt_FishingRodList_C_PageNext_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.ResetDialog
struct Uwgt_FishingRodList_C_ResetDialog_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.PushDialogLeft
struct Uwgt_FishingRodList_C_PushDialogLeft_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.PushDialogRight
struct Uwgt_FishingRodList_C_PushDialogRight_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.Construct
struct Uwgt_FishingRodList_C_Construct_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.Tick
struct Uwgt_FishingRodList_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.FinishMeshLoad
struct Uwgt_FishingRodList_C_FinishMeshLoad_Params
{
};

// Function wgt_FishingRodList.wgt_FishingRodList_C.ExecuteUbergraph_wgt_FishingRodList
struct Uwgt_FishingRodList_C_ExecuteUbergraph_wgt_FishingRodList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
