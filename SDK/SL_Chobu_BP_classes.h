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

// BlueprintGeneratedClass SL_Chobu_BP.SL_Chobu_BP_C
// 0x05E0 (0x0910 - 0x0330)
class ASL_Chobu_BP_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	TArray<struct FST_CutscenePlayInfo>                CutscenePlayInfoList;                                     // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ScopeTest;                                                // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       SaveEventName_00;                                         // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaveEventName_01;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaveEventName_02;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrgBoxEventIndex;                                         // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class ATriggerBox*                                 SaveTrgName_00;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATriggerBox*                                 SaveTrgName_01;                                           // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATriggerBox*                                 SaveTrgName_02;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaveStartCutScene;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaveEndCutScene;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaveCutSceneID;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         SaveTrgComp_00;                                           // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SaveTrgComp_01;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SaveTrgComp_02;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                EventControlFlag_00;                                      // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventControlFlag_01;                                      // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventControlFlag_02;                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InForcedReturn;                                           // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               waitForceSleep;                                           // 0x03CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	struct FVector                                     NewVar_1;                                                 // 0x03D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	TMap<struct FName, int>                            MemoFlagList;                                             // 0x03E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               OverLapFlag;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LiveSHE;                                                  // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstTravelFlag;                                          // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MoningFadeSkip;                                           // 0x0433(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideFlag_1;                                               // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Unload_Dock;                                              // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0436(0x0002) MISSED OFFSET
	TMap<int, class UTalkScript*>                      StepToTalkScript;                                         // 0x0438(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PlayalbeDebug;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendTime;                                                // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 NewVar_2;                                                 // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRewardTemp_SenjaFuda;                                    // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               eventEyeCatch;                                            // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Kari_YesNo;                                               // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndOverlap;                                               // 0x049B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_4;                                                 // 0x049C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndOverLap_Start;                                         // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	TMap<int, float>                                   MoningTimes;                                              // 0x04B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MemoSetMember;                                            // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Enable_Cut_Scene_Timer;                                   // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Time_Info_Disp_Flag_Debug;                                // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               waitForceSleep_1stday;                                    // 0x0512(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RenFlag;                                                  // 0x0513(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExec_Appoint;                                            // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isLoadStart;                                              // 0x0515(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStepChange;                                             // 0x0516(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0517(0x0001) MISSED OFFSET
	int                                                SubStepKari;                                              // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CheckOldStep;                                             // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveMorningRyosya;                                       // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveMorningEtc;                                          // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecForcedReturn;                                        // 0x0522(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcedSleep;                                             // 0x0523(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStockForcedReturn;                                       // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	int                                                Exec_AppointCounter;                                      // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecSleep;                                               // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	float                                              Setting_FirstDayLimit;                                    // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Setting_PopUpWait;                                        // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvocationStepAPS;                                       // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	TMap<unsigned char, struct FName>                  Recover_RewardEvent;                                      // 0x0540(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_JumpProcessActor_C*                      Jump_Process;                                             // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Setting_Accommodation_cost;                               // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Setting_Accommodation_max;                                // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndEvening;                                              // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStockEvening;                                            // 0x05A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x05A2(0x0002) MISSED OFFSET
	float                                              Setting_StartEveningTime;                                 // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_MainFlow_ResidentCtl>            ResidentEvent_Tbl;                                        // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Banraiken;                                       // 0x05B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bSkipForcedReturnACtalk;                                  // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         CbBtlSet_RokugouTeawase;                                  // 0x05D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Setting_BattleMaxHour;                                    // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         CbBtlSet_VipRoom;                                         // 0x05E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Ajito1_1st;                                      // 0x05F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Ajito1_2nd;                                      // 0x0608(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Ajito2_1st;                                      // 0x0618(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Ajito2_2nd;                                      // 0x0628(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Sanbasi_1st;                                     // 0x0638(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Sanbasi_2nd;                                     // 0x0648(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bRewardTemp_HanaMoji;                                     // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRewardTemp_HanaMojiPassing1;                             // 0x0659(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRewardTemp_HanaMojiPassing2;                             // 0x065A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStepOverDelegateEyeCatch;                                // 0x065B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Setting_TimeCheckCall_Start;                              // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Setting_TimeCheckCall_End;                                // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugFlag_00;                                             // 0x0664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	float                                              Setting_AjitoeMaxHour;                                    // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         CbBtlSet_KojouBridge_1st;                                 // 0x0670(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_KojouLanding_1st;                                // 0x0680(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_KojouLanding_2nd;                                // 0x0690(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_KojouIn_Kou;                                     // 0x06A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_KojouIn_Zako;                                    // 0x06B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_KojouTop_Zako;                                   // 0x06C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_KojouTop_Rantei;                                 // 0x06D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Setting_BanraiMaxHour;                                    // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         CbBtlSet_Kojouin_KouZako1;                                // 0x06E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Kojouin_KouZako2;                                // 0x06F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugFlag_01;                                             // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	float                                              CbBtlSet_SaveEnergy;                                      // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CbBtlSet_SaveBattleID;                                    // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         CbBtlMacroTemp;                                           // 0x0718(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CbBtlSet_Kojouin_SF;                                      // 0x0728(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        SubQFlagTable;                                            // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bExecLoadEyeCatch;                                        // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExec_AppointStock;                                       // 0x0749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRewareFadeTemp;                                          // 0x074A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugFlag_02;                                             // 0x074B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SavePayMoney;                                             // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SavePayMoney315;                                          // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameOverWarning;                                         // 0x0754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	int                                                Setting_MemoWarningPage;                                  // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StepTalkTemp;                                             // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnloadShip;                                               // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	struct FName                                       FIRST_DAY_SHIP_ID;                                        // 0x0768(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAtomCue*                               BGMSET_2;                                                 // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAtomComponentStatus                               NewVar_3;                                                 // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecLoadShip;                                            // 0x0779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x077A(0x0002) MISSED OFFSET
	struct FVector                                     Setting_RyosyaWarppoint;                                  // 0x077C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ATriggerBox*                                 M06_S0015Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0788(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_SleepPoint_Template_C*                   BP_SleepPoint_Template_9_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_TriggerBox_SHEdistance_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0798(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_MokujinTrigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0010Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0009Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0014Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0089Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0034Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0011Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Reward_Dct_StartTrigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Reward_Dct_TriggerA_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Reward_Dct_TriggerB_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Reward_Dct_TriggerC_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        M06_Hana2_DirectionCheck_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x07F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_SheVerandaTalkTrg_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0800(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_JumpInTalkTrigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0808(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0036Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0810(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 Step230050_NPC_Trigger2_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0818(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 Step230050_NPC_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0820(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_ArrivalTOK_WasaGet_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0828(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_h_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0830(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_i_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0838(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_b_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_t_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0848(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        BP_DirectionCheck_HanamojiTeraOku_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0850(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_hana1_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0858(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0100Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0860(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0043Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0868(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_S0041Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0870(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_a_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0878(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_o_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_f_underground_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0888(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_m_Gate_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0890(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_m_290_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0898(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_m_350_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_SanbashiBai_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        M06_StreetFightAreaIN_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_Sanbasi_a_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_m_480_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 LastDialog_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_Step530LoadOnly_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_AjitoA4_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_AjitoLanding2_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_AjitoA8_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_AjitoKojou1_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_Arrival_AjitoKojou2_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x08F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_BtlFellowA_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0900(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_BtlFellowB_Trigger_ExecuteUbergraph_SL_Chobu_BP_RefProperty;// 0x0908(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Chobu_BP.SL_Chobu_BP_C");
		return ptr;
	}


	void DLC_FlagSet_714();
	void DLC_CJ_SaveDataReset_CallReflesh();
	void DLC_FlagSet_697();
	void DLC_FlagSet_607();
	void DLC_FlagSet(bool SleepOnly);
	void DLC_CJ_SaveDataReset();
	void UnVisibleClock();
	void FindMemoPage(int MemoId, int* PageIndex);
	void CheckRyosyaPayMoney(int Accommodation_Cost, bool* Have_Money, int* Pay_Money);
	void CheckDelegateAffectsAPS(bool* Affects_APS);
	void KillTimeCheckCallEvent();
	void MakeTimeCheckCallEvent(float EventStartTime, float EventEndTime, const struct FName& Call_EventName);
	void MakeMaxTimerControlPulsStepCheck_Chobu(float limit_time, int StepMin, int StepMax);
	void CheckStepOverDelegate(bool* on_stepover_delegate);
	void ShowEyeCatch_New(const struct FName& EyeCatchID, float Value, bool Fade, float* OutputPin);
	void Recover_ResidentEvent();
	void Recover_RewardSaveData();
	void isGameTime_Chobu(float MinTime, float MaxTime, bool* onTime);
	void CheckNextStepUp_Chobu(bool* Exsp, bool* ExspPay);
	void MakeMaxTimerControl_Chobu(float limit_time);
	void Branch_StepAPS_Chobu(const struct FName& save_id, const struct FString& step_aps_id);
	void TimeMarkAPS(int ApsHour, bool Ryosya_Aps);
	void SetReturnRyosyaAPS(int Typeid);
	void TimeDebugDisp();
	void TimeScheduleCtrl(bool onSchedule);
	void GroupSetMemoFlag(const struct FString& SetMemoID, bool SetFlag);
	void RemovetAPS();
	void Setting_Arrival_S(struct FVector* Setting);
	void KariMemoRedLineSet();
	void CheckSHEdistance(class ATriggerBox* check_trigger_box, float limit_distance, bool* result_distance);
	void GetSHESocketVec(struct FVector* pos, bool* RetFlag);
	void CheckDistances(const struct FVector& Vector1, const struct FVector& Vector2, bool check_2d, float* Result);
	void ClearAllNPC(bool* result_clear);
	void CheckReward(const struct FName& CheckItem, bool* reward_result);
	void StepToScript(class UTalkScript** Script, bool* FindResult);
	void HiddenActor(const struct FName& FindLevelName, const struct FString& FindActorName, bool* Result);
	void StepCheckMinMax(int step_min, int step_max, bool* Result);
	void CheckHaveMoney(int NewPacheck_moneyram, bool* have_result);
	void KillFollowSHE();
	void SpawnFollowSHE(float Back_Offset, float Side_Offset);
	void RequestCutScene(const struct FName& CutsceneName);
	void CheckGlobalFlag(const struct FName& FlagID, int CheckValue, bool* Result);
	void FindSetGlobalFlag(const struct FName& FlagID, int SetFlag, bool* FindResult);
	void FindSetMemoFlag(const struct FName& MemoId, bool SetFlag, bool* FindResult);
	void DebugMark_X();
	void DebugMark();
	void ExecTrgUnbindEvent(const struct FName& JumpEventName, bool Carrige_Unbind, bool* ExecUnbind);
	void MakeTrgSphereEvent(class ATriggerSphere* TrgSphName, const struct FName& JumpEventName, int ControlBit);
	void MakeTrgBoxEvent_Save(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName);
	void MakeTrgEvent(class UPrimitiveComponent* TrgBoxName, const struct FName& JumpEventName, int ControlBit);
	void MakeCutSceneEvent(const struct FName& CutsceneName, bool UseFade, const struct FName& StartEventName, const struct FName& EndEventName, struct FName* SaveID);
	void ResetChobu_Work();
	void MakeTrgBoxEvent(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit);
	void SetPlayableControl(bool Playable, bool Stock_Save);
	void ShowEyecatch(const struct FText& PlaceNameJPN, const struct FText& PlaceNameENG, float Value, bool Fade, float* OutputPin);
	void EnableDetection(bool isTalk, bool isMemo, bool isMenu);
	void IsFreeOperationState(bool* DuringEvent);
	void IsDuringFreeConversation(bool* Talking);
	void InpActEvt_Ctrl_Shift_At_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void BindEvent_StartTimerCutscene();
	void StartTimerCutscene(const struct FName& CutsceneName);
	void ReceiveTick(float DeltaSeconds);
	void RegisterTimerCutscene();
	void TrgEventIn_00(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void TrgEventIn_01(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void TrgEventIn_02(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void StartCutSceneIn();
	void EndCutSceneIn();
	void MfEvt_AppointStart();
	void MfEvt_AppointEnd();
	void NewMainFlow_StepControl();
	void NewStepControl_AllBranch(int ExecStep, unsigned char step_id);
	void CustomEvent(const struct FName& EventName);
	void CbEvt_StepBranch(int SetSteps);
	void SleepActionStart();
	void Make_Reward(const struct FName& Reward_ID);
	void HkEvt_ChangeReward();
	void MakeLevelLoadEyeCatch(const struct FName& EyeCatchID, const struct FVector& Player_Pos, float Player_Rot, bool NotUseEyecatch);
	void EndJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Step500_LastPayMoney();
	void CbEvt_DlcStepUp(int ArrayIndex, int SetFlags);
	void RewardStart_In();
	void EvtTest_Return();
	void ForcedReturn_Timer_FirstDay();
	void Forcedreturn_Timer();
	void CbSlpEvt_S0057_OnStart();
	void ExecSleepEvt_Test();
	void CbSlpEvt_WakeUp_OnEnd();
	void CbSlpEvt_S0057_OnEnd();
	void SleepEvt_Test();
	void ForcedSleep_FirstDay();
	void SL_Chobu_BP_ForcedsleepStart();
	void Forcedsleep_Timer();
	void Forcedsleep_Exsption_Timer();
	void StepChangeDebug();
	void CbCsEvt_S0006_OnEnd();
	void FinishLoadShip(const struct FName& ID);
	void FinishUnloadCutscene(const struct FName& ID);
	void CbCsEvt_S0007_OnEnd();
	void CbStepCtl_RecoverC_LoadShip();
	void CbStepCtl_RecoverB3_Step210_000();
	void CbStepCtlEvt_MokujinTrigger();
	void CbStepCtl_RecoverResident_210_000_00(int ThisID);
	void CbCsEvt_S0010_OnEnd();
	void CbStepCtlEvt_S0010Trigger();
	void CbCsEvt_S0009_OnEnd();
	void CbStepCtlEvt_S0009Trigger();
	void CbStepCtl_RecoverB2_Step210_000();
	void CbStepCtl_RecoverB1_Step210_000();
	void CbCsEvt_S0012_OnEnd();
	void CbCsEvt_S0012_OnStart();
	void CbCsEvt_S0011_OnEnd();
	void Delegate_Step210_000(int ControlBit);
	void CbStepCtlEvt_S0011Trigger();
	void CbStepCtl_RecoverA1_Step210_000();
	void CbStepCtlEvt_Setp220_FlagChange();
	void CbStepCtl_RecoverA3_Step220_000();
	void CbCsEvt_S0003_OnEnd_Exsp();
	void CbStepCtlEvt_ExspAt11_Step220();
	void CbCsEvt_S0166_OnEnd();
	void CbCsEvt_S0003_OnEnd();
	void CbStepCtlEvt_AMinfo_220_00();
	void CbStepCtlEvt_S0014Trigger();
	void CbStepCtl_RecoverA2_Step220_000();
	void CbStepCtl_RecoverA1_Step220_000();
	void CbStepCtl_RecoverA3_Step220_005();
	void CbStepCtl_RecoverA2_Step220_005();
	void CbCsEvt_S0034_OnEnd();
	void CbStepCtlEvt_S0034Trigger();
	void CbStepCtl_RecoverB1_Step220_005();
	void CbStepCtlEvt_220photoTrigger();
	void CbStepCtlEvt_S0089AreaOutTrigger();
	void CbStepCtl_RecoverA1_Step220_005();
	void CbCsEvt_S0089_OnEnd();
	void CbStepCtlEvt_S0089Trigger();
	void CbStepCtl_RecoverA2_Step220_010();
	void CbStepCtlEvt_220_010photoTrigger();
	void Delegate_Step230_030(int ControlBit);
	void CbStepCtlEvt_S0011Trigger_Step230_030();
	void CbStepCtlEvt_FlagChange_Step260_020();
	void CbCsEvt_S1014_OnEnd_Step260_020();
	void Delegate_Step260_020(int ControlBit);
	void CbStepCtlEvt_S0011Trigger_Step260_020();
	void CbCsEvt_S0124_OnEnd();
	void Delegate_Step320_000(int ControlBit);
	void CbStepCtlEvt_S0011Trigger_Step320_000();
	void ChbEvt_RewardDct_StartTrigger();
	void ChbEvt_RewardDct_ChildA();
	void ChbEvt_RewardDct_ChildB();
	void ChbEvt_RewardDct_ChildC();
	void ChbEvt_RewardSenjafuda_Look();
	void RewardHanaMoji_Recover();
	void ChbEvt_RewardHahaMoji_S0040_Out();
	void ChbEvt_RewardHahaMoji_WazaGet();
	void ChbEvt_RewardHahaMoji_S0040_End();
	void ChbEvt_RewardHahaMoji_Out();
	void ChbEvt_RewardHanaMoji_Look();
	void Recover_ChobuStepTalk(int StartMode);
	void CkEvt_S0061_OnEnd();
	void CkEvt_S0061_SceneStart();
	void Forcedevening_Timer();
	void Delegate_Step370_000(int ControlBit);
	void NPCSpawn(const struct FGameplayTag& NPCID);
	void CbCsEvt_S0036_OnEnd();
	void CbStepCtlEvt_S0036Trigger();
	void CbStepCtl_RecoverB1_Step230_020();
	void CbStepCtlEvt_Step230_050_NPCset_grpB();
	void CbStepCtl_RecoverA3_Step230_050();
	void CbStepCtlEvt_Step230_050_NPCset();
	void CbStepCtl_RecoverA2_Step230_050();
	void CbStepCtl_RecoverA1_Step230_050();
	void CbCsEvt_S0063_OnEnd();
	void CbStepCtl_RecoverB2_Step230_050();
	void CbStepCtl_RecoverB1_Step230_050();
	void CbStepCtlEvt_ResidentTrg_Step230_050();
	void CbStepCtlEvt_ResidentFlag_Step230_050();
	void CbStepCtl_RecoverResident_230_050_00(int ThisID);
	void CbCsEvt_S0030_OnEnd_Step230_050();
	void CbStepCtlEvt_Arrivalh_Trigger_Step230_050();
	void CbCsEvt_S0030_OnEnd_Step230_052();
	void CbStepCtlEvt_Arrivalh_Trigger_Step230_052();
	void CbCsEvt_S0031_OnStart_Step230_052();
	void CbCsEvt_S0031_OnEnd_Step230_052();
	void CbStepCtlEvt_Arrivali_Trigger_Step230_060();
	void M06_azito_001_BattleWin();
	void M06_azito_001_BattleLose();
	void CbCsEvt_S0031Latterhalf_OnEnd();
	void CbStepCtlEvt_Arrivalk_AcTrigger();
	void CbCsEvt_S0090_OnEnd();
	void CbStepCtlEvt_Arrivalb_Trigger_Step230_082();
	void CbCsEvt_S0037_OnEnd();
	void CbStepCtlEvt_Arrivalb_Trigger_Step230_080();
	void CbStepCtl_RecoverB1_Step250_030();
	void ChbEvt_S0040_OnEnd();
	void ChbEvt_StepHasakiTeraEvent_Out();
	void CbStepCtl_RecoverB2_Step230_095();
	void ChbEvt_StepHanasakiTeraOku();
	void CbStepCtl_RecoverB1_Step230_095();
	void CbStepCtl_RecoverResident_230_095_00(int ThisID);
	void CbStepCtl_RecoverA1_Step230_095();
	void CbCsEvt_S0038_OnEnd();
	void CbStepCtlEvt_Arrivalhana1_Trigger();
	void CbCsEvt_S0100_OnEnd();
	void CbStepCtlEvt_S0100_Trigger();
	void CbCsEvt_S0043_OnEnd();
	void ChbEvt_StepMikoEvent_Out();
	void Delegate_Step240_012(int ControlBit);
	void CbCsEvt_S0043_OnEnd_Old();
	void CbStepCtlEvt_S0043_Trigger();
	void CbStepCtl_RecoverA2_Step240_012();
	void CbCsEvt_S0041_OnEnd();
	void CbStepCtlEvt_S0041_Trigger();
	void CbStepCtl_RecoverA1_Step240_012();
	void CbCsEvt_S0014_OnEnd();
	void CbStepCtlEvt_S0014Trigger_Step250_000();
	void CbCsEvt_S0016_OnEnd();
	void CbStepCtlEvt_Arrivala_Trigger();
	void CbCsEvt_S0018_OnStart();
	void CbCsEvt_S0017_OnStart();
	void CbCsEvt_S0023_OnEnd();
	void CbCsEvt_S0019_OnEnd();
	void CbCsEvt_S0018_OnEnd();
	void CbCsEvt_S0017_OnEnd();
	void CbCsEvt_S0022_OnEnd();
	void CbStepCtlEvt_Arrivalt_Trigger_Step250_030();
	void CbCsEvt_S0134_OnEnd();
	void CbBtlEvt_Step250_030_End();
	void CbCsEvt_S0109_OnEnd();
	void CbStepCtlEvt_Arrivalo_Trigger_Step250_030();
	void CbStepCtl_RecoverResident_250_030_00(int ThisID);
	void CbStepCtl_RecoverA1_Step250_030();
	void CbCsEvt_S0118_OnEnd();
	void CbStepCtlEvt_Arrivalf_Trigger();
	void CbCsEvt_S0119_OnEnd();
	void M06_S0118_Battle_Win();
	void M06_S0118_Battle_Lose();
	void CbStepCtlRetry_Step280_010();
	void CbStepCtlEvt_Retry_Step280_010();
	void CbStepCtlEvt_Arrivalm_gate_Trigger_Step290_000();
	void CbCsEvt_S0120_OnEnd();
	void CbStepCtlEvt_Arrivalm_Trigger_Step290_000();
	void CbCsEvt_S0121_OnEnd();
	void M06_Ajiti1_1st_Battle_Win();
	void CbStepCtlEvt_Retry_Step300_000();
	void M06_Ajiti1_1st_Battle_Lose();
	void CbStepCtlRetry_Step300_000();
	void M06_Ajiti1_2nd_Battle_Lose();
	void CbCsEvt_S0123_OnEnd();
	void CbCsEvt_S0122_OnEnd();
	void M06_Ajiti1_2nd_Battle_End();
	void CbStepCtlRetry_Step310_000();
	void CbCsEvt_S0101_OnEnd();
	void CbCsEvt_S0101_OnStart();
	void CbStepCtlEvt_RenFlagOn_Step350_000();
	void CbCsEvt_S0125_OnEnd();
	void CbStepCtlEvt_Arrivalm_Trigger_Step350_000();
	void CbStepCtlEvt_Retry_Step360_000();
	void M06_Ajitio2_1st_Battle_Lose();
	void CbCsEvt_S0126_OnEnd();
	void M06_Ajitio2_1st_Battle_Win();
	void CbStepCtlRetry_Step360_000();
	void M06_Ajitio2_2nd_Battle_Lose();
	void CbCsEvt_S0127_OnEnd();
	void M06_Ajitio2_2nd_Battle_End();
	void CbCsEvt_S0102_OnEnd();
	void CbCsEvt_S0102_OnStart();
	void CbCsEvt_S0136_OnEnd();
	void CbBtlEvt_Step390_000_End();
	void CbCsEvt_S0135_OnEnd();
	void CbStepCtlEvt_Arrivalo_Trigger_Step390_000();
	void CbCsEvt_S0020_OnEnd();
	void CbBtlEvt_Step400_000_End();
	void CbCsEvt_S0111_OnEnd();
	void CbStepCtlEvt_Arrivalsanbasi_Trigger();
	void CbCsEvt_S0103_OnEnd();
	void CbCsEvt_S0103_OnStart();
	void CbStepCtlEvt_AreaIn_Step430_070();
	void CbStepCtlEvt_RetryFlag_Step430_070();
	void Delegate_Step460_000(int ControlBit);
	void CbStepCtlEvt_S0015Trigger_Step460_000();
	void CbCsEvt_S0155_OnEnd();
	void CbStepCtl_RecoverA1_Step470_000();
	void CbStepCtlEvt_Arrivalsanbasi_a_Trigger();
	void CbBtlEvt_Step470_000_End();
	void CbCsEvt_S0112_OnEnd_old();
	void CbCsEvt_S0104_OnEnd_old();
	void CbCsEvt_S0104_OnStart_old();
	void Delegate_Step480_000_Part21(int ControlBit);
	void CbStepCtl_RecoverA1_Step480_000();
	void Delegate_Step480_000(int ControlBit);
	void CbCsEvt_S0137_OnEnd();
	void CbStepCtlEvt_Arrivalm_Trigger_Step480_000();
	void CbCsEvt_S0157_OnEnd();
	void CbCsEvt_Step490_OnEnd();
	void CbCsEvt_Step490_OnStart();
	void CbEvt_SelectCancel();
	void CbEvt_SelectNext();
	void CbEvtOnDialogCancel(class AActor* Actor);
	void CbEvtOnDialogDecide(class AActor* Actor);
	void CbStepCtlEvt_LastDialog_Trigger();
	void CbCsEvt_S0128_OnEnd();
	void CbStepCtlEvt_Arrivalsanbasi_Step500_00();
	void CbCsEvt_S0162_OnEnd();
	void CbCsEvt_S0129_OnStart();
	void CbStepCtlEvt_ArrivalAjitoA2_FlagChange();
	void CbStepCtl_RecoverA2_Step510_000();
	void CbCsEvt_S0128_OnStart_510();
	void CbCsEvt_S0128_OnEnd_510();
	void CbCsEvt_S0140_OnEnd();
	void CbStepCtlEvt_ArrivalAjitoA2_Trigger();
	void CbStepCtl_RecoverA1_Step510_000();
	void CbCsEvt_S0129_OnEnd();
	void CbCsEvt_S0097_OnEnd();
	void CbStepCtl_RecoverA1_Step530_000();
	void CbStepCtlEvt_Step530LoadOnly();
	void CbCsEvt_S0141_OnEnd();
	void CbStepCtlEvt_ArrivalAjitoA4_Trigger();
	void M06_AjitioBridgeBattle_NewWin();
	void M06_AjitioBridgeBattle_XX();
	void M06_AjitioBridgeBattle_Continue3();
	void CbStepCtlEvt_ArrivalLanding2_Trigger();
	void M06_AjitioBridgeBattle_Continue2();
	void M06_AjitioBridgeBattle_Continue1();
	void CbCsEvt_S0130_OnEnd();
	void M06_AjitioBridgeBattle_Win();
	void M06_AjitioBridgeBattle_Lose();
	void CbCsEvt_S4150_OnEnd();
	void CbCsEvt_S3150_OnEnd();
	void CbCsEvt_S5150_OnEnd();
	void CbCsEvt_KowCs_OnStart();
	void M06_AjitioKojouKouBattle_QteLose();
	void CbCsEvt_KowCs_OnEnd();
	void M06_AjitioKojouKouBattle_Continue2();
	void M06_AjitioKojouKouBattle_Continue1();
	void M06_AjitioKojou2fBattle_Win();
	void CbStepCtlEvt_ArrivalKojou2_Trigger();
	void CbCsEvt_S0131_OnEnd();
	void M06_AjitioKojouKouBattle_Win();
	void M06_AjitioKojouKouBattle_Lose();
	void CbStepCtlEvt_ArrivalA8_RecoverIn();
	void CbCsEvt_S0142_OnStart();
	void CbCsEvt_S0142_OnEnd();
	void CbStepCtlEvt_ArrivalA8_Trigger();
	void CbCsEvt_S0151_OnStart();
	void CbCsEvt_S0143_OnStart();
	void M06_AjitioKojouTopZakoBattle_QteLose();
	void CbCsEvt_S0151_OnEnd();
	void CbCsEvt_S0143_OnEnd();
	void M06_AjitioKojouTopZakoBattle_Win();
	void M06_AjitioKojouTopZakoBattle_Lose();
	void CbCsEvt_S0149_OnStart();
	void CbCsEvt_S0144_OnStart();
	void CbCsEvt_S0149_OnEnd();
	void M06_AjitioKojouTopRanteiBattle_Win();
	void M06_AjitioKojouTopRanteiBattle_Lose();
	void CbCsEvt_S0144_OnEnd();
	void CbCsEvt_S0145_OnStart();
	void CbCsEvt_S0145_OnEnd();
	void CbCsEvt_S0146_OnStart();
	void CbCsEvt_S0146_OnEnd();
	void CbCsEvt_S0147_OnStart();
	void CbCsEvt_S0147_OnEnd();
	void CbCsEvt_S0148_OnEnd();
	void CbStepCtlEvt_AreaIn_Step430_050();
	void CbStepCtlEvt_RetryFlag_Step430_050();
	void CbStepCtlEvt_KouBattle_LoadStart();
	void M06_AjitioKouBattle_Start();
	void CbStepCtlEvt_ScriptEnd_500_000();
	void Forcedevening_Exsption_At17();
	void CbStepCtlEvt_GetTrophy_Step470_070();
	void CbCsEvt_S2112_OnEnd();
	void CbStepCtlEvt_CsFlag_Step470_070();
	void CbStepCtlEvt_GetTrophy_Step470_000();
	void CbCsEvt_S1112_OnEnd();
	void CbCsEvt_S0112_OnEnd();
	void CbCsEvt_S0104_OnEnd();
	void CbCsEvt_S0104_OnStart();
	void CbStepCtlEvt_LandingBattle_LoadStart();
	void CbStepCtlEvt_LandingBattle_Start();
	void M06_AjitioLandingABattle_Win();
	void M06_AjitioLandingABattle_Lose();
	void CbCsEvt_FellowB_02End();
	void CbCsEvt_FellowB_01End();
	void CbStepCtlEvt_BackerBattle_LoadStart();
	void CbStepCtlEvt_BackerBattle_Start();
	void M06_AjitioBackerBattle_Win();
	void M06_AjitioBackerBattle_Lose();
	void CbCsEvt_FellowC_01End();
	void CbStepCtlEvt_BattleFellowA_Trg();
	void CbCsEvt_S5150_OnStart();
	void CbCsEvt_S4150_OnEnd_5_3();
	void CbCsEvt_S3150_OnEnd_5_3();
	void CbCsEvt_S5150_OnEnd_5_3();
	void CbStepCtlEvt_BattleFellowB_Trg();
	void CbCsEvt_FellowB_02End_56();
	void CbCsEvt_FellowB_01End_56();
	void Forcedevening_Exsption_At11();
	void ExecuteUbergraph_SL_Chobu_BP(int EntryPoint);
	void ScopeTest__DelegateSignature(const struct FName& EventName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
