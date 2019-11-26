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

// BlueprintGeneratedClass BPC_LookAtFSM.BPC_LookAtFSM_C
// 0x0029 (0x03C1 - 0x0398)
class UBPC_LookAtFSM_C : public US3LookAtFSMComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     CacheTargetLocation;                                      // 0x03A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ThresholdTargetLocationDistance;                          // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnabledDebugLog;                                          // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class US3FaceAnimDataAsset*                        DefaultDataAsset;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CacheLocationValid;                                       // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_LookAtFSM.BPC_LookAtFSM_C");
		return ptr;
	}


	bool GetIdealLookAtTargetLocation(struct FVector* OutTargetLocation);
	void TryCacheTargetLocation(const struct FVector& Target, struct FVector* Output);
	bool GetLookAtTargetLocation(struct FVector* OutTargetLocation);
	void ReceiveTick(float* DeltaSeconds);
	void Init(class US3FaceAnimDataAsset* FaceAnimData);
	void ExecuteUbergraph_BPC_LookAtFSM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
