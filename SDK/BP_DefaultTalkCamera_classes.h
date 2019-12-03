#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DefaultTalkCamera.BP_DefaultTalkCamera_C
// 0x0154 (0x0494 - 0x0340)
class ABP_DefaultTalkCamera_C : public ABP_BaseTalkCamera_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class UBPC_AutoFraming_C*                          BPC_AutoFraming;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UbpS3CameraComp_C*                           Camera;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraCenter;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_AutoRefineShoulderCut_C*                BPC_AutoRefineShoulderCut;                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_AutoFocusing_C*                         BPC_AutoFocusing;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraRotator;                                            // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SpeakingActor;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      ListeningActor;                                           // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               EnableCamera;                                             // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // 0x0390(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableSpin;                                               // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	struct FST_CameraSpinProperty                      SpinProperty;                                             // 0x03CC(0x0018) (Edit, BlueprintVisible)
	float                                              SpinElapsedTime;                                          // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InverseSpin;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDollyZoom;                                          // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	struct FST_CameraDollyZoomProperty                 DollyZoomProperty;                                        // 0x03EC(0x0010) (Edit, BlueprintVisible)
	float                                              DollyZoomElapsedTime;                                     // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableFieldOfViewZoom;                                    // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	struct FST_CameraFovZoomProperty                   FieldOfViewZoomProperty;                                  // 0x0404(0x0010) (Edit, BlueprintVisible)
	float                                              FieldOfViewZoomElapsedTime;                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartFieldOfView;                                         // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dummy;                                                    // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      SpeakingSkeletalMesh;                                     // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ListeningSkeletalMesh;                                    // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseSpawnFunction;                                         // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	struct FRotator                                    StartRotation;                                            // 0x0434(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              StartCameraDistance;                                      // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImaginaryPositionValue;                                   // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandardhalfDistance;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StandardRotation;                                         // 0x044C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterHalfDistance;                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandardCameraDistance;                                   // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialFOV;                                               // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isHitting;                                                // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	float                                              HittingPointLength;                                       // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraHittingAlpha;                                       // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpeed;                                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReversePlay;                                              // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	struct FRotator                                    FinishRotation;                                           // 0x0478(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FinishCameraDistance;                                     // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OffsetByScript;                                           // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              OffsetCameraDistancePerFromScript;                        // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetCameraPlayStartTimeFromScript;                      // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DefaultTalkCamera.BP_DefaultTalkCamera_C");
		return ptr;
	}


	void CalcAndMoveCameraToSafeLocation();
	void CutOffNearBlur();
	struct FVector GetLookTargetSocketLocation(const struct FName& InSocketName);
	void STATIC_CalcFinalDistance(float* FinishCameraDistance);
	void STATIC_CalcFinalSpin(struct FRotator* FinalSpin);
	void UpdateComponent();
	void GetCamera(class UCameraComponent** Camera);
	void STATIC_GetForwardVector(class USkeletalMeshComponent* Target, struct FVector* Forward);
	void AdjustRotationFromDistance(const struct FRotator& Rotation, float DistanceRatio, struct FRotator* AdjustmentRotation);
	void AdjustCameraDistance(float CharacterHalfDistance, float CameraDistance, float* AdjustmentCameraDistance);
	void STATIC_GetLockPointDepthOffset(struct FVector* DepthOffset);
	void GetLockPointOffset(struct FVector* LockPointOffset);
	void STATIC_SetSkeletalMeshFromTalkActor();
	void Movement_DollyZoom(float DeltaSeconds);
	void Movement_FovZoom(float DeltaSeconds);
	void STATIC_Movement_Spin(float DeltaSeconds);
	void STATIC_Rotater___Rotater(const struct FRotator& Rotator_A, const struct FRotator& Rotator_B, struct FRotator* Rotator);
	void StartupSettingsCaseLookPair();
	void STATIC_StartupSettingsCaseLookAlone();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DefaultTalkCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
