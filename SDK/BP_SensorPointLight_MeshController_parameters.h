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

// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.GetMainLightIntensity
struct ABP_SensorPointLight_MeshController_C_GetMainLightIntensity_Params
{
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.UserConstructionScript
struct ABP_SensorPointLight_MeshController_C_UserConstructionScript_Params
{
};

// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.OnSetLightEnable
struct ABP_SensorPointLight_MeshController_C_OnSetLightEnable_Params
{
	bool                                               bNewLightEnable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.UpdateIntensityRate
struct ABP_SensorPointLight_MeshController_C_UpdateIntensityRate_Params
{
};

// Function BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C.ExecuteUbergraph_BP_SensorPointLight_MeshController
struct ABP_SensorPointLight_MeshController_C_ExecuteUbergraph_BP_SensorPointLight_MeshController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
