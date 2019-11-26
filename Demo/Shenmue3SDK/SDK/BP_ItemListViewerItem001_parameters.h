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

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.CalcBaseSize
struct ABP_ItemListViewerItem001_C_CalcBaseSize_Params
{
};

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ChangeItem
struct ABP_ItemListViewerItem001_C_ChangeItem_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             NewAnimToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.UserConstructionScript
struct ABP_ItemListViewerItem001_C_UserConstructionScript_Params
{
};

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveBeginPlay
struct ABP_ItemListViewerItem001_C_ReceiveBeginPlay_Params
{
};

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveTick
struct ABP_ItemListViewerItem001_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveDestroyed
struct ABP_ItemListViewerItem001_C_ReceiveDestroyed_Params
{
};

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ExecuteUbergraph_BP_ItemListViewerItem001
struct ABP_ItemListViewerItem001_C_ExecuteUbergraph_BP_ItemListViewerItem001_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
