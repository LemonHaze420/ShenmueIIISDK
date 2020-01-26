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

// BlueprintGeneratedClass BP_OD_Perfect.BP_OD_Perfect_C
// 0x0020 (0x0861 - 0x0841)
class ABP_OD_Perfect_C : public ABP_Otoshidama_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0841(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0848(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameGamble_C*                       BPC_MiniGameGamble;                                       // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                EVENT_TALK_SUCCESS;                                       // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EVENT_TALK_FAILURE;                                       // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameSuccess;                                             // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OD_Perfect.BP_OD_Perfect_C");
		return ptr;
	}


	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	int GetRewardMoney();
	void UserConstructionScript();
	void HitCheck();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void RestartMiniGame();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void EndMiniGame();
	void Finalize_Check();
	void StartMiniGame();
	void Otoshidama_End(bool is_success);
	void ExecuteUbergraph_BP_OD_Perfect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
