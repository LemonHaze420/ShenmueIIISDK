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

// BlueprintGeneratedClass BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C
// 0x0052 (0x0142 - 0x00F0)
class UBPC_MiniGameThrowArmAnimation_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SelfSkeletalMesh;                                         // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimInstance*                               SelfAnimInstance;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             RootComponent;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     DefalutRootLocation;                                      // 0x0110(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefalutRootRotation;                                      // 0x011C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPower;                                             // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnimThrowArm;                                            // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnimTakeOut;                                             // 0x012D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnimThrowEndArm;                                         // 0x012E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x012F(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedTakeOutDispatcher;                              // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bThrowingMode;                                            // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialize;                                              // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C");
		return ptr;
	}


	void IsInitializeVariables(bool* bSuccess);
	void STATIC_AllStopAnimation();
	void STATIC_UpdateArmRotation(const struct FRotator& Add);
	void IsAligned(bool* bAligned);
	void PlayTakeOutAnimation();
	void StopTakeOutAnimation();
	void PlayThrowAnimation();
	void STATIC_StopThrowAnimation();
	void STATIC_PlayThrowEndAnimation();
	void STATIC_StopThrowEndAnimation();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void InitializeVariables();
	void STATIC_ResetVariables();
	void ExecuteUbergraph_BPC_MiniGameThrowArmAnimation(int EntryPoint);
	void STATIC_OnFinishedTakeOutDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
