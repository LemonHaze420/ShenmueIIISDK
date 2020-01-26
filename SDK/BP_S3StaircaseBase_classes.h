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

// BlueprintGeneratedClass BP_S3StaircaseBase.BP_S3StaircaseBase_C
// 0x006A (0x0392 - 0x0328)
class ABP_S3StaircaseBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BlockingRamp;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Editor_Cube2;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Editor_Cube1;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TriggerBox;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     STEP_DIMENSIONS;                                          // 0x0358(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                NUM_STEPS;                                                // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              STOP_POINT_X_ADJUST;                                      // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class AActor*                                      CollisionActor;                                           // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bCompletedPairing;                                        // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CollisionActors;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               AUTO_ADJUST_POSITION_ONLY;                                // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DetectUnderGround;                                        // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3StaircaseBase.BP_S3StaircaseBase_C");
		return ptr;
	}


	void CheckInitialOverlaps();
	void GetRelativeStairOnX(const struct FVector& Location, float FudgeDistanceIn, TEnumAsByte<EVerticalDirection>* Relative);
	void GetStepsBaseTransform(struct FTransform* OutTransform);
	void GetClimbEndPoints_LS(struct FVector* Bottom, struct FVector* top);
	void Editor_UpdateVisualization();
	void SetupDebugStepVisual(class UStaticMeshComponent* Mesh, const struct FVector& StepEnd);
	void PairToMultiMeshActor(class AActor* Actor, const struct FVector& StepDimension, int NumberOfSteps);
	void GetBestSnapCandidate(float CloseTo, float Candidate1, float Candidate2, float Candidate3, float PreferredSign, float* Selection);
	void CalculateTriggerBounds();
	void PairToAndConfigureMesh(class UStaticMeshComponent* MeshComp);
	void GetClosestStopLocation(const struct FVector& InLocation, struct FVector* OutLocation);
	void AnimPositionToStepProgress(float AnimPosition, bool DirUp, float* StepProgress);
	void StepProgressToAnimPosition(float StepProgress, bool DirUp, float* RPosition, float* LPosition);
	void GetStepsClimbedForLocation(const struct FVector& Location, float* Progress);
	void GetNextStepStopLocation(const struct FVector& InLocation, bool InDirUp, struct FVector* OutLocation);
	void GetAngleInClimbDirection(const struct FVector& InDirection, bool IsUp, float* OutAngle);
	void GetClimbCycleRefTransform(struct FTransform* OutTransform);
	void GetCollisionActor(class AActor** CollisionActor);
	void GetIdOfClosestStep(const struct FVector& InLocation, int* OutID);
	void GetStepCycleForLocation(const struct FVector& InLocation, int* OutClimbCycle);
	void GetSlopeAngle(float* AngleDegrees);
	void DistanceToClosestStopLocation(const struct FVector& Location, float* Distance);
	void RelXToRelZ(float RelX, float* RelZ);
	void ClimbCycleRefToWorldSpace(const struct FVector& Relative, struct FVector* World);
	void WorldToClimbCycleRefSpace(const struct FVector& Location, struct FVector* Relative);
	void CorrectLocationForStepProgress(const struct FVector& Position, float StepProgress, bool DirUp, struct FVector* Correction);
	void InBounds2D(const struct FVector& Location, const struct FVector& SizeAdjustment, bool* In);
	void GetSlopeDirection(struct FVector* SlopeDIrection);
	void GetClimbCycleRefLocation(struct FVector* BaseLocation);
	void CorrectLocationHeight(const struct FVector& Location, float* Height);
	void GetStepProgressForLocation(const struct FVector& Location, float* Progress);
	void UserConstructionScript();
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_S3StaircaseBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
