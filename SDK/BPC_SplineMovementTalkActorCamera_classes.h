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

// BlueprintGeneratedClass BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C
// 0x003F (0x0160 - 0x0121)
class UBPC_SplineMovementTalkActorCamera_C : public UBPC_SplineMovement_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0128(0x0008) (Transient, DuplicateTransient)
	bool                                               bUpdateSplineRotation;                                    // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class UCameraComponent*                            Camera;                                                   // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           LookAtEaseFunction;                                       // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	TArray<struct FVector>                             LookAtVectors;                                            // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LookAtEaseBlendExp;                                       // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LookAtEaseSteps;                                          // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C");
		return ptr;
	}


	void SplineMovingProcess(bool* Result);
	void ReceiveBeginPlay();
	void ForceMoveSpline();
	void ExecuteUbergraph_BPC_SplineMovementTalkActorCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
