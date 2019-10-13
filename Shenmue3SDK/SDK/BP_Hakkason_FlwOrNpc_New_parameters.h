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

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet_C
struct ABP_Hakkason_FlwOrNpc_New_C_ExspPosSet_C_Params
{
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.CheckSHEDoor
struct ABP_Hakkason_FlwOrNpc_New_C_CheckSHEDoor_Params
{
	bool                                               UsePlayer;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DoorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet_B
struct ABP_Hakkason_FlwOrNpc_New_C_ExspPosSet_B_Params
{
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet
struct ABP_Hakkason_FlwOrNpc_New_C_ExspPosSet_Params
{
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.InitSet
struct ABP_Hakkason_FlwOrNpc_New_C_InitSet_Params
{
	class UPrimitiveComponent*                         Door1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Door2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         JoinTrigger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ParentSheSeparation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.UserConstructionScript
struct ABP_Hakkason_FlwOrNpc_New_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnBeginOverlap
struct ABP_Hakkason_FlwOrNpc_New_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnEndOverlap
struct ABP_Hakkason_FlwOrNpc_New_C_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ReceiveTick
struct ABP_Hakkason_FlwOrNpc_New_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.RenewalActorCount
struct ABP_Hakkason_FlwOrNpc_New_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.TickChangeCheckKill
struct ABP_Hakkason_FlwOrNpc_New_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnBeginOverLap_JoinTrigger
struct ABP_Hakkason_FlwOrNpc_New_C_OnBeginOverLap_JoinTrigger_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnEndOverlap_JoinTrigger
struct ABP_Hakkason_FlwOrNpc_New_C_OnEndOverlap_JoinTrigger_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExecuteUbergraph_BP_Hakkason_FlwOrNpc_New
struct ABP_Hakkason_FlwOrNpc_New_C_ExecuteUbergraph_BP_Hakkason_FlwOrNpc_New_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
