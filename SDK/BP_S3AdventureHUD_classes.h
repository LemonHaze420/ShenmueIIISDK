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

// BlueprintGeneratedClass BP_S3AdventureHUD.BP_S3AdventureHUD_C
// 0x008D (0x0609 - 0x057C)
class ABP_S3AdventureHUD_C : public ABP_S3HUD_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        MoneyStatus;                                              // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        PopupItem;                                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        menuManager;                                              // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_MenuWindowManager_C*                     BP_MenuManager;                                           // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3MemopadManager_C*                      BP_MemopadManager;                                        // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3DetectAction_C*                        BP_DetectAction;                                          // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PopupItem_C*                             BP_PopupItem;                                             // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class ABP_MemoTextureDataManager_C*                BP_MemoTextureDataManager;                                // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDevelopmentText_C*                          DevelopTextWidget;                                        // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsActiveKS;                                               // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	class ABP_money_status_C*                          BP_MoneyStatus;                                           // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_S3CharacterBase_C*>               ShowNameActors;                                           // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_HUDEnergyStatusManager_C*                BP_HUDEnergyStatusManager;                                // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBPW_UI_Clock_C*                             ClockWidget;                                              // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_UI_RewardWindowManager_C*                RewardNotice;                                             // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastClockVisible;                                         // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AdventureHUD.BP_S3AdventureHUD_C");
		return ptr;
	}


	bool ShowsClockOnPlayerBehavior(ES3PlayerBehavior Behavior);
	void DestroyDevelopmentText();
	void HideEyecatch();
	void STATIC_GetMenuManagerActor(class AActor** Actor);
	void PermitDetectAction_Impl(class AActor* Actor, bool* dummy);
	void STATIC_ForbidDetectAction_Impl(class AActor* Actor, bool* dummy);
	void PermitWindowUI_Impl(class AActor* Actor, bool* dummy);
	void STATIC_ForbidWindowUI_Impl(class AActor* Actor, bool* dummy);
	void STATIC_UpdateClockVisibility();
	void STATIC_SpawnManager();
	void HideMoneyStatus(class AActor* Actor);
	void ShowMoneyStatus(class AActor* Actor);
	void GetMoneyStatus(class ABP_money_status_C** BP_MoneyStatus);
	void ShowEyecatch(const struct FVector& Location, const struct FName& ForceId);
	void STATIC_GetMinimap2DManager(class ABP_MiniMap2DManager_C** BP_MinimapManager);
	void ShowCharaName(class AActor* Actor, bool Visible);
	void ChangeDetectIcon(class AActor* Actor, ES3ActionIconType Type, int Index, bool Visible);
	void GetMemoTextureDataManager(class ABP_MemoTextureDataManager_C** BP_MemoTextureDataManager);
	void GetPopupItem(class ABP_PopupItem_C** BP_PopupItem);
	void GetMenuManager(class ABP_MenuWindowManager_C** menuManager);
	void GetMemopadManager(class ABP_S3MemopadManager_C** AsBP_S3Memopad_Manager);
	void GetDetectAction(class ABP_S3DetectAction_C** AsBP_S3Detect_Action);
	void STATIC_UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void CastChildActor();
	void STATIC_ShowRewardNotice(ES3RewardCategory Category);
	void ExecuteUbergraph_BP_S3AdventureHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
