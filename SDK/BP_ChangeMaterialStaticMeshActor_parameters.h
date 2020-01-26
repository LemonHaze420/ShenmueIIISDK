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

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeMaterial
struct ABP_ChangeMaterialStaticMeshActor_C_ChangeMaterial_Params
{
};

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.CheckTimeEvent
struct ABP_ChangeMaterialStaticMeshActor_C_CheckTimeEvent_Params
{
};

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.UserConstructionScript
struct ABP_ChangeMaterialStaticMeshActor_C_UserConstructionScript_Params
{
};

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveBeginPlay
struct ABP_ChangeMaterialStaticMeshActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeTimeEvent
struct ABP_ChangeMaterialStaticMeshActor_C_ChangeTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveEndPlay
struct ABP_ChangeMaterialStaticMeshActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveTick
struct ABP_ChangeMaterialStaticMeshActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor
struct ABP_ChangeMaterialStaticMeshActor_C_ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
