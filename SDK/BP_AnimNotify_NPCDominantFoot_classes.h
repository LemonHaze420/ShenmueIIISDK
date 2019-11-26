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

// BlueprintGeneratedClass BP_AnimNotify_NPCDominantFoot.BP_AnimNotify_NPCDominantFoot_C
// 0x0001 (0x0039 - 0x0038)
class UBP_AnimNotify_NPCDominantFoot_C : public UAnimNotify
{
public:
	bool                                               RightFoot;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_NPCDominantFoot.BP_AnimNotify_NPCDominantFoot_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
