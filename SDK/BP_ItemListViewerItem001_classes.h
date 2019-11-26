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

// BlueprintGeneratedClass BP_ItemListViewerItem001.BP_ItemListViewerItem001_C
// 0x003C (0x0374 - 0x0338)
class ABP_ItemListViewerItem001_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BaseSize;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdSize;                                                  // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseCalcedSize;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NowBound;                                                 // 0x0354(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Pivot;                                                    // 0x0360(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               isStaticMeshVisble;                                       // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSkelMeshVisible;                                        // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x036E(0x0002) MISSED OFFSET
	float                                              lastRate;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemListViewerItem001.BP_ItemListViewerItem001_C");
		return ptr;
	}


	void CalcBaseSize();
	void ChangeItem(class UStaticMesh* Mesh, class USkeletalMesh* SkelMesh, class UAnimationAsset* NewAnimToPlay);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_ItemListViewerItem001(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
