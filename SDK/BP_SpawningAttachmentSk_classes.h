#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C
// 0x0010 (0x0388 - 0x0378)
class ABP_SpawningAttachmentSk_C : public ABP_SpawningAttachmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C");
		return ptr;
	}


	class USkeletalMeshComponent* GetSkeletalMeshComp();
	bool IsMeshVisibility();
	void GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeltalMeshComp);
	void UserConstructionScript();
	void SetMeshVisibility(bool bEnable);
	void ExecuteUbergraph_BP_SpawningAttachmentSk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
