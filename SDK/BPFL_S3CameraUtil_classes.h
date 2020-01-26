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

// BlueprintGeneratedClass BPFL_S3CameraUtil.BPFL_S3CameraUtil_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_S3CameraUtil_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_S3CameraUtil.BPFL_S3CameraUtil_C");
		return ptr;
	}


	class USceneComponent* STATIC_TryGetSpecifiedCalcRotationSpeaker(class UObject* __WorldContext);
	void STATIC_ToCameraAngleMaskFromClass(class UClass* In, class UObject* __WorldContext, int* mask);
	void STATIC_ToCameraFramingMaskFromClass(class UClass* In, class UObject* __WorldContext, int* mask);
	void STATIC_ToCameraPairOrSingleMaskFromClass(class UClass* In, class UObject* __WorldContext, int* mask);
	void STATIC_SphereTraceForObjectsByTwoSide(class UObject* __WorldContext);
	void STATIC_IsSeeableFromCamera(class AActor* TargetActor, const struct FName& TargetSocketName, bool isDebug, float SphereTraceRadius, class UObject* __WorldContext, TArray<struct FVector>* CameraLocus, TArray<class AActor*>* _IgnoreActor, TArray<TEnumAsByte<EObjectTypeQuery>>* InObjectType, bool* Result);
	void STATIC_CheckSeeableForManyTargets(float InBottomSeeableRate, bool isDebug, TEnumAsByte<EM_LeftOrRight> CameraPosition, const struct FST_CameraInitialProperty& InitalCameraProperty, const struct FName& SocketName, class UObject* __WorldContext, TArray<struct FVector>* InLocus, TArray<class ABP_S3CharacterBase_C*>* TargetActors, TArray<TEnumAsByte<EObjectTypeQuery>>* InObjectType, TArray<class AActor*>* IgnoreActor, bool* Result);
	void STATIC_isSameDirection(const struct FVector& From, const struct FVector& Target1, const struct FVector& Target2, float ToleranceAngle, class UObject* __WorldContext, bool* Result);
	void STATIC_IsStraight(class AActor* Actor1, class AActor* Actor2, class AActor* Actor3, class UObject* __WorldContext, bool* IsStraight);
	void STATIC_ToCameraPairOrSingleMaskFromName(const struct FString& In, class UObject* __WorldContext, int* mask);
	void STATIC_ToCameraAngleMaskFromName(const struct FString& In, class UObject* __WorldContext, int* mask);
	void STATIC_ToCameraFramingMaskFromName(const struct FString& In, class UObject* __WorldContext, int* mask);
	void STATIC_ParseCameraClassToIntensionMask(class UClass* cameraClass, class UObject* __WorldContext, int* retMask, struct FRotator* retRotate, bool* bError);
	void STATIC_CameraClassNameToBitMask(class UClass* Camera, class UObject* __WorldContext);
	void STATIC_DistanceToBitmask(float Distance, class UObject* __WorldContext, int* mask);
	void STATIC_CalcInfoFromMultiplePersonCamera(class UClass* MultiplePersonCameraClass, class UObject* __WorldContext, int* Result);
	void STATIC_CalcInfoFromLookAtCameraClass(class UClass* LookAtCamera, class UObject* __WorldContext, int* retMask);
	void STATIC_CalcInfoFromDefaltTalkCameraClass(class UClass* DefaultTalkCamera, class UObject* __WorldContext, int* Result, struct FRotator* Rotator);
	void STATIC_CalcCameraInfo(class UClass* BaseTalkCameraClass, class UObject* __WorldContext, TEnumAsByte<EN_AutoTalkCameraInfo>* CameraInfo);
	void STATIC_TryGetRightVector(class USkeletalMeshComponent* Target, class UObject* __WorldContext, struct FVector* Right);
	void STATIC_TryGetForwardVector(class USkeletalMeshComponent* Target, class UObject* __WorldContext, struct FVector* Forward);
	void STATIC_CalcLookAtCameraLocus(class UClass* LookAtCameraClass, TEnumAsByte<EM_LeftOrRight> _CameraPosition1, class USkeletalMeshComponent* SpeakingSkeletalMesh1, class USkeletalMeshComponent* ListeningSkeletalMesh1, bool debug1, class UObject* __WorldContext, TArray<struct FVector>* Locus);
	void STATIC_CalcMultiplePersonCameraLocus(class UClass* MultiplePersonCamera, class UObject* __WorldContext, TArray<class AS3Character*>* Targets, TArray<struct FVector>* Locus);
	void STATIC_isAvailavleFromParam(const struct FST_CameraInitialProperty& InitialCameraProperty, bool EnableSpin, const struct FST_CameraSpinProperty& SpinProperty, bool EnableDollyZoom, const struct FST_CameraDollyZoomProperty& DollyZoomProperty, int DivNum, class USkeletalMeshComponent* SpeakingSkeletalMesh, class USkeletalMeshComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, float Radius, bool isDebugDraw, class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* Result, float* resultSeeableRate, TArray<struct FHitResult>* HitResult);
	void STATIC_GetRandomCameraInRange(class UClass* CameraClass1, class UClass* CameraClass2, class UObject* __WorldContext, struct FST_CameraInitialProperty* CameraInitialProperty, struct FST_CameraSpinProperty* CameraSpin, struct FST_CameraDollyZoomProperty* CameraDolly);
	void STATIC_RandomDollyInRange(const struct FST_CameraDollyZoomProperty& Min, const struct FST_CameraDollyZoomProperty& Max, class UObject* __WorldContext, struct FST_CameraDollyZoomProperty* Result);
	void STATIC_CheckBreadthOfRightAndLeftSpaceInDome(const struct FVector& Center, const struct FVector& XVector, float Length, float DeltaAngle, bool isDrawDebug, class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* HitCheckObjectType, TEnumAsByte<EM_LeftOrRight>* SpaciousArea, float* LeftHitRate, float* RightHitRate);
	void STATIC_RandomSpinInRange(const struct FST_CameraSpinProperty& Min, const struct FST_CameraSpinProperty& Max, class UObject* __WorldContext, struct FST_CameraSpinProperty* Result);
	void STATIC_RandomInitialcameraPropertyInRange(const struct FST_CameraInitialProperty& Min, const struct FST_CameraInitialProperty& Max, bool useForcePair_Flag, bool forcePair, class UObject* __WorldContext, struct FST_CameraInitialProperty* Result);
	void STATIC_CreatePairTalkCamera(const struct FST_CameraInitialProperty& MinInitialProperty, const struct FST_CameraInitialProperty& MaxInitialProperty, const struct FST_CameraSpinProperty& MinSpin, const struct FST_CameraSpinProperty& MaxSpin, const struct FST_CameraDollyZoomProperty& MinDolly, const struct FST_CameraDollyZoomProperty& MaxDolly, class UObject* __WorldContext);
	void STATIC_GetCameraPropertiesFromClass(class UClass* DefaultTalkCameraClass, class UObject* __WorldContext, struct FST_CameraInitialProperty* InitialCameraProperty, bool* Enable_Spin, struct FST_CameraSpinProperty* Spin_Property, bool* Enable_Dolly_Zoom, struct FST_CameraDollyZoomProperty* Dolly_Zoom_Property);
	void STATIC_DrawDebugLocus(const struct FLinearColor& LineColor, float Duration, float Thickness, class UObject* __WorldContext, TArray<struct FVector>* Locus);
	void STATIC_CheckSeeableFromLocusWithRate(float BottomSeeableRate, class USceneComponent* SpeakerMesh, class USceneComponent* ListenerMesh, bool isDebugDraw, bool isPair, const struct FName& SocketName, TEnumAsByte<EM_LeftOrRight> CameraPosition, const struct FST_CameraInitialProperty& InitialCameraProperty, bool bTargetReverse, class UObject* __WorldContext, TArray<struct FVector>* Locus, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, TArray<class AActor*>* ActorsToIgnore, bool* isSeeable, float* resultSeeableRate, TArray<struct FHitResult>* HitResults);
	void STATIC_CheckHitFromLocus(float Radius, bool isDebugDraw, bool bAllowOverlap, bool bCheckTwoSide, bool printCollisionMessage, class UObject* __WorldContext, TArray<struct FVector>* Locus, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, TArray<class AActor*>* ActorsToIgnore, bool* IsHit, TArray<struct FHitResult>* HitResults);
	void STATIC_isAvailableFromClass(class UClass* TalkCamera, int DivNum, class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, float Radius, bool isDebugDraw, bool CheckTwoSide, bool printCollisionMessage, bool _isAcEvent, class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>* CheckHitObjectTypes, bool* IsAvailable, TArray<struct FHitResult>* HitResult);
	void STATIC_CalcDefaultTalkCameraLocus(int DivNum, class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, TEnumAsByte<EM_LeftOrRight> CameraPosition, const struct FST_CameraInitialProperty& InitialCameraProperty, bool EnableSpin, const struct FST_CameraSpinProperty& SpinProperty, bool EnableDollyZoom, const struct FST_CameraDollyZoomProperty& DollyZoomProperty, bool isDrawDebug, class UObject* __WorldContext, TArray<struct FVector>* newParam);
	void STATIC_CalcImaginaryPositionValue(TEnumAsByte<EM_LeftOrRight> CameraPosition, class UObject* __WorldContext, float* ImaginaryPositionValue);
	void STATIC_CalcFinishDollyCameraDistance(float StartCameraDistance, float StandardCameraDistance, float CharacterHalfDistance, class UObject* __WorldContext, struct FST_CameraDollyZoomProperty* ST_CameraDollyZoomProperty, struct FST_CameraInitialProperty* ST_CameraInitialProperty, float* FinishCameraDistance);
	void STATIC_CalcCameraSpin(float Time, const struct FRotator& StartRotation, const struct FRotator& FinishRotation, class UObject* __WorldContext, struct FST_CameraSpinProperty* ST_CameraSpinProperty, struct FRotator* ResultRotation);
	void STATIC_CalcFinishSpin(float ImaginaryPositionValue, float StandardhalfDistance, float CurrentCameraDistance, const struct FRotator& StartRotation, const struct FRotator& StandardRotation, class UObject* __WorldContext, struct FST_CameraInitialProperty* ST_CameraInitialProperty, struct FST_CameraSpinProperty* ST_CameraSpinProperty, struct FRotator* FinishRotation);
	void STATIC_CalcSpinElapsedTime(float DeltaTime, float CurrentElapsedTime, class UObject* __WorldContext, struct FST_CameraSpinProperty* ST_CameraSpinProperty, float* resultElapsedTime);
	void STATIC_CalcCameraDistance(class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, float* CameraDistance, float* CharacterHalfDistance, float* StandardCameraDistance);
	void STATIC_CalcCameraRotation(class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, float ImaginaryPositionValue, const struct FST_CameraInitialProperty& InitialCameraProperty, TEnumAsByte<EM_LeftOrRight> CameraPosition, float StandardhalfDistance, class UObject* __WorldContext, struct FRotator* ResultRotation, struct FRotator* StandardRotation);
	void STATIC_CalcLockPointDepthOffset(class USceneComponent* ListeningSkeletalMesh, class USceneComponent* SpeakingSkeletalMesh, float StandardhalfDistance, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, struct FVector* DepthOffset);
	void STATIC_CalcCameraDollyZoom(float Time, float StartCameraDistance, float FinishCameraDistance, class UObject* __WorldContext, struct FST_CameraDollyZoomProperty* ST_CameraDollyZoomProperty, struct FVector* Location);
	void STATIC_CalcCameraFovZoom(float Time, float StartFOV, class UObject* __WorldContext, struct FST_CameraFovZoomProperty* ST_CameraFovZoomProperty, float* FOV);
	void STATIC_CalcLookPos(class USceneComponent* SpeakingSkeletalMesh, class USceneComponent* ListeningSkeletalMesh, float ImaginaryPositionValue, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, struct FVector* LookPos);
	void STATIC_AdjustRotationFromDistance(const struct FRotator& Rotation, float DistanceRatio, class UObject* __WorldContext, struct FRotator* AdjustmentRotation);
	void STATIC_AdjustCameraDistance(float CharacterHalfDistance, float CameraDistance, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, float* AdjustmentCameraDistance);
	void STATIC_CalcLookPointOffset(class USceneComponent* ListeningSkeletalMesh, class USceneComponent* SpeakingSkeletalMesh, float StandardhalfDistance, float ImaginaryPositionValue, const struct FST_CameraInitialProperty& InitialCameraProperty, class UObject* __WorldContext, struct FVector* LookPointOffset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
