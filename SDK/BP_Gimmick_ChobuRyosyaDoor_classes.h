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

// BlueprintGeneratedClass BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C
// 0x002F (0x05A8 - 0x0579)
class ABP_Gimmick_ChobuRyosyaDoor_C : public ABP_Gimmick_OpenDoor_Template_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ScreenMesh;                                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               StackEvent;                                               // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LevelLoading;                                             // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0592(0x0006) MISSED OFFSET
	struct FTimerHandle                                FadeOutHandle;                                            // 0x0598(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       TargetLevel;                                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C");
		return ptr;
	}


	void GetTargetStreamingLevel(class ULevelStreaming** Level);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FinishAdjustPosition();
	void CallNotifyEvent();
	void FinishLevelLoaded();
	void CallEventComplete();
	void FinishLoadLevel();
	void FinishFadeOut();
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	void FinishLoadLevelGameMode();
	void StartCutscene();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Gimmick_ChobuRyosyaDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
