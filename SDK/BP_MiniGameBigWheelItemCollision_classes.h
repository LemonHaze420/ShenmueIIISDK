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

// BlueprintGeneratedClass BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C
// 0x0078 (0x03A0 - 0x0328)
class ABP_MiniGameBigWheelItemCollision_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               HitCollision;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ItemId;                                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCollisionOverlap;                                       // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FST_MiniGameBigWheelItemData                ItemData;                                                 // 0x0360(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C");
		return ptr;
	}


	void SetCollisionEnabled(bool Enabled);
	void SetItemData(const struct FST_MiniGameBigWheelItemData& ItemData);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_MiniGameBigWheelItemCollision(int EntryPoint);
	void OnCollisionOverlap__DelegateSignature(const struct FST_MiniGameBigWheelItemData& ItemData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
