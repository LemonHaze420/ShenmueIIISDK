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

// BlueprintGeneratedClass BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C
// 0x0028 (0x0118 - 0x00F0)
class UBPC_NPCLeadAccelerator_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              TargetSpeed;                                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkAnimBaseSpeed;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunAnimBaseSpeed;                                         // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveSpeed;                                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMoveSpeed;                                             // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterMovementComponent*                 Mover;                                                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C");
		return ptr;
	}


	void SetSpeedInstant(float Speed);
	void GetTargetSpeed(float* TargetSpeed);
	float ClampSpeed(float Value);
	float MapToSpeedRange(float Value, float InRangeA, float InRangeB);
	void SetTargetSpeed(float TargetSpeed);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void Reset();
	void ExecuteUbergraph_BPC_NPCLeadAccelerator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
