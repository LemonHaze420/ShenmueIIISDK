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

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.UpdRotate
struct ABP_ItemListViewerItemRotateRoot_C_UpdRotate_Params
{
};

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.SetCalcSize
struct ABP_ItemListViewerItemRotateRoot_C_SetCalcSize_Params
{
	float                                              Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ChangeMesh
struct ABP_ItemListViewerItemRotateRoot_C_ChangeMesh_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             NewAnimToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.SetBaseSize
struct ABP_ItemListViewerItemRotateRoot_C_SetBaseSize_Params
{
	float                                              Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.UserConstructionScript
struct ABP_ItemListViewerItemRotateRoot_C_UserConstructionScript_Params
{
};

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ReceiveBeginPlay
struct ABP_ItemListViewerItemRotateRoot_C_ReceiveBeginPlay_Params
{
};

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ReceiveTick
struct ABP_ItemListViewerItemRotateRoot_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ExecuteUbergraph_BP_ItemListViewerItemRotateRoot
struct ABP_ItemListViewerItemRotateRoot_C_ExecuteUbergraph_BP_ItemListViewerItemRotateRoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
