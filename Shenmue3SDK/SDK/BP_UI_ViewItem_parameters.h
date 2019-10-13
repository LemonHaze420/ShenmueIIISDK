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

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ResetRotation
struct ABP_UI_ViewItem_C_ResetRotation_Params
{
};

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.SetLocation
struct ABP_UI_ViewItem_C_SetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.SetItemData
struct ABP_UI_ViewItem_C_SetItemData_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.UserConstructionScript
struct ABP_UI_ViewItem_C_UserConstructionScript_Params
{
};

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.OnLoaded_218B594649E9FBD554432E8844E18A3C
struct ABP_UI_ViewItem_C_OnLoaded_218B594649E9FBD554432E8844E18A3C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ReceiveTick
struct ABP_UI_ViewItem_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ExecuteUbergraph_BP_UI_ViewItem
struct ABP_UI_ViewItem_C_ExecuteUbergraph_BP_UI_ViewItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ED_FinishMeshLoad__DelegateSignature
struct ABP_UI_ViewItem_C_ED_FinishMeshLoad__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
