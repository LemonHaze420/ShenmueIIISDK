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

// BlueprintGeneratedClass BP_S3Memopad_book.BP_S3Memopad_book_C
// 0x040C (0x0734 - 0x0328)
class ABP_S3Memopad_book_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tab5;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tab2;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tab4;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tab3;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tab1;                                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tab0;                                                     // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        page4;                                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        page1;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        cover_rear_;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        cover_front_;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_S3Memopad_rings;                                       // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ppArea;                                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Rotation;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             carry;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Location;                                                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             book;                                                     // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _______1_StartAnimation_EF8A9FB941319A27239E7DBE68118300; // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______1__Direction_EF8A9FB941319A27239E7DBE68118300;     // 0x03E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	class UTimelineComponent* UnknownVar01;                                           // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _______0_cv_loc_z_BE8233C546C12613E4B38BB9D9BA6E76;       // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______0__Direction_BE8233C546C12613E4B38BB9D9BA6E76;     // 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent* UnknownVar02;                                           // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              fade_cv_loc_z_C110FCD04B072CBAE08CF8B5238DB168;           // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    fade__Direction_C110FCD04B072CBAE08CF8B5238DB168;         // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fade;                                                     // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              tl_PageMove2_MoveZ_FED9DC304A85610CDE7A88977EB8B6E8;      // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    tl_PageMove2__Direction_FED9DC304A85610CDE7A88977EB8B6E8; // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          tl_PageMove2;                                             // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              tl_PageMove1_MoveZ_F99B58294013783DDDFD578D3ED58F65;      // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    tl_PageMove1__Direction_F99B58294013783DDDFD578D3ED58F65; // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	class UTimelineComponent*                          tl_PageMove1;                                             // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    command_screenOut;                                        // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<ETimelineDirection>                    direction_tl_;                                            // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    onEndScreenIn;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onEndScreenOut;                                           // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                MAX_PAGE;                                                 // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	TArray<class ABP_S3Memopad_page_C*>                RightPages;                                               // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_S3Memopad_page_C*>                LeftPages;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              PAGE_INTERVAL;                                            // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TArray<class ABP_S3Memopad_page_C*>                CoverPages;                                               // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FMemopadCoverAnim>                   CoverAnimArray;                                           // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               TmpReverse;                                               // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	int                                                NewPage;                                                  // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OpenPageIndex;                                            // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	TArray<struct FST_RenderBP>                        RenderSet;                                                // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_S3Memopad_page_C*>                UseRenderIndex;                                           // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                UseRenderSetIndex;                                        // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLeftPress;                                              // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRightPress;                                             // 0x04ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x04EE(0x0002) MISSED OFFSET
	float                                              PressTime;                                                // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextPageInterval;                                         // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalTime;                                             // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushGameTime;                                             // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNextAnim;                                               // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBackAnim;                                               // 0x0501(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0502(0x0002) MISSED OFFSET
	float                                              AnimEndTime;                                              // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AUltra_Dynamic_Sky_BP_C*>             UDS;                                                      // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                      CloudSpeed;                                               // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_MemoPageTextData>                TextDatas;                                                // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DesignationPage;                                          // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OpenTabPageArrayIndex;                                    // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        TabPageArray;                                             // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PageCount;                                                // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUpPress;                                                // 0x0554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDownPress;                                              // 0x0555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0556(0x0002) MISSED OFFSET
	float                                              NextTabInterval;                                          // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TabIntervalTime;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TabDefaultScaleX;                                         // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPageBack;                                               // 0x0564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	int                                                JumpBookmarkPage;                                         // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    DoUseCancelButton;                                        // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsL1Press;                                                // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsR1Press;                                                // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPressR2;                                                // 0x0582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x5];                                       // 0x0583(0x0005) MISSED OFFSET
	TArray<class UTexture*>                            TabTexture_Select_;                                       // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSoundPlay;                                              // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    DoUseNewPageButton;                                       // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DoButtonCheck;                                            // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UTexture*>                            TabTexture_NotUseSelect_;                                 // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                            Texture_Unread_;                                          // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTabFlags;                                              // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NextTabIndex;                                             // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PageCountMax;                                             // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AssistCount;                                              // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUpButton;                                               // 0x05FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x05FD(0x0003) MISSED OFFSET
	class ABP_S3BgmPlayer_C*                           MemoBgm;                                                  // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Pos1;                                                     // 0x0608(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   size1;                                                    // 0x0610(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Pos2;                                                     // 0x0618(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   sizw2;                                                    // 0x0620(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	class UBW_DispMemopad_C*                           DispMemopad;                                              // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class ABP_S3Memopad_ring_w_C*>              ring;                                                     // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<ECameraZoomState>                      ZoomState;                                                // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	int                                                LastPage;                                                 // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DoUseStartEndPageButton;                                  // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<int>                                        FirstPages;                                               // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        LastPages;                                                // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FastPage;                                                 // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NotUseRenderIndex;                                        // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastLenderIndex;                                          // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	class ABP_MemoMap_CreateMask_C*                    MemoMapCreateMask;                                        // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PageClass;                                                // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartPage;                                                // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BookmarkVisibility;                                       // 0x069C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ContinueFlag;                                             // 0x069D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x069E(0x0002) MISSED OFFSET
	float                                              PermitDelay;                                              // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputCheck;                                               // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	TArray<int>                                        SubEventList;                                             // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SubEventListIndex;                                        // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	TArray<bool>                                       TabFlagUnread;                                            // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_MemoSubEvent>                    SubEvntDataList;                                          // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSubEventOngoing;                                        // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x06E1(0x0003) MISSED OFFSET
	int                                                SubEventPage;                                             // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubEventPageStartChobu;                                   // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OpenMainEventPage;                                        // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsStepNextIndex;                                          // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x06F1(0x0003) MISSED OFFSET
	int                                                OldSubEventListIndex;                                     // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPage;                                                  // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class UTextureRenderTarget2D*                      RefRenderF;                                               // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      RefRenderR;                                               // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PageNumTest;                                              // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class ABP_S3Memopad_page_C*                        RefPageF;                                                 // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3Memopad_page_C*                        RefPageR;                                                 // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_CreateMemoTexture_C*                     RefCreatePage;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PAGE_INTERVAL_MIN;                                        // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3Memopad_book.BP_S3Memopad_book_C");
		return ptr;
	}


	bool IsEnableJump();
	bool IsEnableDown(bool A);
	bool IsEnableUp(bool A);
	void GetTabJumpPage(int TabIndex, int* page);
	void GetPageInterval(float* PageInterval);
	void GetSubEvntListLength(int* Length);
	void CheckFirstOpenPage();
	void SetOpenMainEventPage();
	void CheckSkipSubEvent();
	void CheckSameSpread();
	void DeleteSubEventList();
	void GetNowOpenPageIndex(int* NowOpenPage);
	void CheckSubEventPage();
	void CheckOngoingSubEvent();
	void CheckUnreadTab();
	void CheckSubEvntFlg();
	void IsPageAnimation(bool* AnimationNow);
	void StartMotivationMove(bool Button);
	bool CheckMotivationMovePage();
	void IsActiveOpenNewPageButton(bool* Active);
	void NextPageContinueTurning(bool bRight);
	void ChangeCurrentMapPage(int page, int* ReturnPage);
	void GetContinueTurnPageTexture(class UTexture** Texture);
	void CheckPageDataValid(int PageIndex, bool* DataValid);
	void InitTab();
	void IsActiveStartEndPage(bool* ActiveStart, bool* ActiveEnd);
	void GetLastPage();
	void SetAlready(int page);
	void SetCaptureMempPAdPart();
	void SetText(int page, class UTextureRenderTarget2D* RenderF, class UTextureRenderTarget2D* RenderR, class ABP_S3Memopad_page_C* PageF, class ABP_S3Memopad_page_C* PageR, float LastUpdateDelayTime);
	void SetPhoto(class UTextureRenderTarget2D* RenderTexture, class UTexture* Photo, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoodinatePosition, const struct FVector2D& CoodinateSize, float Rotation, const struct FVector2D& PivotPoint, bool Right, int Index, class ABP_S3Memopad_page_C* page);
	void SetMapTexture(class UTextureRenderTarget2D* RenderTarget_Left, class UTextureRenderTarget2D* RenderTarget_Right, class ABP_S3Memopad_page_C* Page_Left, class ABP_S3Memopad_page_C* Page_Right, bool Right);
	void SetPageCountMax(int targetPage);
	void GetOpenPageIndex(int targetPage, int* OpenPage);
	void SetNextTabIndex(bool UpPush, bool* IsNextTab);
	void CheckTabVisible();
	void GetLastMemoNoInPage(int PageNo, int* MemoNo);
	void CheckButton();
	void IsActiveOpenMotivationPageButton(bool* Active);
	void GetPageTextureRFIndex(int* PageR, int* PageF);
	void StopAllActor();
	void TabCheck(int page, int* TagIndex);
	void GetPageData();
	void GetIsAnimation(bool* isAnim);
	void GetRenderItem(bool IsLast, class UTextureRenderTarget2D** Texture_1, class UTextureRenderTarget2D** Texture_2, int* Index);
	void SetPageStatus();
	void CheckCoverAnim(float DeltaTime);
	void SetCoverAnim(class ABP_S3Memopad_page_C* page, float WaitTime, int AnimId, bool Reverse);
	void SetCoverOffset(class UChildActorComponent* Component, float Offset);
	void AddPage(bool bRight, TArray<class ABP_S3Memopad_page_C*>* PageArray, class ABP_S3Memopad_page_C** page);
	void NextPage(bool bRight, bool IsLast);
	void TurnedPage(class ABP_S3Memopad_page_C* page, bool LastPage);
	void CloseBook(bool Finish);
	void OpenBook();
	void CreateBook();
	void doCmd_screenOut();
	void UserConstructionScript();
	void tl_PageMove1__FinishedFunc();
	void tl_PageMove1__UpdateFunc();
	void tl_PageMove2__FinishedFunc();
	void tl_PageMove2__UpdateFunc();
	void fade__FinishedFunc();
	void fade__UpdateFunc();
	void UnknownFunc01();
	void InpActEvt_Ctrl_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_MenuPageLeft_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_MenuPageRight_K2Node_InputActionEvent_11(const struct FKey& Key);
	void ReceiveBeginPlay();
	void doCmd_screenIn();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void PlayCoverAnim(const struct FMemopadCoverAnim& Info);
	void NextPageLeft();
	void NextPageRight();
	void Destroy();
	void BackTab();
	void NextTab();
	void SetTabSize();
	void InitPageTexture();
	void PushNewPage(bool IsR2);
	void PushPageEndButton();
	void PushPageStartButton();
	void PermissionDetectIcon();
	void OnPageUpdateEnd(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_S3Memopad_book(int EntryPoint);
	void DoUseStartEndPageButton__DelegateSignature(bool Active_StartPage, bool Active_EndPage);
	void DoButtonCheck__DelegateSignature(bool cancel, bool BookMark, bool NewPage, bool IsNotAllBookmark);
	void DoUseNewPageButton__DelegateSignature(bool Use);
	void DoUseCancelButton__DelegateSignature(bool bUse);
	void onEndScreenOut__DelegateSignature();
	void onEndScreenIn__DelegateSignature();
	void command_screenOut__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
