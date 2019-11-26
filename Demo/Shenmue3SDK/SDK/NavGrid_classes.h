#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class NavGrid.NavGridData
// 0x0010 (0x0040 - 0x0030)
class UNavGridData : public UDataAsset
{
public:
	TArray<struct FNG_Node>                            maNodes;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavGrid.NavGridData");
		return ptr;
	}

};


// Class NavGrid.NG_GridComponent
// 0x0018 (0x0108 - 0x00F0)
class UNG_GridComponent : public UActorComponent
{
public:
	TArray<struct FNG_Node>                            maNodes;                                                  // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              mAcceptanceRadius;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavGrid.NG_GridComponent");
		return ptr;
	}


	void SetNodeRelativeLocation(int NodeIndex, const struct FVector& RelativeLocation, bool bValidLocation);
	void PreallocateNodes(int iNbNodes);
	void GenerateLocalSpacePathTriangles(TArray<int> Path, const struct FVector& VisualisationUpOffset, const struct FVector& RelativeStart, const struct FVector& RelativeGoal, TArray<struct FCustomMeshTriangle>* Triangles);
	void GenerateLocalSpaceLinkTriangles(const struct FVector& VisualisationUpOffset, TArray<struct FCustomMeshTriangle>* Triangles);
	void GenerateBaseGrid(const struct FVector& Dimension, const struct FVector& CellSize, const struct FVector& GridXaxis, const struct FVector& GridYaxis, const struct FVector& GridZaxis);
	bool FindPathFromNodes(int StartNodeIndex, int GoalNodeIndex, bool bIncludeStartNode, bool bIncludeGoalNode, TArray<int>* OutNodes);
	bool FindPath(const struct FVector& RelativeStart, const struct FVector& RelativeGoal, float AcceptanceRadius, bool UseSingleLineTracingForFindStartAndGoal, float TraceHalfHeight, float TraceRadius, TArray<int>* OutNodes);
	int FindClosestNodeFromDirection(const struct FVector& RelativeLocation, const struct FVector& RelativeFromDirection, bool OnlyNodesWithLinks, bool UseSingleLineTracing, float TraceHalfHeight, float TraceRadius);
	int FindClosestNode(const struct FVector& RelativeLocation, bool OnlyNodesWithLinks, bool UseSingleLineTracing, float TraceHalfHeight, float TraceRadius);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateNavGridMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
	void AddLink(int NodeIndex, int OtherNodeIndex, bool bBlocked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
