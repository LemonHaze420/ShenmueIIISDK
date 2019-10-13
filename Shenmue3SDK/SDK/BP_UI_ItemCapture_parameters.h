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

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ResetItemCamera
struct ABP_UI_ItemCapture_C_ResetItemCamera_Params
{
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetupInterp
struct ABP_UI_ItemCapture_C_SetupInterp_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PreLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateInterp
struct ABP_UI_ItemCapture_C_UpdateInterp_Params
{
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Left
struct ABP_UI_ItemCapture_C_InputAxis_Left_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateCamera
struct ABP_UI_ItemCapture_C_UpdateCamera_Params
{
	float                                              DeltaSEcond;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Right
struct ABP_UI_ItemCapture_C_InputAxis_Right_Params
{
	bool                                               Vertical;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetViewMode
struct ABP_UI_ItemCapture_C_SetViewMode_Params
{
	bool                                               IsViewMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetViewMesh
struct ABP_UI_ItemCapture_C_SetViewMesh_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UserConstructionScript
struct ABP_UI_ItemCapture_C_UserConstructionScript_Params
{
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveBeginPlay
struct ABP_UI_ItemCapture_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveTick
struct ABP_UI_ItemCapture_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveDestroyed
struct ABP_UI_ItemCapture_C_ReceiveDestroyed_Params
{
};

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ExecuteUbergraph_BP_UI_ItemCapture
struct ABP_UI_ItemCapture_C_ExecuteUbergraph_BP_UI_ItemCapture_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
