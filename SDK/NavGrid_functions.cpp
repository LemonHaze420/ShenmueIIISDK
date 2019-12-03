
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function NavGrid.NG_GridComponent.SetNodeRelativeLocation
// ()
// Parameters:
// int                            NodeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeLocation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bValidLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void UNG_GridComponent::SetNodeRelativeLocation(int NodeIndex, const struct FVector& RelativeLocation, bool bValidLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.SetNodeRelativeLocation");

	UNG_GridComponent_SetNodeRelativeLocation_Params params;
	params.NodeIndex = NodeIndex;
	params.RelativeLocation = RelativeLocation;
	params.bValidLocation = bValidLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavGrid.NG_GridComponent.PreallocateNodes
// ()
// Parameters:
// int                            iNbNodes                       (Parm, ZeroConstructor, IsPlainOldData)

void UNG_GridComponent::PreallocateNodes(int iNbNodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.PreallocateNodes");

	UNG_GridComponent_PreallocateNodes_Params params;
	params.iNbNodes = iNbNodes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavGrid.NG_GridComponent.GenerateLocalSpacePathTriangles
// ()
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Path                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 VisualisationUpOffset          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelativeStart                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelativeGoal                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNG_GridComponent::GenerateLocalSpacePathTriangles(TArray<int> Path, const struct FVector& VisualisationUpOffset, const struct FVector& RelativeStart, const struct FVector& RelativeGoal, TArray<struct FCustomMeshTriangle>* Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.GenerateLocalSpacePathTriangles");

	UNG_GridComponent_GenerateLocalSpacePathTriangles_Params params;
	params.Path = Path;
	params.VisualisationUpOffset = VisualisationUpOffset;
	params.RelativeStart = RelativeStart;
	params.RelativeGoal = RelativeGoal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function NavGrid.NG_GridComponent.GenerateLocalSpaceLinkTriangles
// ()
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (Parm, OutParm, ZeroConstructor)
// struct FVector                 VisualisationUpOffset          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNG_GridComponent::GenerateLocalSpaceLinkTriangles(const struct FVector& VisualisationUpOffset, TArray<struct FCustomMeshTriangle>* Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.GenerateLocalSpaceLinkTriangles");

	UNG_GridComponent_GenerateLocalSpaceLinkTriangles_Params params;
	params.VisualisationUpOffset = VisualisationUpOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function NavGrid.NG_GridComponent.GenerateBaseGrid
// ()
// Parameters:
// struct FVector                 Dimension                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CellSize                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 GridXaxis                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 GridYaxis                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 GridZaxis                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNG_GridComponent::GenerateBaseGrid(const struct FVector& Dimension, const struct FVector& CellSize, const struct FVector& GridXaxis, const struct FVector& GridYaxis, const struct FVector& GridZaxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.GenerateBaseGrid");

	UNG_GridComponent_GenerateBaseGrid_Params params;
	params.Dimension = Dimension;
	params.CellSize = CellSize;
	params.GridXaxis = GridXaxis;
	params.GridYaxis = GridYaxis;
	params.GridZaxis = GridZaxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavGrid.NG_GridComponent.FindPathFromNodes
// ()
// Parameters:
// int                            StartNodeIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            GoalNodeIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutNodes                       (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeStartNode              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeGoalNode               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNG_GridComponent::FindPathFromNodes(int StartNodeIndex, int GoalNodeIndex, bool bIncludeStartNode, bool bIncludeGoalNode, TArray<int>* OutNodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.FindPathFromNodes");

	UNG_GridComponent_FindPathFromNodes_Params params;
	params.StartNodeIndex = StartNodeIndex;
	params.GoalNodeIndex = GoalNodeIndex;
	params.bIncludeStartNode = bIncludeStartNode;
	params.bIncludeGoalNode = bIncludeGoalNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNodes != nullptr)
		*OutNodes = params.OutNodes;

	return params.ReturnValue;
}


// Function NavGrid.NG_GridComponent.FindPath
// ()
// Parameters:
// struct FVector                 RelativeStart                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelativeGoal                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<int>                    OutNodes                       (Parm, OutParm, ZeroConstructor)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseSingleLineTracingForFindStartAndGoal (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceHalfHeight                (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNG_GridComponent::FindPath(const struct FVector& RelativeStart, const struct FVector& RelativeGoal, float AcceptanceRadius, bool UseSingleLineTracingForFindStartAndGoal, float TraceHalfHeight, float TraceRadius, TArray<int>* OutNodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.FindPath");

	UNG_GridComponent_FindPath_Params params;
	params.RelativeStart = RelativeStart;
	params.RelativeGoal = RelativeGoal;
	params.AcceptanceRadius = AcceptanceRadius;
	params.UseSingleLineTracingForFindStartAndGoal = UseSingleLineTracingForFindStartAndGoal;
	params.TraceHalfHeight = TraceHalfHeight;
	params.TraceRadius = TraceRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNodes != nullptr)
		*OutNodes = params.OutNodes;

	return params.ReturnValue;
}


// Function NavGrid.NG_GridComponent.FindClosestNodeFromDirection
// ()
// Parameters:
// struct FVector                 RelativeLocation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelativeFromDirection          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           OnlyNodesWithLinks             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseSingleLineTracing           (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceHalfHeight                (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNG_GridComponent::FindClosestNodeFromDirection(const struct FVector& RelativeLocation, const struct FVector& RelativeFromDirection, bool OnlyNodesWithLinks, bool UseSingleLineTracing, float TraceHalfHeight, float TraceRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.FindClosestNodeFromDirection");

	UNG_GridComponent_FindClosestNodeFromDirection_Params params;
	params.RelativeLocation = RelativeLocation;
	params.RelativeFromDirection = RelativeFromDirection;
	params.OnlyNodesWithLinks = OnlyNodesWithLinks;
	params.UseSingleLineTracing = UseSingleLineTracing;
	params.TraceHalfHeight = TraceHalfHeight;
	params.TraceRadius = TraceRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavGrid.NG_GridComponent.FindClosestNode
// ()
// Parameters:
// struct FVector                 RelativeLocation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           OnlyNodesWithLinks             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseSingleLineTracing           (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceHalfHeight                (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNG_GridComponent::FindClosestNode(const struct FVector& RelativeLocation, bool OnlyNodesWithLinks, bool UseSingleLineTracing, float TraceHalfHeight, float TraceRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.FindClosestNode");

	UNG_GridComponent_FindClosestNode_Params params;
	params.RelativeLocation = RelativeLocation;
	params.OnlyNodesWithLinks = OnlyNodesWithLinks;
	params.UseSingleLineTracing = UseSingleLineTracing;
	params.TraceHalfHeight = TraceHalfHeight;
	params.TraceRadius = TraceRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavGrid.NG_GridComponent.CreateNavGridMoveToProxyObject
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAIAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIAsyncTaskBlueprintProxy* UNG_GridComponent::CreateNavGridMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.CreateNavGridMoveToProxyObject");

	UNG_GridComponent_CreateNavGridMoveToProxyObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Destination = Destination;
	params.TargetActor = TargetActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavGrid.NG_GridComponent.AddLink
// ()
// Parameters:
// int                            NodeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherNodeIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlocked                       (Parm, ZeroConstructor, IsPlainOldData)

void UNG_GridComponent::AddLink(int NodeIndex, int OtherNodeIndex, bool bBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavGrid.NG_GridComponent.AddLink");

	UNG_GridComponent_AddLink_Params params;
	params.NodeIndex = NodeIndex;
	params.OtherNodeIndex = OtherNodeIndex;
	params.bBlocked = bBlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
