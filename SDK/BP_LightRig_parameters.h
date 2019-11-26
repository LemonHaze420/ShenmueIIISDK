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

// Function BP_LightRig.BP_LightRig_C.GetMainLightIntensity
struct ABP_LightRig_C_GetMainLightIntensity_Params
{
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.ClampShadowBias
struct ABP_LightRig_C_ClampShadowBias_Params
{
};

// Function BP_LightRig.BP_LightRig_C.CreateDMI
struct ABP_LightRig_C_CreateDMI_Params
{
	class UPrimitiveComponent*                         StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.PreviewLights
struct ABP_LightRig_C_PreviewLights_Params
{
	bool                                               bPreviewLightsInEditor;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.MakeEdgeLightArrays
struct ABP_LightRig_C_MakeEdgeLightArrays_Params
{
};

// Function BP_LightRig.BP_LightRig_C.IsEdgeLightInUse
struct ABP_LightRig_C_IsEdgeLightInUse_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Use;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.PrintEdgeDebugInfo
struct ABP_LightRig_C_PrintEdgeDebugInfo_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.MakeArrayStartPointLocation
struct ABP_LightRig_C_MakeArrayStartPointLocation_Params
{
	float                                              Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LightCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.CreateEdgeLights
struct ABP_LightRig_C_CreateEdgeLights_Params
{
};

// Function BP_LightRig.BP_LightRig_C.SetNewEdgeLightZHeight
struct ABP_LightRig_C_SetNewEdgeLightZHeight_Params
{
	struct FTransform                                  InputTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  OutputTransform;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.UseCeilingHeightForEdgeLightTransforms
struct ABP_LightRig_C_UseCeilingHeightForEdgeLightTransforms_Params
{
};

// Function BP_LightRig.BP_LightRig_C.AddMidFillLights
struct ABP_LightRig_C_AddMidFillLights_Params
{
};

// Function BP_LightRig.BP_LightRig_C.AddCentreMesh
struct ABP_LightRig_C_AddCentreMesh_Params
{
};

// Function BP_LightRig.BP_LightRig_C.UserConstructionScript
struct ABP_LightRig_C_UserConstructionScript_Params
{
};

// Function BP_LightRig.BP_LightRig_C.ReceiveBeginPlay
struct ABP_LightRig_C_ReceiveBeginPlay_Params
{
};

// Function BP_LightRig.BP_LightRig_C.ReceiveTick
struct ABP_LightRig_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.OnSetLightEnable
struct ABP_LightRig_C_OnSetLightEnable_Params
{
	bool                                               bNewLightEnable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightRig.BP_LightRig_C.UpdateIntensityRate
struct ABP_LightRig_C_UpdateIntensityRate_Params
{
};

// Function BP_LightRig.BP_LightRig_C.InitialDisable
struct ABP_LightRig_C_InitialDisable_Params
{
};

// Function BP_LightRig.BP_LightRig_C.ExecuteUbergraph_BP_LightRig
struct ABP_LightRig_C_ExecuteUbergraph_BP_LightRig_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
