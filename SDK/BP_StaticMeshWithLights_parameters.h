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

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.UserConstructionScript
struct ABP_StaticMeshWithLights_C_UserConstructionScript_Params
{
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveBeginPlay
struct ABP_StaticMeshWithLights_C_ReceiveBeginPlay_Params
{
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.DayTimeEventDispatcher_Event_1
struct ABP_StaticMeshWithLights_C_DayTimeEventDispatcher_Event_1_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.LightSourceChange
struct ABP_StaticMeshWithLights_C_LightSourceChange_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MatID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.CustomEvent_1
struct ABP_StaticMeshWithLights_C_CustomEvent_1_Params
{
	int                                                EventIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightEnable
struct ABP_StaticMeshWithLights_C_OnSetLightEnable_Params
{
	bool                                               bNewLightEnable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.OnSetLightCastShadow
struct ABP_StaticMeshWithLights_C_OnSetLightCastShadow_Params
{
	bool                                               bNewLightCastShadow;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveTick
struct ABP_StaticMeshWithLights_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ReceiveEndPlay
struct ABP_StaticMeshWithLights_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMeshWithLights.BP_StaticMeshWithLights_C.ExecuteUbergraph_BP_StaticMeshWithLights
struct ABP_StaticMeshWithLights_C_ExecuteUbergraph_BP_StaticMeshWithLights_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
