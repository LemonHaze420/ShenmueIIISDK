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

// BlueprintGeneratedClass BP_OD_Take2.BP_OD_Take2_C
// 0x001D (0x085D - 0x0840)
class ABP_OD_Take2_C : public ABP_Otoshidama_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameGamble_C*                       BPC_MiniGameGamble;                                       // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                clear_hit_num;                                            // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EVENT_TALK_SUCCESS;                                       // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EVENT_TALK_FAILURE;                                       // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameSuccess;                                             // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OD_Take2.BP_OD_Take2_C");
		return ptr;
	}


	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	int GetRewardMoney();
	void UserConstructionScript();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(struct FString* ResumeKeyword);
	void OnTalkScriptEvent(int* EventNumber);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void RestartMiniGame();
	void EndMiniGame();
	void HitCheck();
	void Otoshidama_End(bool* is_success);
	void Finalize_Check();
	void StartMiniGame();
	void ExecuteUbergraph_BP_OD_Take2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
