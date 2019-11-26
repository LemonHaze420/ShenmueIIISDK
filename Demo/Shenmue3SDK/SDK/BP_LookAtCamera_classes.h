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

// BlueprintGeneratedClass BP_LookAtCamera.BP_LookAtCamera_C
// 0x0099 (0x052D - 0x0494)
class ABP_LookAtCamera_C : public ABP_DefaultTalkCamera_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      TargetActor;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x04B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MoveTargetVector;                                         // 0x04BC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartCameraLocation;                                      // 0x04C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NPCSocketLocation;                                        // 0x04D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hitted;                                                   // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              collidePosRate;                                           // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x04F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FinalFOV;                                                 // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EaseFunction;                                             // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	float                                              LookAtCameraInitialFOV;                                   // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEndBlending;                                             // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LookAtCamera.BP_LookAtCamera_C");
		return ptr;
	}


	void GetCamera(class UCameraComponent** Camera);
	void HitCheck();
	void GetLocus(TArray<struct FVector>* Locus);
	void TargetIsBehaindPlayer(bool* Result);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_LookAtCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
