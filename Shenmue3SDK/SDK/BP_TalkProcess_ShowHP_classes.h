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

// BlueprintGeneratedClass BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C
// 0x0030 (0x0068 - 0x0038)
class UBP_TalkProcess_ShowHP_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UShowHPTask*                                 ShowHP_Task;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_UI_LoadingHintWindowBase_C*              UIManagingActor;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FAccurateTime                               StartTime;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class ABP_CutsceneTimeScheduleManager_C*           TimeScheduleManager;                                      // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              HINT_TIME_LIMIT;                                          // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C");
		return ptr;
	}


	bool DoesPlayerHaveFood();
	bool StillRunning();
	void TickTransitions(float DeltaTime);
	bool IsLowHP();
	void SetGlobalHPResultFlag(bool bIsFull);
	void UpdateGlobalHPResultFlag();
	void CollectDependencies();
	void DestroyUI();
	bool SpawnUI(class UClass* Class);
	bool ShouldShowMeter();
	void OnLoaded_6A9A1405492543F002206D8B74ACA2FA(class UClass* Loaded);
	void Activate();
	void Finalize();
	void FinishHint();
	void CleanUp();
	void Update(float* DeltaTime);
	void ForceFinish();
	void UnbindInventoryClose();
	void CloseInventory();
	void ExecuteUbergraph_BP_TalkProcess_ShowHP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
