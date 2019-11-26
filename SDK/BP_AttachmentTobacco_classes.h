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

// BlueprintGeneratedClass BP_AttachmentTobacco.BP_AttachmentTobacco_C
// 0x0008 (0x0390 - 0x0388)
class ABP_AttachmentTobacco_C : public ABP_SpawningAttachment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttachmentTobacco.BP_AttachmentTobacco_C");
		return ptr;
	}


	void CreateSmoke();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AttachmentTobacco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
