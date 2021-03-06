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

// BlueprintGeneratedClass BP_AttachmentFryingPan.BP_AttachmentFryingPan_C
// 0x0008 (0x0390 - 0x0388)
class ABP_AttachmentFryingPan_C : public ABP_SpawningAttachment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttachmentFryingPan.BP_AttachmentFryingPan_C");
		return ptr;
	}


	void CreateSmoke();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AttachmentFryingPan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
