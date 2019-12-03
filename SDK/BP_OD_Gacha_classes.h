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

// BlueprintGeneratedClass BP_OD_Gacha.BP_OD_Gacha_C
// 0x002C (0x0874 - 0x0848)
class ABP_OD_Gacha_C : public ABP_Otoshidama_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0848(0x0008) (Transient, DuplicateTransient)
	bool                                               bGameSuccess;                                             // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0851(0x0003) MISSED OFFSET
	int                                                EVENT_TALK_SUCCESS;                                       // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EVENT_TALK_FAILURE;                                       // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	TArray<struct FST_ODGacha>                         gacha_pocket;                                             // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WinEndDelayTime;                                          // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OD_Gacha.BP_OD_Gacha_C");
		return ptr;
	}


	void STATIC_GetBottomPocketMaterial(int Index, class UMaterialInstance** return_value);
	void GetBottomPocketCount(int* Output);
	void GetBottomPocket(int Dimension_1, int* Output);
	struct FString STATIC_GetItemID();
	class ABP_MiniGameInputBase_C* STATIC_SpawnInputControlActor();
	void STATIC_UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void RestartMiniGame();
	void HitCheck();
	void EndMiniGame();
	void Finalize_Check();
	void StartMiniGame();
	void EnabledPlayerOnDecide();
	void STATIC_ExecuteUbergraph_BP_OD_Gacha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
