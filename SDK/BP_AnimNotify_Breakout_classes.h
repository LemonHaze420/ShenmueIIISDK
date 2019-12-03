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

// BlueprintGeneratedClass BP_AnimNotify_Breakout.BP_AnimNotify_Breakout_C
// 0x0000 (0x0038 - 0x0038)
class UBP_AnimNotify_Breakout_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_Breakout.BP_AnimNotify_Breakout_C");
		return ptr;
	}


	struct FString STATIC_GetNotifyName();
	bool STATIC_Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
