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

// BlueprintGeneratedClass BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C
// 0x0025 (0x039D - 0x0378)
class ABP_S3AtomSoundAreaBox_C : public ABP_S3AtomSound_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class US3SoundAreaComponent*                       S3SoundArea;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxCollision;                                             // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x0390(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AreaDisable;                                              // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C");
		return ptr;
	}


	void STATIC_IsDisable(bool* Disabled);
	void UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature();
	void STATIC_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature();
	void STATIC_ExecuteUbergraph_BP_S3AtomSoundAreaBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
