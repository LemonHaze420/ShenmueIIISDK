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

// BlueprintGeneratedClass BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C
// 0x0088 (0x03B0 - 0x0328)
class ABP_MoveCutsceneRoot_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultTransform;                                         // 0x0340(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_CutscenePlayer_C*>                CutscenePlayerList;                                       // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTransform                                  InfiniteTransform;                                        // 0x0380(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C");
		return ptr;
	}


	void AttachActor(class AActor* AttachTarget);
	void StopCutScenePlayerByTag(const struct FName& Tag);
	void StopCutScenePlayer();
	void FindCutScenePlayerByTag(const struct FName& Tag, class ABP_CutscenePlayer_C** CutscenePlayer);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ResetTransform();
	void SetVisibleAllCutsceneActors(bool bNewHidden);
	void SetInfiniteTransform();
	void ExecuteUbergraph_BP_MoveCutsceneRoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
