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

// BlueprintGeneratedClass BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C
// 0x0038 (0x0360 - 0x0328)
class ABP_MiniGameChooseSelectTriangle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_MiniGameChooseTriangleSpawn_C*>   TriangleList;                                             // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     OffsetPos;                                                // 0x0348(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                MiniGameLastIndex;                                        // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              moveSpeed;                                                // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C");
		return ptr;
	}


	void DestroyTriangle();
	void STATIC_SetLocationAndRotation(class AActor* TargetActor, class UCameraComponent* Camera);
	void UpdateVisible(int InputPin);
	void SetMiniGameLastIndex(int MiniGameLastIndex);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_MiniGameChooseSelectTriangle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
