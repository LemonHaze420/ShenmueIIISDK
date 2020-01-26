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

// BlueprintGeneratedClass BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C
// 0x0192 (0x079C - 0x060A)
class ABP_MiniGame_FL_Manager_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             PlayerSpawnPoint2;                                        // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CameraTrans2;                                             // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CameraTrans1;                                             // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameText_C*                         BPC_MiniGameText;                                         // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameJobResult_C*                    BPC_MiniGameJobResult;                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             PlayerSpawnPoint;                                         // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bForceLoadIndex;                                          // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0649(0x0003) MISSED OFFSET
	int                                                ForceLoadIndex;                                           // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FST_MiniGame_FL_Difficulty                  LevelData;                                                // 0x0650(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                                  DifficultyDataTable;                                      // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	class ABP_ActorVisibleControl_C*                   VisibleControlActor_1;                                    // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWBP_MiniGame_FL_C*                          RefWidget;                                                // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsMapMode;                                               // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputRight;                                              // 0x06D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputLeft;                                               // 0x06D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x06D3(0x0005) MISSED OFFSET
	class ABP_Forklift_New_C*                          NewPlayer;                                                // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryRewardPrice;                                         // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessBorder;                                           // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	struct FName                                       ForkLiftCountKey;                                         // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DifficultyFlagIndex;                                      // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRuleIndex;                                         // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipCutscene;                                            // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	struct FName                                       NormalSuccessCountKey;                                    // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryRewardPriceLimit;                                    // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryRewardPriceEasy;                                     // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryRewardPriceEasyLimit;                                // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          RespawnPosTrans;                                          // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsRespawn;                                                // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0731(0x0007) MISSED OFFSET
	TArray<class AActor*>                              HideActorsInGame;                                         // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       HideLevelLoadID;                                          // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VisibleOffLevelName;                                      // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideLevelUnloadID;                                        // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ForkAssetsLoadID;                                         // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ExistUpLabelList;                                         // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TimeUpLabelList;                                          // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ContainerNum;                                             // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryBonusRewardUnitPrice;                                // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryRewardPriceLimitBase;                                // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryRewardPriceBase;                                     // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarriedContainerNum;                                      // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_FL_Manager.BP_MiniGame_FL_Manager_C");
		return ptr;
	}


	void CheckWeather();
	void GetNearRespawnTrans(struct FTransform* trans);
	int GetUnitPrice();
	void GetNormaSuccessCount(int* Count);
	void UpdateNormaSuccess();
	void UpdateInput();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void CheckResult();
	void GetEarningsValue(int* Return);
	void UpdateDifficulty();
	void UpdateWidget();
	void SpawnActorVisibleController();
	void GetLoadLevelData(bool* Found, struct FST_MiniGame_FL_Difficulty* YtPn0R);
	void GetDataTableByName(const struct FName& RowName, bool* Found, struct FST_MiniGame_FL_Difficulty* YtPn0R);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void SpawnPlayer();
	void UserConstructionScript();
	void InputTrigger(float AxisValue);
	void InputLeftStickHorizontal(float AxisValue);
	void InputButtonRight();
	void InputButtonBottom();
	void InputRight(bool Input);
	void InputLeft(bool Input);
	void InputButtonLeft();
	void Event_OpenHelp();
	void StartMiniGame();
	void EndMiniGame();
	void OnFinishedFade();
	void StartGame(const struct FName& ID);
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void FinalizeTalk();
	void OnFinishedLevelUnloadedEvent_EndGame(const struct FName& ID);
	void Event_StartGame();
	void OnEndResult();
	void OnEndCutscene();
	void OnEndFadeInForCutscene();
	void UnloadLevelFinish_OnStart(const struct FName& ID);
	void FinishLoadLevelOnEnd(const struct FName& ID);
	void Event_HelpEnd();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetEndGameDoOnce();
	void RespawnPlayer();
	void RespawnFadeOutEnd();
	void RespawnFadeInEnd();
	void EndGame();
	void EndGameAllContainerCarry();
	void CancelMiniGame();
	void ExecuteUbergraph_BP_MiniGame_FL_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
