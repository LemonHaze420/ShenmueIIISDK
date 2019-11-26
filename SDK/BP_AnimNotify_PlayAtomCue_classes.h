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

// BlueprintGeneratedClass BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C
// 0x0021 (0x0059 - 0x0038)
class UBP_AnimNotify_PlayAtomCue_C : public US3AnimNotify_PlayAtomCue
{
public:
	class USoundAtomCue*                               Sound;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Bone;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECRISelectorType>                      SelectorType;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableCutscene;                                          // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_PlayAtomCue.BP_AnimNotify_PlayAtomCue_C");
		return ptr;
	}


	void CanPlay(bool* CAN);
	void SetSelectorLabel(class UAtomComponent* Component);
	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
