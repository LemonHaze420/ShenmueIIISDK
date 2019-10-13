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

// BlueprintGeneratedClass BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C
// 0x0061 (0x0151 - 0x00F0)
class UBPC_MiniGameFollowTargetCamera_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            RefCamera;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     DefaultLocation;                                          // 0x0100(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefalutRotation;                                          // 0x0118(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FollowInterpSpeed;                                        // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FastFollowInterpSpeed;                                    // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowFollowInterpSpeed;                                    // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReturnPosition;                                      // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	struct FVector2D                                   LookAtPoint2D;                                            // 0x0134(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ReturnInterpSpeed;                                        // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReturnDefaultCameraRotation;                            // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bCallDispatcher;                                          // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C");
		return ptr;
	}


	void FollowEnd();
	void FollowStart();
	void SetCameraDefaultRelativeTransform(struct FTransform* trans);
	void Update(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void SetCameraFollowTargetActor(class AActor* Actor);
	void OnDestroyTargetActor(class AActor* DestroyedActor);
	void ExecuteUbergraph_BPC_MiniGameFollowTargetCamera(int EntryPoint);
	void OnReturnDefaultCameraRotation__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
