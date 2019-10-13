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

// BlueprintGeneratedClass BP_MultiplePersonCamera.BP_MultiplePersonCamera_C
// 0x00C8 (0x0408 - 0x0340)
class ABP_MultiplePersonCamera_C : public ABP_BaseTalkCamera_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            spline;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               TargetIDs;                                                // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AS3Character*>                        Targets;                                                  // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FVector                                     LookTargetPos;                                            // 0x0378(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Active;                                                   // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	float                                              Yaw;                                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndYaw;                                                   // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndPitch;                                                 // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndDistance;                                              // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfView;                                              // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndFieldOfView;                                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocketName;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPosOffset;                                          // 0x03B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EaseTtype;                                                // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	float                                              OffsetTime;                                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tamp_Yaw;                                                 // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Temp_Pitch;                                               // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Temp_Distance;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isLookOutside;                                            // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSpline;                                               // 0x03D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FVector                                     StartSocketPosition;                                      // 0x03E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FName                                       LockTargetCharacterId;                                    // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSpawnFunction;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              DirectionRatio;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               finishInitTransform;                                      // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              RandomCache;                                              // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MultiplePersonCamera.BP_MultiplePersonCamera_C");
		return ptr;
	}


	void GetCamera(class UCameraComponent** Camera);
	void SortFloat(TArray<float>* inArray, TArray<int>* SortedIndex);
	void SetTargetByActorIds();
	void SortByAngle(TArray<class AActor*>* TargetArray, TArray<class AActor*>* SortedArray);
	void UpdateDistance();
	void UpdateFOV();
	void UpdateAlpha();
	void CalcYawAndPitch();
	void SortTargetsClockwise();
	void CreateSprine();
	void DrawDebugNorm();
	void UpdateCameraTransform();
	void FindTargetfromID();
	void CulcTargetPos(TArray<class AS3Character*>* TargetActors, struct FVector* AverageVector);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Update();
	void Init();
	void ReceiveBeginPlay();
	void ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime);
	void ExecuteUbergraph_BP_MultiplePersonCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
