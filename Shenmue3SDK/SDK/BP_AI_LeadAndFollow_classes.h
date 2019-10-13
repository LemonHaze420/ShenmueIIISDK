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

// BlueprintGeneratedClass BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C
// 0x0008 (0x0440 - 0x0438)
class ABP_AI_LeadAndFollow_C : public AS3AIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C");
		return ptr;
	}


	class US3PathFollowingComponent* GetS3PathFollowingComponent();
	void UserConstructionScript();
	void StartLead();
	void StartFollow();
	void ExecuteUbergraph_BP_AI_LeadAndFollow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
