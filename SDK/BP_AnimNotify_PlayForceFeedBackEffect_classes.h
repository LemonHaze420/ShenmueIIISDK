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

// BlueprintGeneratedClass BP_AnimNotify_PlayForceFeedBackEffect.BP_AnimNotify_PlayForceFeedBackEffect_C
// 0x0008 (0x0040 - 0x0038)
class UBP_AnimNotify_PlayForceFeedBackEffect_C : public UAnimNotify
{
public:
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_PlayForceFeedBackEffect.BP_AnimNotify_PlayForceFeedBackEffect_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
