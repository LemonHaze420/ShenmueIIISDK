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

// BlueprintGeneratedClass BP_BattleTask.BP_BattleTask_C
// 0x00A8 (0x0452 - 0x03AA)
class ABP_BattleTask_C : public ABP_BattleTaskBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UBPC_EventLevelStreaming_C*                  BPC_EventLevelStreaming;                                  // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BattleManagerBase_C*                     ManagerBase;                                              // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LoadedLevel;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Started;                                                  // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03D2(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x03D2(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_BattleTask.BP_BattleTask_C.BattleManagerClass
	bool                                               Ending;                                                   // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x28];                                      // 0x0401(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_BattleTask.BP_BattleTask_C.LoadingWindowClass
	bool                                               IsFadeOut;                                                // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Abort;                                                    // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0432(0x0006) MISSED OFFSET
	class UBTL_LaunchParameters_C*                     LaunchData;                                               // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinishedClothesChange;                                    // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinishedLoadIn;                                           // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0442(0x0006) MISSED OFFSET
	class ABP_UI_LoadingHintWindowBase_C*              HintWindow;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowGameTime;                                            // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartedBGM;                                               // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleTask.BP_BattleTask_C");
		return ptr;
	}


	class UObject* GetAssetReferenceHolder();
	void EndBattle(TEnumAsByte<EBattleWinLoseResult> Result, bool* newParam);
	void EnableGameTime(bool Enable);
	void RunOnBothTransitions();
	void CheckFadeFinishedOrCancelled(bool* Done);
	void StartChangeClothes(bool StartBattle);
	void SetPostBattleEventFlags();
	void StartFadeStep(bool FadeOut, bool CanStartFade, bool* MustWait);
	void CheckFadeFinished(bool FadeOut, bool* Finished);
	void CheckFadeInProgress(bool FadeOut, bool* InProgress);
	void StartBattle_ByMediator(class ABP_BattleMediatorBase_C* MediatorBase);
	void StartBattle_ByID(const struct FName& BattleId, const struct FName& LoadLevel);
	void FindMediator(const struct FName& ID, class ABP_BattleMediatorBase_C** Battle);
	void CallEndEvents();
	void UserConstructionScript();
	void OnLoaded_3AC68FA04E82B1C21019C4A9165E85C1(class UClass* Loaded);
	void OnLoaded_F3EFC8734A9BA6BB6F0861A8C832BDC2(class UClass* Loaded);
	void OnBattleEndEvent(TEnumAsByte<EBattleWinLoseResult> Result);
	void AbortBattle();
	void ClothesChanged(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StartBattle();
	void BndEvt__BPC_EventLevelStreaming_K2Node_ComponentBoundEvent_1_OnFinishDataLoad__DelegateSignature();
	void BndEvt__BPC_EventLevelStreaming_K2Node_ComponentBoundEvent_2_OnFinishUnload__DelegateSignature();
	void BndEvt__BPC_EventLevelStreaming_K2Node_ComponentBoundEvent_0_OnFinishListLoad__DelegateSignature();
	void OnHintWindowClose();
	void ExecuteUbergraph_BP_BattleTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
