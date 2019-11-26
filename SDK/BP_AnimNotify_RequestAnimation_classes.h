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

// BlueprintGeneratedClass BP_AnimNotify_RequestAnimation.BP_AnimNotify_RequestAnimation_C
// 0x0010 (0x0048 - 0x0038)
class UBP_AnimNotify_RequestAnimation_C : public UAnimNotify
{
public:
	struct FName                                       AnimationName;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                AttachmentTag;                                            // 0x0040(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_RequestAnimation.BP_AnimNotify_RequestAnimation_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
