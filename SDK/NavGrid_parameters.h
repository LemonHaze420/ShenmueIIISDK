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

// Function NavGrid.NG_GridComponent.SetNodeRelativeLocation
struct UNG_GridComponent_SetNodeRelativeLocation_Params
{
	int                                                NodeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bValidLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.PreallocateNodes
struct UNG_GridComponent_PreallocateNodes_Params
{
	int                                                iNbNodes;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.GenerateLocalSpacePathTriangles
struct UNG_GridComponent_GenerateLocalSpacePathTriangles_Params
{
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Path;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     VisualisationUpOffset;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelativeStart;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelativeGoal;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.GenerateLocalSpaceLinkTriangles
struct UNG_GridComponent_GenerateLocalSpaceLinkTriangles_Params
{
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     VisualisationUpOffset;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.GenerateBaseGrid
struct UNG_GridComponent_GenerateBaseGrid_Params
{
	struct FVector                                     Dimension;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CellSize;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     GridXaxis;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     GridYaxis;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     GridZaxis;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.FindPathFromNodes
struct UNG_GridComponent_FindPathFromNodes_Params
{
	int                                                StartNodeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GoalNodeIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutNodes;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeStartNode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeGoalNode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.FindPath
struct UNG_GridComponent_FindPath_Params
{
	struct FVector                                     RelativeStart;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelativeGoal;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<int>                                        OutNodes;                                                 // (Parm, OutParm, ZeroConstructor)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseSingleLineTracingForFindStartAndGoal;                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceHalfHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.FindClosestNodeFromDirection
struct UNG_GridComponent_FindClosestNodeFromDirection_Params
{
	struct FVector                                     RelativeLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelativeFromDirection;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               OnlyNodesWithLinks;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseSingleLineTracing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceHalfHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.FindClosestNode
struct UNG_GridComponent_FindClosestNode_Params
{
	struct FVector                                     RelativeLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               OnlyNodesWithLinks;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseSingleLineTracing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceHalfHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.CreateNavGridMoveToProxyObject
struct UNG_GridComponent_CreateNavGridMoveToProxyObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIAsyncTaskBlueprintProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavGrid.NG_GridComponent.AddLink
struct UNG_GridComponent_AddLink_Params
{
	int                                                NodeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherNodeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlocked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
