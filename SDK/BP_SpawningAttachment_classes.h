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

// BlueprintGeneratedClass BP_SpawningAttachment.BP_SpawningAttachment_C
// 0x0010 (0x0388 - 0x0378)
class ABP_SpawningAttachment_C : public ABP_SpawningAttachmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMeshComp;                                           // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawningAttachment.BP_SpawningAttachment_C");
		return ptr;
	}


	class UStaticMeshComponent* GetStaticMeshComp();
	bool IsMeshVisibility();
	void UserConstructionScript();
	void SetMeshVisibility(bool bEnable);
	void ExecuteUbergraph_BP_SpawningAttachment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
