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

// BlueprintGeneratedClass BP_AnimNotify_TurnAroundBreakout.BP_AnimNotify_TurnAroundBreakout_C
// 0x0000 (0x0038 - 0x0038)
class UBP_AnimNotify_TurnAroundBreakout_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_TurnAroundBreakout.BP_AnimNotify_TurnAroundBreakout_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
