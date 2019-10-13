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

// BlueprintGeneratedClass BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C
// 0x008C (0x03B4 - 0x0328)
class ABP_ItemListViewerItemRotateRoot_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot1;                                        // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           NewVar_1;                                                 // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_ItemListViewerItem001_C*                 Item;                                                     // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               isRotate;                                                 // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	struct FVector                                     pos;                                                      // 0x034C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     item_name;                                                // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     path_name;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              baseCalcSize;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     localPos;                                                 // 0x037C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Pivot;                                                    // 0x0388(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              nowRot;                                                   // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    defaultRot;                                               // 0x0398(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotAdd;                                                   // 0x03A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RotateSpeed;                                              // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C");
		return ptr;
	}


	void UpdRotate();
	void SetCalcSize(float Size);
	void ChangeMesh(class UStaticMesh* Mesh, class USkeletalMesh* SkelMesh, class UAnimationAsset* NewAnimToPlay);
	void SetBaseSize(float Size);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_ItemListViewerItemRotateRoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
