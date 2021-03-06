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

// BlueprintGeneratedClass BP_TalkCameraManager.BP_TalkCameraManager_C
// 0x0200 (0x0528 - 0x0328)
class ABP_TalkCameraManager_C : public AS3TalkCameraManagerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBPC_AutoCameraAnalizer_C*                   BPC_AutoCameraAnalizer;                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            CalcCollisionDummySpline;                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_CameraGroup_C*                          BPC_CameraGroup;                                          // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      PlayerActor;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      TalkedActor;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_BaseTalkCamera_C*                        CurrentCamera;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SpeakingActor;                                            // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ListeningActor;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class UCameraComponent*                            PlayerCamera;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        ImaginaryLineCameraPosition;                              // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSelectRandom;                                            // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0392(0x0002) MISSED OFFSET
	int                                                Index;                                                    // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AllSingleCameras;                                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AllPairCameras;                                           // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      NextCamera;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AvailableSingleCameras;                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AvailablePairCameras;                                     // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isDrawDebug;                                              // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              NarrowSpaceSingleCameras;                                 // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              NarrowSpacePairCameras;                                   // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CameraCollisionCheckAccuracy;                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCollisionRadius;                                    // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CameraCheckHitObjectType;                                 // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AllowCameraHitRateForUse;                                 // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotFoundAvailableCamera;                                 // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAutoCameraType                                    AutoCameraType;                                           // 0x0425(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0426(0x0002) MISSED OFFSET
	TArray<class UClass*>                              AllHelloCameras;                                          // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AllByeCameras;                                            // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     UseCameraName;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     UseCameraGroup;                                           // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEjectingTalkCamera;                                      // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FName                                       LockTargetCharaID;                                        // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EM_Charactor>                          LockTargetChara;                                          // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	TArray<class AActor*>                              Targets;                                                  // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      LookAtTargetActor;                                        // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitFinished;                                            // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FName                                       CameraDummyMeshTag;                                       // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCutElapsedTime;                                    // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	struct FST_AutoCameraAnalizedInfo                  CurrentCameraInfo;                                        // 0x04B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_AutoCameraAnalizedInfo>          CurrentCameraGroupsInfo;                                  // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSelectedAutoCamera;                                     // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bLookToPlayer;                                            // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLookCharaChanged;                                        // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x04F2(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      SpeakingSkeletalMeshRef;                                  // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ListeningSkeletalMesh;                                    // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bCheckAvoidanceCharacter;                                 // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableLookAtCameraPanning;                               // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceSkipCollisionCheck;                                 // 0x050A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraSpaciousArea;                                       // 0x050B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         SpecifiedCalcSpeakingMesh;                                // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bCalcShowItemZoomCamera;                                  // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	struct FName                                       IgnoreCameraCollisionCheckTag;                            // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkCameraManager.BP_TalkCameraManager_C");
		return ptr;
	}


	void ExecuteCharacterAvoidance();
	void AdjustImaginaryLineCameraPositionFromSpace(class AActor* InTalkedActor, class AActor* InPlayer);
	class USkeletalMeshComponent* GetNonCharaCameraTargetSkeletalMesh(class AActor* InActor);
	void CalcAndSetAvailableCameraForShowItem(class UPrimitiveComponent* SpeakingSkeletalMesh, class UPrimitiveComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, int DivNum, float Radius, bool isDrawDebug, EAutoCameraType AutoCameraType, bool CheckTwoSide, bool _printCollisionMessage, bool isAcEvent, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, bool* Result);
	void ResolveTalkTransitionError();
	void CheckFilter(int* mask, struct FST_TalkCameraPairOrSingleFilter* Param, struct FST_TalkCameraShoulderFilter* Param2, struct FST_TalkCameraAngleFilter* Param3, struct FST_TalkCameraDistanceFilter* Param4, struct FST_TalkCameraLookTargetFilter* Param5, struct FST_TalkCameraKindFilter* Param6, bool* Result);
	void CheckCameraKind(int mask, const struct FST_TalkCameraKindFilter& Param, bool* Result);
	void CheckLookAtSocket(int mask, const struct FST_TalkCameraLookTargetFilter& Param, bool* Result);
	void CheckDistance(int mask, const struct FST_TalkCameraDistanceFilter& Param, bool* Result);
	void CheckAngle(int mask, const struct FST_TalkCameraAngleFilter& Param, bool* Result);
	void CheckShoulderOrNot(int mask, const struct FST_TalkCameraShoulderFilter& Param, bool* Result);
	void CheckPairOrSingle(int mask, const struct FST_TalkCameraPairOrSingleFilter& Param, bool* Result);
	void GetFilteredCamera(const struct FST_TalkCameraPairOrSingleFilter& PairOrSingle, const struct FST_TalkCameraShoulderFilter& ShoulderCut, const struct FST_TalkCameraAngleFilter& Angle, const struct FST_TalkCameraDistanceFilter& Distance, const struct FST_TalkCameraLookTargetFilter& LookTarget, const struct FST_TalkCameraKindFilter& CameraKind, TArray<struct FST_AutoCameraAnalizedInfo>* Cameras);
	void AutoCameraCutChageInit(class AActor* Player, class AActor* Talked, bool* Result);
	void DestroyPrevCamera();
	void IsOrderSpecificCamera(bool* Result);
	void CanChangeCut(bool* Result);
	void GetRandomAvailableCamera(TArray<class UClass*>* AvailableCameras, class UClass** Camera);
	void DestroyDummyMeshComponent(TArray<class AActor*>* Actor);
	void TryCreateDummyMesh(class AActor* TargetActor, class AActor* LookAtActor, bool bForceDummy, class USkeletalMeshComponent** MeshComponet);
	void Init(struct FString* LockTargetCharacterId);
	void SpawnLookAtCamera(class UClass* LookAtCameraClass);
	void GetOtherActorFromTargets(class AActor* InActor, TArray<class AActor*>* Array, class AActor** Other);
	void GetCameraGroupFromName(const struct FString& CameraGroup, TArray<class UClass*>* GroupCameras, bool* Result);
	void GetCameraClassFromName(const struct FString& CameraName, class UClass** cameraClass);
	void GetSpeakingCharacterName(TEnumAsByte<EM_Charactor> CharacterType, struct FName* Name);
	void GetAvailableCameraNum(int DivNum, class USkeletalMeshComponent* SpeakingSkeletalMesh, class USkeletalMeshComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, float Radius, bool isDebugDraw, TArray<class UClass*>* Cameras, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, int* Num);
	void CalcCameraPositionFromImaginaryLine(class AActor* NPC, class AActor* Player);
	void TryGetDifferentCamera(class UClass* PrevCamera, TArray<class UClass*>* List, class UClass** Camera, bool* Result);
	void CalcAndSetAvailableCamera(class UPrimitiveComponent* SpeakingSkeletalMesh, class UPrimitiveComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, int DivNum, float Radius, bool isDrawDebug, EAutoCameraType AutoCameraType, bool CheckTwoSide, bool _printCollisionMessage, bool isAcEvent, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, bool* Result);
	void SetNextCameraFromRandom();
	void SpawnDefalutTalkCamera(class UClass* cameraClass);
	void SetCameraPositionFromImaginaryLine();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ChangeCamera(const struct FString& LookTargetCharacterID, EAutoCameraType AutoCameraType, bool isSameTarget, const struct FString& UseCameraName, const struct FString& UseCameraGroup, class AActor* PlayerActor, class AActor* TalkedActor);
	void ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime);
	void ChangeToLookAtCamera(class AActor* Player, class AActor* MotionActor, class AActor* TargetActor);
	void ReceiveTick(float* DeltaSeconds);
	void ChangeCameraByAutoCameraDirector(class AActor* Player, class AActor* TalkedActor);
	void ChangeToStartShowItemCamera();
	void ChangeToShowItemZoomCamera();
	void ExecuteUbergraph_BP_TalkCameraManager(int EntryPoint);
	void OnSelectedAutoCamera__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
