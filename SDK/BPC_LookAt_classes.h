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

// BlueprintGeneratedClass BPC_LookAt.BPC_LookAt_C
// 0x0154 (0x0394 - 0x0240)
class UBPC_LookAt_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      TargetActor;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledComponent;                                        // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	struct FVector                                     LookAtWorldLocation;                                      // 0x0254(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledEye;                                              // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      RefTargetComSkeltalMesh;                                  // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      RefSelfComSkeltalMesh;                                    // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FRotator                                    LookAtEye;                                                // 0x0278(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LookAtNeck;                                               // 0x0284(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledNeck;                                             // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledBody;                                             // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	struct FRotator                                    LookAtLumbus;                                             // 0x0294(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LookAtWaist;                                              // 0x02A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LookAtBreast;                                             // 0x02AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTargetWorldLocationMode;                                 // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOutputDebugLog;                                          // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02BA(0x0002) MISSED OFFSET
	struct FST_LookAtEyeParameter                      LookAtEyeParameter;                                       // 0x02BC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_LookAtNeckParameter                     LookAtNeckParameter;                                      // 0x02C4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_LookAtBodyParameter                     LookatWaistParameter;                                     // 0x02CC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_LookAtBodyParameter                     LookatBreastParameter;                                    // 0x02D4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_LookAtBodyParameter                     LookatLumbusParameter;                                    // 0x02DC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class USceneComponent*                             EyeTargetComponentRight;                                  // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             EyeTargetComponentLeft;                                   // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FRotator                                    LookAtTargetRotation;                                     // 0x02F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ThresholdTargetLocationDistance;                          // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CacheTargetLocation;                                      // 0x0308(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipRenderedCheck;                                       // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FVector                                     NeckLocation;                                             // 0x0318(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LumbusLocation;                                           // 0x0324(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WaistLocation;                                            // 0x0330(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BreastLocation;                                           // 0x033C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReset;                                                   // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	struct FRotator                                    AnimEyeRotation;                                          // 0x0350(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimEyesWaitTime;                                         // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimEyesElapsedTime;                                      // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimEyesInterpSpeed;                                      // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetAnimEyeRotation;                                    // 0x0368(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledAnimEyes;                                         // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	float                                              AnimEyesRandomRange;                                      // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimEyesTimeMinRandomRange;                               // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesTimeMaxRandomRange;                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEyesExecutionRate;                                    // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance2;                                                // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_LookAtNeckParameter                     LookAtHeadParameter;                                      // 0x038C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_LookAt.BPC_LookAt_C");
		return ptr;
	}


	void STATIC_GetRandomAnimEyesTarget(float* Target);
	void STATIC_UpdateAnimEyeRotation();
	bool STATIC_IsDebugLog();
	bool IsWasRecentlyRenderedOwner();
	void STATIC_IsProcessingLookAt(bool* IsProcessing);
	void STATIC_GetLookAtEyesLocation(struct FVector* R, struct FVector* L);
	void GetTargetLocation(bool* bSuccess, struct FVector* TargetLocation);
	void Update();
	void STATIC_GetTarget(class AActor** TargetActor);
	void SetTarget(class AActor* Actor);
	void STATIC_ReceiveBeginPlay();
	void STATIC_Init();
	void ExecuteUbergraph_BPC_LookAt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
