#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerSplineNavi.PlayerSplineNavi_C
// 0x001C (0x0344 - 0x0328)
class APlayerSplineNavi_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DBG_DISP_FLAG;                                            // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	class APlayer_SplineMoveActor_C*                   SplineMoveActor;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ClipZ;                                                    // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSplineNavi.PlayerSplineNavi_C");
		return ptr;
	}


	void FindClosestForwardDirection(const struct FVector& InLocation, struct FVector* OutDirToSpline, struct FVector* OutDirectionOFSpline, float* OutKey, bool* OutSuccess);
	void CheckLOS(const struct FVector& InSplineLocation, const struct FVector& InPlayerLocation, bool* OutIsClear);
	void RailGetClosestDirection(const struct FVector& InLocation, const struct FVector& InDirection, int InPreviousDirection, float AngleHysteresis, struct FVector* OutDirection, float* OutAngleAbs, int* OutRailDir);
	void FindSplineDistanceAndForward(const struct FVector& WorldLocation, struct FVector* Direction, float* DistanceAlongSpline);
	void GetWidth(const struct FVector& Point, float* Width);
	void CalculateStrength(const struct FVector& Location, const struct FVector& InputDir, const struct FVector& TargetLocation, const struct FVector& TargetDir, float NoInputN, float Distance, bool bForceFollowDebug, float* Strength);
	void CalculateSteer(const struct FVector& Location, const struct FVector& InputDir, float NoInputN, bool bDebugFollow, struct FVector* OutDir, float* Strength, float* Priority);
	void SplineInit(class APlayer_SplineMoveActor_C* SplineMoveActorRef);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
