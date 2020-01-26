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

// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.SetItemData
struct ABP_ItemViewer_ViewItem_C_SetItemData_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.UserConstructionScript
struct ABP_ItemViewer_ViewItem_C_UserConstructionScript_Params
{
};

// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ReceiveTick
struct ABP_ItemViewer_ViewItem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ExecuteUbergraph_BP_ItemViewer_ViewItem
struct ABP_ItemViewer_ViewItem_C_ExecuteUbergraph_BP_ItemViewer_ViewItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
