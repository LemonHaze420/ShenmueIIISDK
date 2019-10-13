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

// BlueprintGeneratedClass BP_S3AtomSoundArea.BP_S3AtomSoundArea_C
// 0x001D (0x0395 - 0x0378)
class ABP_S3AtomSoundArea_C : public ABP_S3AtomSound_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class US3SoundAreaComponent*                       S3SoundArea;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereCollision;                                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AreaDisable;                                              // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AtomSoundArea.BP_S3AtomSoundArea_C");
		return ptr;
	}


	void IsDisable(bool* Disabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetDisableSound(bool* Disable, class AActor** Actor);
	void BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature();
	void BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature();
	void ExecuteUbergraph_BP_S3AtomSoundArea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
