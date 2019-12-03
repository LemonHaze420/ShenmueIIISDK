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

// BlueprintGeneratedClass BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C
// 0x0056 (0x0660 - 0x060A)
class ABP_MiniGame_ThrowGameBase_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow_ThrowPoint;                                         // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh_Player;                                              // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene_MeshRoot;                                           // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              ThrowTargets;                                             // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UClass*                                      AnimBlueprintClass;                                       // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_MiniGame_ThrowObjectBase_C*              CurrentThrowObject;                                       // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_MiniGame_ThrowObjectBase_C*>      ThrowObjectList;                                          // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C");
		return ptr;
	}


	class UMeshComponent* STATIC_GetClothMeshComponent();
	void STATIC_SpawnThrowObject(class UClass* Class, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class ABP_MiniGame_ThrowObjectBase_C** CurrentThrowObject);
	void STATIC_SetupAnimInstance(class UClass* NewClass);
	void STATIC_UserConstructionScript();
	void StartMiniGame();
	void EndMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void RestartMiniGame();
	void STATIC_OnThorwObject();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MiniGame_ThrowGameBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
