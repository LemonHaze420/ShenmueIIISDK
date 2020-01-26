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

// BlueprintGeneratedClass BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C
// 0x043A (0x0A44 - 0x060A)
class ABP_MiniGame_ChawanJin_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        ChildActor;                                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RayCheck;                                                 // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshMotion;                                       // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MotionMesh;                                               // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal4;                                                   // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal3;                                                   // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal2;                                                   // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal1;                                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ItemLookCamara;                                           // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RootLookPos;                                              // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RootCameraPos;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ItemMesh;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GetItemRoot;                                              // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneWaitCameraDef;                                       // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneWaitCamera;                                          // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneWait;                                                // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             StartCameraPos;                                           // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraPos;                                                // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cup4;                                                     // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cup3;                                                     // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cup2;                                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cup1;                                                     // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CupParent;                                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       USE_SEQUENCE_ID;                                          // 0x06F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0700(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.UseSequence
	int                                                ChawanJin_TableID;                                        // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	TArray<struct FST_CJ_CupCipher>                    CipherTable;                                              // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDuringTransition_Select;                                 // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDuringTransition_Move;                                   // 0x0741(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Cur_DuringTransition_Select;                              // 0x0742(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Target_DuringTransition_Select;                           // 0x0743(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_CJ_CupPos>                          Cur_DuringTransition_Move;                                // 0x0744(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_CJ_CupPos>                          Target_DuringTransition_Move;                             // 0x0745(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0746(0x0002) MISSED OFFSET
	class ABP_CJ_Input_C*                              TempInput;                                                // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UpDownDistance;                                           // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartVisibiltyCursol;                                    // 0x0754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	class ABP_CJ_Indicate_C*                           TempIndicate;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EN_CJ_CupPos>>                  CupPosTable;                                              // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_CJ_CupMoveDistance>              CupoveDistance;                                           // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWBP_MiniGame_Kachofugetsu_C*                TempWgt;                                                  // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EN_CJ_Flow>                            FlowID;                                                   // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	class ABP_CJ_KSmodlue_C*                           TempKSmodule;                                             // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_CJ_KsInfo>                       KStable;                                                  // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                USEFLAG_WINSET;                                           // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                USEFLAG_LOSESET;                                          // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameWin;                                                 // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlreadyGameWon;                                          // 0x07B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x07B2(0x0002) MISSED OFFSET
	float                                              SaveField;                                                // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CsWaitTimer;                                              // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SaveDeltaTime;                                            // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             NewVar_1;                                                 // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bChangeSelectOrMove;                                      // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x07C9(0x0003) MISSED OFFSET
	struct FVector                                     NewVar_2;                                                 // 0x07CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                EnableFlagNo_L;                                           // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnableFlagNo_H;                                           // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     WinItemID;                                                // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     DefItemLocation;                                          // 0x07F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x07FC(0x0004) MISSED OFFSET
	TArray<struct FST_CJ_SubTitleInfo>                 WainTalkTelop;                                            // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        WinInfoInt;                                               // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                USEFLAG_RESET1;                                           // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                USEFLAG_RESET2;                                           // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                USEFLAG_RESET3;                                           // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GetBug;                                                   // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_CJ_SubTitleInfo>                 WainTalkTelop2;                                           // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SaveDeltaTimeBisa;                                        // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugTemp;                                                // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GetTimeTest;                                              // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SaveDebug;                                                // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                USEFLAG_MEMOCHECK1;                                       // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                USEFLAG_MEMOCHECK2;                                       // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                USEFLAG_MEMOCHECK3;                                       // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                USEFLAG_LOADDLC;                                          // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SELECT_MOMOPAGE1;                                         // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SELECT_MOMOPAGE1B;                                        // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SELECT_MOMOPAGE2;                                         // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SELECT_MOMOPAGE2B;                                        // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SELECT_MOMOPAGE3;                                         // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SELECT_MOMOPAGE3B;                                        // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SELECT_MOMOPAGE3C;                                        // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      START_SELECT;                                             // 0x087C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameCancelRsv;                                           // 0x087D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x087E(0x0002) MISSED OFFSET
	float                                              GAMETIME_OVER;                                            // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLiveIndicateActor;                                       // 0x0884(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLiveKSModuleActor;                                       // 0x0885(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameTimeBiasChange;                                      // 0x0886(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartIn;                                                 // 0x0887(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadItemMesh;                                            // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	TArray<struct FST_CJ_SubTitleInfo>                 WinTellop_Grp1;                                           // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_CJ_SubTitleInfo>                 WinTellop_Grp2;                                           // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_CJ_SubTitleInfo>                 WinTellop_Grp3;                                           // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_CJ_SubTitleInfo>                 WinTellop_Grp4;                                           // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                USEFLAG_MEMOCHECK4;                                       // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	struct FName                                       SAVEID_CJPLAY;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TROPHYCHECK_ALLPLAY;                                      // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartGameTime;                                            // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SAVEID_CJTOTALTIME;                                       // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TOTALTIME_MAX;                                            // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3AchievementType                                 GETTROPHY_PLAYTIME;                                       // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3AchievementType                                 GETTROPHY_PLAYALL;                                        // 0x08F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x08F6(0x0002) MISSED OFFSET
	class US3LevelSequencePlayer*                      SeqPlayer;                                                // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x50];                                      // 0x0900(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.PersolToSeqID
	TEnumAsByte<EN_CJ_ItemGiveingPerson>               WinItemGivePerson;                                        // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	float                                              MOTIONBASE_SIZE;                                          // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveMotionAdjust;                                         // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	class ABP_CJ_IndicateBS_C*                         TempIndicateBS;                                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x0968(0x0008) MISSED OFFSET
	struct FTransform                                  NewVar_3;                                                 // 0x0970(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_4;                                                 // 0x09A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x09AC(0x0004) MISSED OFFSET
	class AActor*                                      AdjustPos;                                                // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                USEFLAG_SEQFLAG;                                          // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGetAchievemend;                                          // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3AchievementType                                 GetAchievemendID;                                         // 0x09BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bViewItemMesh;                                            // 0x09BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x09BF(0x0001) MISSED OFFSET
	TArray<struct FS3DetectActionParam>                TempDetect;                                               // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bActionButton;                                            // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForcedClockOff;                                           // 0x09D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x09D2(0x0002) MISSED OFFSET
	float                                              WinSceneAdjustFront;                                      // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WinSceneAdjustSide;                                       // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelectAjdustFront;                                        // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelectAjdustHight;                                        // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CupmoveCoefficient;                                       // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVar_5;                                                 // 0x09E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_6;                                                 // 0x09F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcedCancel;                                            // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMiniGameCancelDisable;                                   // 0x0A01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_CJ_ChawanType>                      MoveSeType;                                               // 0x0A02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x0A03(0x0001) MISSED OFFSET
	struct FVector                                     SELECTMOTION_BASE;                                        // 0x0A04(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DefItemMotionMeshLocation;                                // 0x0A10(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    KnobRotation;                                             // 0x0A1C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MfingerCorrection;                                        // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0A2C(0x0004) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         TempSoundPlayer;                                          // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CsWaitSaveGameTimer;                                      // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CSWAIT_ELASPEDTIME;                                       // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RESULT_AORITIME;                                          // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C");
		return ptr;
	}


	void ChangeHelpButton(bool Enable);
	void MiniGameDataCheckWinData(bool* EnableSaveData);
	void CulcCupmoveCoefficient(float Distance, float* AdjustDistance);
	void SetOffsetMotionMesh();
	void PlayMoveSe();
	void ResetForcedCancelDisable();
	void SetForcedCancelDisable();
	void Set_IndicateBS(unsigned char Cup_No);
	void Attach_CupMoveR(float FMH_Pos);
	void WaitSceneCamera(float Delta);
	void SetVisibleButton(bool Visible);
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void CulcSeqPosAdjust(struct FVector* Adjust);
	void Get_MoveMotionAdjust(float* Mul_Value);
	void Get_AnimInstaceBS(class UABP_MiniGame_CJ_RyoBS_C** AsABP_Mini_Game_CJ_Ryo);
	void Get_TargetMovePosID(TEnumAsByte<EN_CJ_CupPos>* CurrentPosID);
	void TestSet();
	void CtlTrophy_TotalPlayTime(bool* Changed_from_before, bool* Trophy_Get);
	void CtlTrophy_SaveGameTime();
	void CtlTrophy_PlayHistory(bool* Changed_from_before, bool* Trophy_Get);
	void CheckDLC();
	void ChangeMenoButton(bool Enable);
	void ChangeClockVisible(bool Visible);
	void GameCancelPostProcess();
	void CheckInterruptible(bool* Enable);
	void CheckItemAcquisition(int FlagID, bool* AlreadyAcquired);
	void MakeMemoPage(int* SelectPage);
	bool IsActivateHelp();
	void Make_Memo();
	void MakeWonInfo(bool* WonFlag);
	void GetCupRotation(struct FRotator* Rotator);
	void CheckItemKind(const struct FString& Item_ID, int* Type);
	void CheckReset(bool FlagEnable, bool* Result);
	void CheckWinSaveData(TArray<int>* WinTable, bool* Result);
	void SetWinSaveData(int Cipher_Index, bool WinFlag, bool Forced_Faile, bool* Progress_Quest);
	void ResetWinSaveData();
	void CallTest(bool* Loaded_End);
	void StartMeshOff();
	void GetCupLocation(struct FVector* Location);
	void CheckMiniGameEnable(bool* GameEnable);
	void CreateWinCountKey(TEnumAsByte<EMiniGamePurpose> Purpose, struct FName* Key);
	void CipherFlagCheck(int FlagID, int Min, int Max, bool ForcedFailure, bool* Enable);
	void IkRot(float add_h, float add_v);
	void CulcSocket(struct FVector* newParam);
	void IkMoveBall(float add_h, float add_v);
	class UMeshComponent* GetClothMeshComponent();
	void Culc_CupMoveWidth_Rot(struct FVector* Add_Width);
	void SetField(float Add);
	void RefreshSaveData(int LoadData);
	void MiniGameDataSaveLoad(bool Save, bool* Result, int* Value, bool* Won);
	void MakeSaveData(int* SaveCode);
	void CheckResult(bool* Win, struct FString* ItemId, bool* QuestProgress, bool* FocedFailure, bool* AlreadyGameWon, int* ItemAcquisitionFlagID, TEnumAsByte<EN_CJ_ItemGiveingPerson>* ItemGiveingPerson);
	void InitWork();
	void Make_Ks();
	void Attach_CupMove(const struct FVector& AttachPos);
	void Culc_CupMoveWidth(float* Add_Width);
	void Change_TargetToCurrent();
	void Get_CurrentMovePosID(TEnumAsByte<EN_CJ_CupPos>* CurrentPosID);
	void Get_AnimInstace(class UABP_MiniGame_CJ_Ryo_C** AsABP_Mini_Game_CJ_Ryo);
	void Get_CupPos(const struct FName& CurOrTarget, struct FVector* CupPos);
	void InitAsyncLoad(bool* dummy);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void OnLoaded_63E0AA844D10E66D96C45D962DD44D81(class UObject* Loaded);
	void OnLoaded_26E38CB8452D0B1C77E25596A4C7F2F4(class UObject* Loaded);
	void OnLoaded_4E68A4D94FD541AE2BC143A8853313EC(class UObject* Loaded);
	void StartMiniGame();
	void EndMiniGame();
	void RestartMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void Event_EndMiniGame();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Evt_CursolChange(const struct FName& Type);
	void Evt_MoveEnd();
	void Evt_KsModuleEnd(const struct FName& Key);
	void EvtFlagChange(int ArrayIndex, int SetFlags);
	void FlagChg_Refresh();
	void Evt_MemoFinish();
	void Evt_GameCancel();
	void DelayedInitialize();
	void WinScene_End();
	void WinScene_EndSeq();
	void WinScene_StartSeq();
	void LookItem();
	void Scene_ItemLook();
	void SeqEnd();
	void ExecuteUbergraph_BP_MiniGame_ChawanJin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
