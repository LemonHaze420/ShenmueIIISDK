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

// BlueprintGeneratedClass SL_Hakkason_BP.SL_Hakkason_BP_C
// 0x0580 (0x08B0 - 0x0330)
class ASL_Hakkason_BP_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	float                                              TestCameraRot;                                            // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FName                                       CharaNameOld;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CutCount;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Event_3000000_SearchOnceFlag;                             // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                MiniGameRetryId;                                          // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Event_2004000_MinigameOnceFlag;                           // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Event_2005000_MinigameOnceFlag;                           // 0x0355(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0356(0x0002) MISSED OFFSET
	float                                              MINIGAME_TIME_MAX;                                        // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Event_2000000_SheFollowOnceFlag;                          // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Event_2002000_SheExitOnceFlag;                            // 0x035D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Event_2006000_MinigameOnceFlag;                           // 0x035E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x035F(0x0001) MISSED OFFSET
	TArray<struct FST_CutscenePlayInfo>                CutscenePlayInfoList;                                     // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RIN_LOGIN_TIME_MAX;                                       // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	TArray<struct FName>                               CharactorUniqueID;                                        // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SHECheckFlag;                                             // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class ABP_Gimmick_OpenDoor_Template_C*             GimmickDoor;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndReturnSchedule;                                       // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndTimeupSchedule;                                        // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndSleepSchedule;                                         // 0x03A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAreaJump;                                               // 0x03A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndAreaJump;                                              // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	TArray<int>                                        ItemAlcoholAndSteambun;                                   // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ItemAlcohol;                                              // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ItemSteambun;                                             // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MemoUnderlineList;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SelectAlcohol;                                            // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelectSteambun;                                           // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadSubLevel;                                             // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HouseDoorEvent;                                           // 0x03EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FName                                       SaveStartCutScene;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaveEndCutScene;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaveCutSceneID;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, int>                            MemoFlagList;                                             // 0x0408(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PlayalbeDebug;                                            // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class ABP_Hakkason_BellTowerHiddenRoomGimmick_C*   BellTowerHiddenRoomGimmickActor;                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LiveSHE;                                                  // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              SHEoffset_back;                                           // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SHEoffset_side;                                           // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimeOverReturn;                                           // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	class UTalkScript*                                 NewVar_1;                                                 // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStepChange;                                             // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                NewVar_2;                                                 // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentDelegate;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableCutScentTimer;                                      // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	float                                              NewVar_3;                                                 // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickFlag_Kari;                                            // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SHEArea_InOut;                                            // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecForcedTimerUp;                                       // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExecAppoint;                                              // 0x049B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StockForcedTimerUp;                                       // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	int                                                GetUpCount;                                               // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimerDebug;                                               // 0x04A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitMoning;                                               // 0x04A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StockForcedReturn;                                        // 0x04A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StockForcedStep020000;                                    // 0x04A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlipFlagSHE;                                              // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedFlagSHE;                                              // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimerInfoDispFlagDebug;                                   // 0x04AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WarpMakeDebug;                                            // 0x04AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	TArray<int>                                        SaveList;                                                 // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       NewVar_4;                                                 // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        NeedApsStep;                                              // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BsEnableFlag_Kari;                                        // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SHEseparationDisable;                                     // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_MainFlowEventType>                  NewVar_5;                                                 // 0x04DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x04DB(0x0001) MISSED OFFSET
	int                                                NewVar_6;                                                 // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isLoadStart;                                              // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorFlag_Kari;                                            // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_7;                                                 // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x04E3(0x0005) MISSED OFFSET
	TArray<int>                                        NewVar_8;                                                 // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                isSeparationForced;                                       // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_MainFlowActorID>                    NewVar_9;                                                 // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OutDoorFlag_Kari;                                         // 0x04FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveMorningShe;                                          // 0x04FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveMorningEtc;                                          // 0x04FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_10;                                                // 0x0500(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AREAJUMP_MAX_TIME;                                        // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_11;                                                // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_12;                                                // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0512(0x0002) MISSED OFFSET
	int                                                CheckStep_Kari;                                           // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReserveAPS;                                              // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecAreaJump;                                            // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x051A(0x0002) MISSED OFFSET
	int                                                ExecAppointCount;                                         // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_13;                                                // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMorning2ndday;                                           // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecSleep;                                               // 0x0522(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x0523(0x0001) MISSED OFFSET
	int                                                JumpInPos;                                                // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTalkScript*>                         BellTowerTalkTbl;                                         // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BellTowerTalkSelect;                                      // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class ABP_Hakkason_FindSecretRoom_C*               BellTowerFindActor;                                       // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExspLoad;                                                 // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	int                                                BellTowerTalkFailureCount;                                // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInBuilding;                                              // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExecApsEyeCatch;                                         // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckExspTimerEvent;                                     // 0x0552(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInvocationStepAPS;                                       // 0x0553(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GAMETIME_18_55;                                           // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_JumpProcessActor_C*                      JumpProcess;                                              // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<int, unsigned char>                           ShenfaStepTalkTable;                                      // 0x0560(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                         HkBattle_S0054;                                           // 0x05B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         HkBattle_S0093;                                           // 0x05C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         HkBattle_S0097;                                           // 0x05D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         HkBattle_S0107;                                           // 0x05E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_S3GamemodeBase_C*                        NewVar_14;                                                // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSheShoesON;                                              // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	TArray<int>                                        ItemKeyYouHouse;                                          // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              NewVar_15;                                                // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HkBattle_SaveEnergy;                                      // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         HkBattleMacroTemp;                                        // 0x0618(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       HkBattle_SaveBattleID;                                    // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRewardFlag_DCT;                                          // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	TArray<int>                                        SubQFlag_Table;                                           // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bExspWakeUp_160_030;                                      // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForeceReturnHouseIn;                                     // 0x0649(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForeceReturnHouseInTalk;                                 // 0x064A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BellTowerHiddenRoom_P1flag;                               // 0x064B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BellTowerHiddenRoom_P2flag;                               // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BellTowerHiddenRoom_P3flag;                               // 0x064D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BellTowerHiddenRoom_P4flag;                               // 0x064E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BellTowerHiddenRoom_P5flag;                               // 0x064F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClothChangeEndFlag;                                      // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClothChangeShoesOff;                                     // 0x0651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x0652(0x0002) MISSED OFFSET
	int                                                LeadSHE_EventFlag;                                        // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         LeadSHE_Step010_000_00;                                   // 0x0658(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         LeadSHE_Step010_010_00;                                   // 0x0668(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bGameOverWarning;                                         // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0679(0x0003) MISSED OFFSET
	int                                                MEMO_WARNINGPAGE;                                         // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SearchArea_C*                            Temp_BTsearch;                                            // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         HkBattle_S0107first;                                      // 0x0688(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, unsigned char>                           ShenfaStepTalkNoInitStep;                                 // 0x0698(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ExecAppoint_SHE;                                          // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	float                                              GameTime_161;                                             // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExspWakeUp_AutoSave;                                     // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	class USoundAtomCue*                               BGMSET1;                                                  // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSheShoesDirWait;                                         // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	class ABP_SleepPoint_Template_C*                   BP_SleepPoint_Template_176_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0708(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        SHEarea_DirectionCheck_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0710(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 SHEDocTriggerJoin_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0718(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_SheDoor2_OutTrigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0720(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_SheDoor1_OutTrigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0728(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 SHEDocTrigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0730(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        SHE_MorningTrg_DirectionCheck_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0738(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 SHE_MorningTrg_AreaCheckew_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0740(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_SHEJoinEnable_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0748(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        M03_WarpStart_DirectionCheck_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0750(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        M03_FirstDay_DirectionCheck2_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0758(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        M03_FirstDay_DirectionCheck_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0760(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        BP_DirCheck_OffShoes_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0768(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        M03_SheHouse_IroriCheck_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0770(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 AreaJumpExistArea_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0778(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 TriggerBox5_2_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0780(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 TriggerBox_EyeCatch_0001_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0788(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0003Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_HirobaCenter_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0798(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0019Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0012Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0004Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0039Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_LeadFollowChangeStep30_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0052Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        BP_DirectionCheck_Yurakuen_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0046Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0041Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 NextStep080_000_00Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0119outdoor_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 TriggerBox_s55_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x07F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0008Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0800(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0068Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0808(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_FirstBourakudai_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0810(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0071Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0818(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_AC150_020_00Trg_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0820(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_OffetoryboxItemUse_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0828(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0097Trigger_3_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0830(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_SHEhouse_BlockBack_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0838(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_SHEhouse_Block_Trriger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0107Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0848(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0110Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0850(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_SearchYo_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0858(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_Player180ReturnTrigger_C*                BP_Player180ReturnTrigger18_597_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0860(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_BellTowerKame_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0868(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M06_BellTower_Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0870(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0113Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0878(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0034Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_S0084Trigger_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0888(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        BP_DirectionCheck_RewardDctB_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0890(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_DirectionCheck_C*                        BP_DirectionCheck_RewardDctA_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x0898(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 M03_SheHouse_IroriAreaIn_ExecuteUbergraph_SL_Hakkason_BP_RefProperty;// 0x08A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATriggerBox*                                 SHEDocTrigger_EdGraph_135_RefProperty;                    // 0x08A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_BP.SL_Hakkason_BP_C");
		return ptr;
	}


	void CheckAreaJump(bool* EnableAreaJump);
	void STATIC_FindMemoPage(int MemoId, int* PageIndex);
	void SetForcedJumpIn(bool* Success_HouseIn);
	void RecoverRewardSaveData();
	bool STATIC_isKeyYouHouse();
	void JumpFollowSHE();
	void STATIC_MakePlayerBehaviorCheck(ES3PlayerBehavior Check_Behavior, bool Need_Change_Playable, bool Need_StepLock);
	void STATIC_ShowEyeCatch_New(const struct FName& EyeCatchID, float Value, bool Fade, float* OutputPin);
	void STATIC_MakeMaxTimerControlPulsStepCheck(float Limit_Time, int StepMin, int StepMax);
	void STATIC_CheckSeparationContition(bool* StartSeparation);
	void TimeMarkAPS(int ApsHour, bool SHE_house_Aps);
	void InitializeBellTowerHiddenRoomGimmick_New();
	void STATIC_MakeMaxTimerControl(float Limit_Time);
	void CheckNextStepUp(bool* ExspStepUp);
	void Branch_StepAPS_Hakkason(const struct FName& save_id, const struct FString& step_aps_id, bool* SET);
	void STATIC_RemovetAPS();
	void STATIC_SetReturnHouseAPS(int Typeid);
	void STATIC_isHouseArea(bool* HouseArea);
	void STATIC_ShenfaTalkInitialize_Step();
	void FlipChangeSHE(bool NPC_or_Following_);
	void STATIC_PosChangeSHE(float Back_Offset, float Side_Offset);
	void STATIC_KillFollowSHE();
	void SpawnFollowSHE(float Back_Offset, float Side_Offset);
	void InitializeBellTowerHiddenRoomGimmick();
	void STATIC_GroupSetMemoFlag(const struct FString& set_id, bool flag_value);
	void STATIC_ExecTrgUnbindEvent(const struct FName& JumpEventName, bool Carrige_Unbind, bool* ExecUnbind);
	void STATIC_MakeTrgSphereEvent(class ATriggerSphere* TrgBoxName, const struct FName& JumpEventName, int ControlBit);
	void STATIC_MakeTrgBoxEvent(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit);
	void FindSetMemoFlag(const struct FName& MemoId, bool SetFlag, bool* FindResult);
	void RequestCutScene(const struct FName& CutsceneName);
	void STATIC_MakeCutSceneEvent(const struct FName& CutsceneName, bool UseFade, const struct FName& StartEventName, const struct FName& EndEventName, struct FName* SaveID);
	void SanseisenGateCtrl(bool GateOpen);
	void UseSelectItem(TArray<int>* ItemId);
	bool STATIC_isSteambun(int ItemId);
	bool isAlcohol(int ItemId);
	void isAlcoholSteambun(int* RetuenValue);
	void STATIC_isGameTime(float MinTime, float MaxTime, bool* onTime);
	void IsSheLead(bool* onSHE);
	void TimeScheduleCtrl(bool onSchedule);
	void STATIC_YouHouseShojiCtrl(bool IsOpen);
	void STATIC_ShenfaHouseShojiCtrl(bool IsOpen);
	void STATIC_isNPCValid(const struct FName& NPCTag, bool* newParam);
	void STATIC_SetPlayableControl(bool Playable, bool Stock_Save);
	void STATIC_ShenfaTalkInitialize();
	void ShowEyecatch(const struct FText& PlaceNameJPN, const struct FText& PlaceNameENG, float Value, bool Fade, float* OutputPin);
	void STATIC_IsFreeOperationState(bool* DuringEvent);
	void STATIC_isDuringFreeConversation(bool* Talking);
	void STATIC_HideChildren(bool bHide);
	void STATIC_CameraChangeCalc(bool* OnceFlag);
	void STATIC_IsRYO(bool* RetFlag);
	void GetSHESocketVec(struct FVector* pos, bool* RetFlag);
	void InpActEvt_Ctrl_Shift_At_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartTimerCutscene(const struct FName& CutsceneName);
	void BindEvent_StartTimerCutscene(bool StopStart);
	void ForceeSleepStart();
	void BindEvent_StartCatchEventIcon();
	void EventIconCtrl(const struct FString& EventName);
	void CustomEvent(const struct FName& EventName);
	void HkEvt_StepBranch(int SetSteps);
	void HkEvt_SHEarea_InOut(bool Positive_direction, float Impact_dot_Arrow);
	void MfEvt_AppointStart();
	void MfEvt_AppointEnd();
	void RegisterTimerCutscene();
	void NewMainFlow_StepControl();
	void STATIC_NewStepControl_AllBranch(int ExecStep, unsigned char step_id);
	void EvtTestMsg();
	void STATIC_MakeLevelLoadEyeCatch(const struct FName& EyeCatchID, const struct FVector& Player_Pos, float Player_Rot);
	void STATIC_EndJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HkEvt_ChangeReward();
	void Make_Reward(const struct FName& Reward_ID);
	void STATIC_HkEvt_SubQuestFlag(int ArrayIndex, int SetFlags);
	void STATIC_HkEvt_ClothChange(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void HkExspEvt_ExecHelpEffect();
	void RewardStartIn();
	void HkExspEvt_Morning();
	void HkSlpEvt_WakeUp_OnEnd();
	void HkSlpEvt_S0044_OnEnd();
	void HkSlpEvt_S0044_SceneStart();
	void SL_Hakkason_BP_ForcedsleepStart();
	void ForcedsleepTimer_M03_S0044();
	void LoadRecover_SHEcontrolC();
	void RecoveryGetUpCount();
	void STATIC_LoadRecover_SHEcontrolB(bool ExspPostSet, bool ExspPostSetStep30);
	void LoadRecover_SHEcontrolA(int Forced);
	void RecoveryWarpSet();
	void STATIC_HkEvt_WarpStartDirChg2(bool Positive_direction, float Impact_dot_Arrow);
	void HkEvt_FirstDayDirChg2(bool Positive_direction, float Impact_dot_Arrow);
	void HkEvt_FirstDayDirChg(bool Positive_direction, float Impact_dot_Arrow);
	void HkEvt_H19_OffAreaJump();
	void Recover_StepTalk(bool ForcedSet);
	void ForcedReturn_StockStart();
	void HkEvt_S0040_OnEnd();
	void HkEvt_S0040_SceneStart();
	void Forcedreturn_M03_S0040();
	void OnEndCommon_M03_S0040();
	void OnStartCommonPlayer_M03_S0040();
	void SHECheckTrigger(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnCutsceneEnd_M03_S0090();
	void OnStartCutscenePlayer_M03_S0090();
	void OnCutsceneEnd_M03_S0089();
	void OnStartCutscenePlayer_M03_S0089();
	void TickCheckTakeOffShoes();
	void CatchTaleOffShoesBack();
	void HkCsEvt_OnShoes_OnEnd();
	void HkCsEvt_OnShoes_OnStart();
	void HkCsEvt_OffShoes_OnEnd();
	void HkCsEvt_OffShoes_OnStart();
	void Hakkason_ShoesOn();
	void CatchTaleOffOnEnd();
	void CatchPutOnShoes();
	void CatchTaleOffShoes();
	void OnCutsceneEnd_M03_S0087();
	void OnStartCutscenePlayer_M03_S0087();
	void OnCutsceneEnd_M03_S0088();
	void OnStartCutscenePlayer_M03_S0088();
	void TimeUp_BackHouseOnly();
	void Forcedtimeup_StockStart();
	void Forcedtimeup_Start();
	void EndofAreaJump();
	void STATIC_AreaJumpCheckBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AreaJumpCtrl(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_TestAcEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ForcedStep01001000();
	void ForcedStep01002000();
	void ForcedStep02000000_StickStart();
	void ForcedStep02000000();
	void ForcedStep01003000();
	void EVT_TestTrigger();
	void HkCsEvt_S0001_OnEnd();
	void HkCsEvt_S0001_StartThen();
	void Delegate_Step010_010(int ControlBit);
	void HkCsEvt_S0002_OnEnd();
	void HkCsEvt_S0002_StartThen();
	void HkStepCtlEvt_EyeCatch0001();
	void Delegate_Step010_020(int ControlBit);
	void HkCsEvt_S0003_OnEnd();
	void HkCsEvt_S0003_StartThen();
	void HkStepCtlEvt_S0003Trg();
	void HkStepCtlEvt_FlagChange37_Step010_030();
	void HkCsEvt_S0004_OnStart();
	void HkStepCtlEvt_S0004Out_Step010_030();
	void HkEvt_Step010_030_Add();
	void HkStepCtl_RecoverA2_Step010_030();
	void HkCsEvt_S0012_OnEnd();
	void HkStepCtlEvt_S0019_Step010_030();
	void HkCsEvt_S0118_OnEnd();
	void HkStepCtlEvt_S0012_Step010_030();
	void HkStepCtl_RecoverC_Step010_030();
	void HkStepCtl_RecoverB_Step010_030();
	void HkCsEvt_S0004_OnEnd();
	void Delegate_Step010_030(int ControlBit);
	void HkStepCtlEvt_S0004_Step010_030();
	void HkStepCtl_RecoverA1_Step010_030();
	void HkStepCtlEvt_TimeElasped_Step010_030();
	void HkStepCtl_RecoverA0_Step020_000();
	void HkCsEvt_S0005_OnEnd();
	void Delegate_Step020_000(int ControlBit);
	void HkStepCtlEvt_Door_Step020_000();
	void HkStepCtl_RecoverA_Step020_000();
	void DoorTest_OFF();
	void DoorTest_ON();
	void HkCsEvt_S0039_OnEnd();
	void Delegate_Step020_010_N(int ControlBit);
	void HkStepCtlEvt_S0039_Step020_010();
	void HkStepCtl_RecoverA1_Step020_010();
	void HkStepCtl_RecoverA_AllAcEnd();
	void HkStepCtlEvt_AllAcEnd();
	void HkCsEvt_S0052_OnEnd();
	void HkCsEvt_S0052_OnStart();
	void HkStepCtlEvt_S0052_Step050_000();
	void HkStepCtl_RecoverA1_Step050_000();
	void STATIC_HkStepCtlEvt_YurakuAreaIn(bool Positive_direction, float Impact_dot_Arrow);
	void HkStepCtl_RecoverExsp1_Step050_010();
	void Delegate_Step050_010(int ControlBit);
	void HkStepCtl_RecoverA2_Step050_010();
	void HkStepCtlEvt_FlagOnWait_Step050_010();
	void HkStepCtl_RecoverA1_Step050_010();
	void HkCsEvt_S0046_OnEnd();
	void HkStepCtlEvt_S0046_Step050_020();
	void HkStepCtl_RecoverA1_Step050_020();
	void HkStepCtlEvt_Retry_Step060_000();
	void HkStepCtlEvt_Retry_Step060_010();
	void HkCsEvt_S0041_OnEnd();
	void HkStepCtlEvt_S0041_Step060_010();
	void HkStepCtl_RecoverA1_Step060_010();
	void HkStepCtlEvt_ItemGetB_Step070_000();
	void HkStepCtlEvt_ItemGetA_Step070_000();
	void HkStepCtlEvt_NextStep_Step070_000();
	void HkCsEvt_S0119_OnStart();
	void HkCsEvt_S0119_OnEnd();
	void HkCsEvt_S1119_OnEnd();
	void HkStepCtlEvt_S0119shedoor_Step080_000();
	void HkStepCtlEvt_S0119outdoor_Step080_000();
	void Delegate_Step080_000(int ControlBit);
	void HkStepCtl_RecoverA1_Step080_000();
	void HkStepCtlEvt_DoorSyu_Step080_010();
	void HkCsEvt_S0006_OnEnd();
	void HkStepCtlEvt_DoorKKK_Step080_020();
	void HkStepCtl_JumpA1_Step080_030();
	void HkCsEvt_S0006_OnEnd_080_030();
	void HkStepCtlEvt_DoorKKK_Step080_030();
	void HkCsEvt_S0054_OnEnd();
	void HkStepCtlEvt_S0054Trg();
	void HkStepCtlEvt_Retry_Step090_010();
	void M03_S0054_BattleEnd_Lose();
	void M03_S0054_BattleEnd_Win();
	void HkStepCtl_RecoverA1_Step090_010();
	void M03_S0093_BattleLose();
	void HkCsEvt_S0094_OnEnd();
	void M03_S0093_BattleEnd();
	void HkCsEvt_S0093_OnEnd();
	void HkCsEvt_S0055_OnEnd();
	void Delegate_Step100_000(int ControlBit);
	void HkCsEvt_S0008_OnEnd();
	void HkStepCtlEvt_S0008Trg();
	void HkCsEvt_S0095_OnEnd();
	void HkStepCtl_RecoverA1_Step100_000();
	void HkCsEvt_S0068_OnEnd();
	void HkStepCtlEvt_S0068Trg();
	void HkCsEvt_S0070_OnEnd();
	void HkCsEvt_S0069_OnEnd();
	void HkCsEvt_S0069_OnStart();
	void HkStepCtlEvt_S0069Trg();
	void HkCsEvt_S0053_OnEnd();
	void Delegate_Step110_020(int ControlBit);
	void HkStepCtlEvt_S0039_Step110_020();
	void HkStepCtlEvt_DoorHou_Step140_000();
	void HkStepCtlEvt_FirstBourakudai();
	void HkCsEvt_S0015_OnEnd();
	void HkStepCtlEvt_DoorSBK_Step130_010();
	void HkCsEvt_S0071_OnEnd_150001();
	void HkStepCtlEvt_S0071();
	void HkStepCtlEvt_FlagOn150_020_00();
	void HkStepCtlEvt_AC150_020_00();
	void HkCsEvt_S0092_OnEnd();
	void HkStepCtlEvt_ResultWait_Step150_010();
	void HkStepCtlEvt_Offetorybox_Step150_010();
	void Delegate_Step150_030(int ControlBit);
	void HkEvt_S0039_Trigger_Step150_030();
	void HkStepCtl_RecoverC1_Step160_000();
	void HkStepCtl_RecoverB1_Step160_000();
	void HkStepCtl_RecoverA3_Step160_000();
	void STATIC_HkStepCtl_RecoverA2_Step160_000();
	void STATIC_HkStepCtl_RecoverA1_Step160_000();
	void STATIC_HkStepCtlEvt_Flag152_On();
	void STATIC_HkCsEvt_S0097_OnStart();
	void STATIC_HkCsEvt_S0097_OnEnd();
	void STATIC_HkStepCtlEvt_S0097();
	void STATIC_HkCsEvt_S0101_OnEnd();
	void STATIC_HkCsEvt_S0121_OnEnd();
	void STATIC_M03_S0097_BattleEnd_Lose();
	void STATIC_M03_S0097_BattleEnd_Win();
	void STATIC_HkStepCtl_RecoverA1_Step160_020();
	void STATIC_HkCsEvt_S0102_OnEnd();
	void STATIC_HkCsEvt_S0112_OnEnd_Next();
	void STATIC_HkCsEvt_S0112_OnEnd();
	void STATIC_HkStepCtlEvt_Door_Step160_050();
	void STATIC_HkCsEvt_S0112_OnEnd_Step160_040();
	void STATIC_HkStepCtlEvt_Door_Step160_040();
	void STATIC_HkScEvt_OnEnd_16061();
	void STATIC_HkStepCtl_RecoverA1_Step160_060();
	void HkStepCtlEvt_Offetorybox_Step160_060();
	void HkCsEvt_S0071_OnEnd_160001();
	void HkStepCtlEvt_ResultWait_Step160_000();
	void STATIC_HkStepCtlEvt_Inventory_Step160_000();
	void STATIC_HkStepCtlEvt_SearchEnd_Step160_070();
	void STATIC_HkScEvt_S0104_OnEnd_16072();
	void STATIC_HkStepCtlEvt_ResultWait_Step160_071();
	void STATIC_HkStepCtlEvt_Offetorybox_Step160_071();
	void STATIC_HkStepCtl_RecoverA1_Step160_071();
	void NPCSpawn(const struct FGameplayTag& NPCID);
	void STATIC_HkStepCtlEvt_TrophySet_Step160_084();
	void STATIC_HkStepCtl_RecoverA2_Step160_080();
	void STATIC_HkStepCtlEvt_FlagOn_Step160_084();
	void STATIC_HkStepCtlEvt_OffetoryboxAreaOut_Step160_084();
	void STATIC_HkStepCtlEvt_OffetoryboxArea_Step160_084();
	void STATIC_HkStepCtl_RecoverA1_Step160_084();
	void STATIC_HkStepCtl_BranchA_Step160_090();
	void STATIC_HkStepCtlEvt_TalkEnd_Step170_000();
	void STATIC_HkStepCtlEvt_SHEhouseB_Step170_000();
	void STATIC_HkStepCtlEvt_SHEhouseA_Step170_000();
	void STATIC_HkStepCtl_RecoverA1_Step170_003();
	void STATIC_HkStepCtl_RecoverB1_Step170_006();
	void STATIC_HkStepCtlEvt_Hirobain_Step170_006();
	void STATIC_HkStepCtl_RecoverA1_Step170_006();
	void STATIC_HkCsEvt_S0107_OnEnd();
	void STATIC_HkCsEvt_S0107_OnStart();
	void STATIC_HkStepCtlEvt_S0107();
	void STATIC_M03_S0107first_BattleEnd_Lose();
	void STATIC_M03_S0107first_BattleEnd_Win();
	void STATIC_HkStepCtl_RecoverA1_Step170_010();
	void STATIC_HkCsEvt_S0108_OnEnd();
	void STATIC_M03_S0107_BattleEnd_Lose();
	void STATIC_M03_S0107_BattleEnd_Win();
	void STATIC_HkStepCtlEvt_Retry_Step170_010();
	void STATIC_HkCsEvt_S0019_OnEnd_Step180_010();
	void STATIC_HkCsEvt_S0019_OnStart_Step180_010();
	void STATIC_HkStepCtlEvt_S0019_Step180_010();
	void STATIC_HkExspUnbind_Step180_020();
	void STATIC_HkExspEvent_ItemChange(const struct FName& ItemId, int NewNum, int OldNum);
	void STATIC_HkStepCtlEvt_S0110();
	void STATIC_HkCsEvt_S0110_OnEnd();
	void STATIC_HkStepCtlEvt_SearchYo();
	void STATIC_HkStepCtlEvt_S0034End();
	void EvtOnDialogCancel(class AActor* Actor);
	void STATIC_HkEvt_CsStep180030();
	void EvtOnDialogDecide(class AActor* Actor);
	void STATIC_EndTestEvt();
	void STATIC_TestEvt();
	void STATIC_HkCsEvt_S0114_OnStart();
	void STATIC_ExspLevelLoad_End();
	void STATIC_ExspLevelLoad_Wait();
	void STATIC_ExspLevelLoad_180_030();
	void OnFinishLevelLoaded_BellTower(const struct FName& ID);
	void STATIC_HkStepCtlEvt_BtKame();
	void STATIC_HkStepCtl_RecoverB1_Step180_030();
	void STATIC_HkStepCtl_RecoverA3_Step180_030();
	void STATIC_HkCsEvt_S0075_OnEnd();
	void STATIC_HkStepCtlEvt_BellTower();
	void STATIC_HkCsEvt_S0111_OnEnd();
	void STATIC_HkStepCtlEvt_ResultWait_Step180_030();
	void STATIC_HkStepCtlEvt_S0113();
	void STATIC_HkCsEvt_S0114_OnEnd();
	void STATIC_HkCsEvt_S0113_OnEnd();
	void STATIC_HkCsEvt_S0113_OnStart();
	void STATIC_HkStepCtl_RecoverA2_Step180_030();
	void STATIC_HkCsEvt_S0034_OnEnd();
	void STATIC_HkStepCtlEvt_S0034();
	void STATIC_HkStepCtl_RecoverA1_Step180_030();
	void STATIC_BellTower_HouohuSerachOn();
	void STATIC_BellTower_RootCheck_P6();
	void STATIC_HkStepCtl_RecoverA2_Step180_040();
	void STATIC_HkStepCtlEvt_S0084_Step180_040();
	void STATIC_HkStepCtl_RecoverA1_Step180_040();
	void STATIC_HkCsEvt_S0084_OnEnd();
	void STATIC_HkCsEvt_S0129_OnEnd();
	void STATIC_HkCsEvt_S0125_OnEnd();
	void StartBellTowerHiddenRoomGimmickEvent(bool HintOn);
	void OnEndBellTowerHiddenRoomGimmickEvent(bool bSuccess);
	void STATIC_BellTower_RootCheck_P5();
	void STATIC_BellTower_RootCheck_P4();
	void STATIC_BellTower_RootCheck_P3();
	void STATIC_BellTower_RootCheck_P2();
	void STATIC_BellTower_RootCheck_P1();
	void STATIC_HkCsEvt_S0035_OnEnd();
	void STATIC_HkCsEvt_S0076_OnEnd();
	void STATIC_HkCsEvt_S0076_OnStart();
	void STATIC_HkStepCtlEvt_DoorYou_Step190_000();
	void STATIC_HkCsEvt_S0077_OnEnd();
	void STATIC_ForcedStep10000000();
	void STATIC_HkEvt_RewardDCT_Look();
	void STATIC_HkEvt_RewardDct_StartTriggerB();
	void STATIC_HkEvt_RewardDct_StartTriggerA();
	void STATIC_HkStepCtlEvt_LeadFollowChange();
	void STATIC_HkStepCtl_RecoverA_LeadFollow_Change();
	void STATIC_ForcedStep03000000();
	void STATIC_ForcedStep16000000_Out_TimeLapse();
	void STATIC_ForcedStep16000000_Warp_TimeLapse();
	void ExecuteUbergraph_SL_Hakkason_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
