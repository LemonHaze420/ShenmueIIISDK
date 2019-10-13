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

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetNextAvailableWaitPointIndex
struct ANPC_SplineMoveActor_C_GetNextAvailableWaitPointIndex_Params
{
	int                                                StartSearch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetFirstAvailableWaitPointIndex
struct ANPC_SplineMoveActor_C_GetFirstAvailableWaitPointIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetStartLocationAndRotation
struct ANPC_SplineMoveActor_C_GetStartLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.TryStartWaitPointEvent
struct ANPC_SplineMoveActor_C_TryStartWaitPointEvent_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWaitPointActor
struct ANPC_SplineMoveActor_C_GetWaitPointActor_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_NPCLeadWaitPointEvent_C*                 Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWidthAtSplineDistance
struct ANPC_SplineMoveActor_C_GetWidthAtSplineDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetWaitPointSplineDistance
struct ANPC_SplineMoveActor_C_GetWaitPointSplineDistance_Params
{
	int                                                PointIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Next;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetLocationAtDistance
struct ANPC_SplineMoveActor_C_GetLocationAtDistance_Params
{
	float                                              InDistance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.FindDistanceClosestToLocation
struct ANPC_SplineMoveActor_C_FindDistanceClosestToLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              OutDistance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetNearLength
struct ANPC_SplineMoveActor_C_GetNearLength_Params
{
	struct FVector                                     pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NearPos;                                                  // (Parm, OutParm, IsPlainOldData)
	float                                              NearLength;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.InitSplinePoint
struct ANPC_SplineMoveActor_C_InitSplinePoint_Params
{
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.GetCurrentLocationAndRotation
struct ANPC_SplineMoveActor_C_GetCurrentLocationAndRotation_Params
{
	float                                              NowLength;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              MaxLength;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RotZ;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_SplineMoveActor.NPC_SplineMoveActor_C.UserConstructionScript
struct ANPC_SplineMoveActor_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
