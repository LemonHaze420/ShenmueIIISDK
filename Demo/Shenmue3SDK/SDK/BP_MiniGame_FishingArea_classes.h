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

// BlueprintGeneratedClass BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C
// 0x0065 (0x038D - 0x0328)
class ABP_MiniGame_FishingArea_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        area;                                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_Fishing_FishSetting>             SpawnFish;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UActorComponent*>                     DestroyComponetList;                                      // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                AreaColor;                                                // 0x0360(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EditorDispInfoDistance;                                   // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnFishNum;                                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Fishing_FreeMoveFish_C*>          FreeMoveFishList;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                StampRallyFlagIndex;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugDispInfo;                                           // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C");
		return ptr;
	}


	void SpawnFreeFish();
	void GetRareScale(int Index, float* RareScale);
	void GetSpawnFishData(TArray<struct FST_Fishing_FishSetting>* SpawnFish);
	void SetEnabledArea(bool Enabled);
	void CheckOverlappingActor(class AActor* Actor, bool* IsOverlapping);
	void GetFishIdName(TEnumAsByte<E_MiniGame_FishType> FishType, struct FName* Value);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_MiniGame_FishingArea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
