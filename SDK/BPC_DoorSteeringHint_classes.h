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

// BlueprintGeneratedClass BPC_DoorSteeringHint.BPC_DoorSteeringHint_C
// 0x0078 (0x02B8 - 0x0240)
class UBPC_DoorSteeringHint_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	float                                              Radius;                                                   // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardLength;                                            // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             TargetLocation;                                           // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxCSAngleAbs;                                            // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MAX_INNER_STEER_DISTANCE;                                 // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DISTANCE_TO_STRENGH;                                      // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ANGLE_TO_STRENGTH;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBox                                        BoundingBox;                                              // 0x0270(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftBoundDistance;                                        // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightBoundDistance;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	TArray<struct FVector>                             EXTRA_POINTS_LS;                                          // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           AllPointsWS;                                              // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_DoorSteeringHint.BPC_DoorSteeringHint_C");
		return ptr;
	}


	void InitForStrength(TEnumAsByte<EN_DoorGuideStrength> Str);
	void GetAlternateWeightBasedOnDir(const struct FVector2D& Location, const struct FVector2D& Direction, float* Scaler);
	void CheckLOS(const struct FVector& From, bool* OutLOS);
	void CalcHintSizeInDir(const struct FVector& InLocation, const struct FVector& InSideDirection, const struct FVector& InBackDirection, float InMaxDistance, float InTestBackDistance, float InTestIntervalDistance, float* OutDistance);
	void AutoConfigureSteeringHint();
	void InitAllPoints();
	void CheckInsideBoundingBox(const struct FVector& Location, bool* bIsInside);
	void InitBoundingBox();
	void CalculateSteer(const struct FVector& Location, const struct FVector& InputDirection, struct FVector* OutDirection, float* Strength, float* Priority);
	void CalcSteeringTarget(const struct FVector2D& Location, struct FVector2D* Target);
	void CalcDistanceDoorframeToPoint(const struct FVector2D& Point, float* Distance);
	void DistancePointToLineSegment(const struct FVector2D& P, const struct FVector2D& LS2, const struct FVector2D& LS1, float* Distance);
	void InAngleRangeCC(float Angle, const struct FVector2D& Range, bool* bIsIn, float* Weight);
	void GetSteerAmountAngleMethod(const struct FVector2D& Location, const struct FVector2D& Direction, float* Steer);
	void GetWorldSpaceAngle(float Component, float* World);
	void GetHeadingAngleFromDirection(const struct FVector2D& Direction, float* Angle);
	void GetComponentSpaceAngle(float World, float* Component);
	void GetHeadingAngleFromLocations(const struct FVector2D& FromLocation, const struct FVector2D& ToLocation, float* Degrees);
	void CalculateAngleRange(const struct FVector2D& Location, struct FVector2D* AngleRangeCW);
	void IntersectsSegment(const struct FVector2D& Location, const struct FVector2D& Direction, const struct FVector2D& A, const struct FVector2D& B, bool* bIntersects);
	void CalcScalerBasedOnDistance(float Distance, float* Scaler);
	void IsOnRelevantSide(const struct FVector2D& Location, bool* bRelevantSide);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_DoorSteeringHint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
