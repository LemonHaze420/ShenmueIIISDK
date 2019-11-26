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

// BlueprintGeneratedClass BPC_FootIK.BPC_FootIK_C
// 0x008D (0x017D - 0x00F0)
class UBPC_FootIK_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      RefMesh;                                                  // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              SinkingDistanceScale;                                     // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootIKOffsetScale;                                        // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootOffsetInterpSpeed;                                    // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SinkingInterpSpeed;                                       // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FName                                       FootSocketLeft;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootSocketRight;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TraceNameStart;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TraceNameEnd;                                             // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_PivotFoot>                           AnimPivotFoot;                                            // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisabledFootIKOffsetLeft;                                // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisabledFootIKOffsetRight;                               // 0x013A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x013B(0x0001) MISSED OFFSET
	float                                              LeftFootOffsetZ;                                          // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightFootOffsetZ;                                         // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSinkingDistance;                                   // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSinkingDistance;                                       // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFootIanding;                                            // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LeftFootRotaionX;                                         // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightFootRotaionX;                                        // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightFootRotaionY;                                        // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftFootRotaionY;                                         // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootRotaionInterpSpeed;                                   // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabledFootRotation;                                    // 0x0174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              LimitFootOffset;                                          // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugLog;                                                // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_FootIK.BPC_FootIK_C");
		return ptr;
	}


	void InterpSinkingDistance(float Target, float* SinkingDistance);
	void UpdateRightFootRotaion(bool HitLeft, const struct FVector& Normal);
	void UpdateLeftFootRotaion(bool HitLeft, const struct FVector& Normal);
	void GetFootRotaion(float* LeftFootRotaionX, float* LeftFootRotaionY, float* RightFootRotaionX, float* RightFootRotaionY);
	void TryGetSinkingDistance(const struct FName& FootSocketName, float StartLocationZ, float EndLocationZ, bool* bHit, float* SinkingDistance, struct FVector* HitNormal);
	void TraceFromLocation(const struct FVector& StartLocation, const struct FVector& EndLocation, bool* bHit, struct FVector* Location, struct FVector* Normal);
	void TryGetFootSinkingOffset(float LocationX, float LocationY, float StartLocationZ, float EndLocationZ, bool* bHit, float* SinkingOffsetZ);
	void UpdateActorLocalOffsetZ(bool* bHitFootLeft, bool* bHitFootRight);
	void UpdateFootIKOffset(bool bHitFootLeft, bool bHitFootRight);
	void GetFootOffset(float* LeftFootOffsetZ, float* RightFootOffsetZ);
	void Update();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_FootIK(int EntryPoint);
	void OnFootIanding__DelegateSignature(float SinkingDistance_Z);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
