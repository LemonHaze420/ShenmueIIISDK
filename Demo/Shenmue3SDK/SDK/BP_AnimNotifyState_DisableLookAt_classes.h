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

// BlueprintGeneratedClass BP_AnimNotifyState_DisableLookAt.BP_AnimNotifyState_DisableLookAt_C
// 0x0000 (0x0030 - 0x0030)
class UBP_AnimNotifyState_DisableLookAt_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_DisableLookAt.BP_AnimNotifyState_DisableLookAt_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
