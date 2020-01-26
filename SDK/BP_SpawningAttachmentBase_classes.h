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

// BlueprintGeneratedClass BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C
// 0x0010 (0x0378 - 0x0368)
class ABP_SpawningAttachmentBase_C : public AS3NPCAttachmentActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void RequestActionName(const struct FName& ActionName);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SpawningAttachmentBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
