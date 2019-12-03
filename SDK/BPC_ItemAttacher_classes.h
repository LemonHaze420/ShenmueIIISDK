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

// BlueprintGeneratedClass BPC_ItemAttacher.BPC_ItemAttacher_C
// 0x0028 (0x0118 - 0x00F0)
class UBPC_ItemAttacher_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_PlayerTalkItem_C*                        SpawnedItem;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ItemAttachSocket;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SkeletonAttachSocket;                                     // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ItemAttacher.BPC_ItemAttacher_C");
		return ptr;
	}


	void TryGetItemSocketLocation(const struct FName& InputPin, struct FVector* Location, bool* Success);
	bool STATIC_IsItemSpawned();
	void STATIC_GetItemActor(class ABP_PlayerTalkItem_C** ItemBP);
	void DestroyItem();
	void STATIC_SpawnItem(const struct FName& ItemName, bool ShowToOther);
	void SetupItemMaterial();
	void STATIC_ReceiveBeginPlay();
	void STATIC_HiddenItem();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_ItemAttacher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
