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

// BlueprintGeneratedClass BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C
// 0x00A4 (0x045C - 0x03B8)
class ABP_BullMovingAlongSpline2_C : public ABP_NoAIAnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class ABP_SplinePath_C*                            PathToFollow;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              CurrentLocationOnSpline;                                  // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedInUUPerSeconds;                                   // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHavePitchAndRoll;                                        // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              PitchRange;                                               // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollRange;                                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveAlongSpline;                                         // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInverseTransform;                                     // 0x03DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03DE(0x0002) MISSED OFFSET
	float                                              InitialLocationOnSpline;                                  // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	TArray<class ATargetPoint*>                        Target;                                                   // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              DecelerationDistance;                                     // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationTime;                                         // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopTime;                                                 // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<float>                                      StopDistances;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NearPointIndex;                                           // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearPointDistance;                                        // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineDistance;                                           // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAcceleration;                                           // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	int                                                TargetIndex;                                              // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeforDistance;                                            // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStop;                                                   // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClosedLoop;                                               // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0436(0x0002) MISSED OFFSET
	float                                              RatDistance;                                              // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatSpeed;                                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatRate;                                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RatStateId;                                               // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatIdolTime;                                              // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RatIdolEndFlag;                                           // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	float                                              DeltaTime;                                                // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopTime;                                                 // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustRotYaw;                                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C");
		return ptr;
	}


	void GetNearSplinePointDistance(class ATargetPoint* Target, float* Distance);
	void GetMoveDistance(float Delta_Seconds, float* Move_Distance);
	void GetTransformFromRollAndPitch(const struct FTransform& InputValue, struct FTransform* Value);
	void GetTranformFromSpline(struct FTransform* Value);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BullMovingAlongSpline2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
