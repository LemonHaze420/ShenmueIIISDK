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

// BlueprintGeneratedClass BP_LinkGacha.BP_LinkGacha_C
// 0x00C7 (0x06D0 - 0x0609)
class ABP_LinkGacha_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             SightCheckLocation;                                       // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           DetectorCapsule;                                          // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_MiniGame_Gacha_C*>                TargetGacha;                                              // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                EVENT_GAME_CONTINUE;                                      // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectIndex;                                              // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OldIndex;                                                 // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Step;                                                     // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                STEP_NONE;                                                // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                STEP_SELECT;                                              // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                STEP_START;                                               // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelectWait;                                               // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              moveSpeed;                                                // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	TArray<class ABP_MiniGame_QteTriangleSpawn_C*>     ArrowTriangle;                                            // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              ArrowOffset;                                              // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLinkEnable;                                             // 0x067C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData03[0x50];                                      // 0x067D(0x0050) UNKNOWN PROPERTY: MapProperty BP_LinkGacha.BP_LinkGacha_C.SequenceMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LinkGacha.BP_LinkGacha_C");
		return ptr;
	}


	void GetGachaID(struct FName* GachaId);
	void DestroyLoadObject(bool* dummy);
	void InitAsyncLoad(bool* dummy);
	struct FVector GetSightCheckLocation();
	bool IsTalking();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void IsDispArrow(bool* isDisp);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void InputCancel();
	void InputAction();
	void InputLeft();
	void InputRight();
	void DeleteArrow();
	void MakeArrow();
	void Tick_Select(float ArgDeltaSec);
	void GetOldTargetGacha(class ABP_MiniGame_Gacha_C** newParam);
	void StartLinkGacha();
	void Init();
	void GetTargetGacha(class ABP_MiniGame_Gacha_C** newParam);
	void UserConstructionScript();
	void GachaRewardWathing();
	void GachaThinkingGameContinue();
	void GachaGameContinue();
	void ResumeMiniGame(struct FString* ResumeKeyword);
	void EndMiniGame();
	void OnTalkScriptEvent(int* EventNumber);
	void StartMiniGame();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void CancelMiniGame();
	void OnTalkFinished(class US3TalkComponent** TalkComponent, bool* interrupted);
	void DecideDetectAction(ES3ActionIconType* Type);
	void OnTalkStart(class US3TalkComponent** TalkComponent);
	void Screen_Player();
	void Screen_NPC();
	void Event_EndMiniGameByDispacher();
	void Event_BindLinkEndMiniGame();
	void FinalizeTalk();
	void ExecuteUbergraph_BP_LinkGacha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
