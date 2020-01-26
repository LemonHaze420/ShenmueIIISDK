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

// BlueprintGeneratedClass BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C
// 0x00F4 (0x0458 - 0x0364)
class ABP_UI_ShopBaseManager_C : public ABP_UI_Manager_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	int                                                shop_id;                                                  // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class UBPW_UI_BaseWindow_C*                        ShopWidget;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsCheckDialog;                                            // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSelect_CheckDialog;                                     // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoBuy;                                                    // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0383(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_Switch_DoBuy;                                          // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<int>                                        VisibleItemIDList;                                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EN_IconType>                           ShopType;                                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFocusCategory;                                          // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	int                                                CategoryNo;                                               // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPage;                                                  // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	TArray<int>                                        ItemIDList;                                               // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  ShopEventTable;                                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ViewMode;                                                 // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeforeAddButton;                                          // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeforeSubButton;                                          // 0x03D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               R2Press;                                                  // 0x03D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeforePayButton;                                          // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StickInput_vertical;                                      // 0x03D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StickInput_hor;                                           // 0x03D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x03D7(0x0001) MISSED OFFSET
	class UBP_CheatManager_C*                          CheatManager;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              L2R2Value;                                                // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               L2Press;                                                  // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSubtraction;                                            // 0x03E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightPush;                                                // 0x03E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftPush;                                                 // 0x03E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpPush;                                                   // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DownPush;                                                 // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipViewMode;                                            // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x03EB(0x0005) MISSED OFFSET
	class UBPW_UI_RStickIcon_C*                        RefWBP_RStickIcon;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bVisibleRStickIconOnStart;                                // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	int                                                ITEM_INDEX_NONE;                                          // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ITEM_INDEX_NOT_OWNED;                                     // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData09[0x50];                                      // 0x0404(0x0050) UNKNOWN PROPERTY: SetProperty BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SHOP_IDS_CRUDE_DRUG

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C");
		return ptr;
	}


	void TryChangePage(int Value);
	bool HasValidVisibleItemId(int FocusItemIdx);
	bool IsSetCompletionItem(int FocusItemNum);
	void UpdateDescription(class UBPW_UI_BaseWindow_C* ShopWindow);
	void CalcSetItemIconRange(int FocusItemNo, int* FirstItem, int* LastItem);
	bool IsSetExchangeShop();
	int ApplyCheatPrice(int ItemId, int BaseValue);
	void SetRotateIconVisiblity(bool Visible, bool* dummy);
	void SetRStickIconPos();
	void IsVisibleRStickCenterPos(bool* IsCenter);
	bool IsVisibleRStickOnlyViewMode();
	void SetViewModeSkip(bool SkipFlag);
	void GetNowCategory(ES3ItemDataGroup* Category);
	bool IsPawnShopSetExchangeCategory();
	void GetItemIncrementNum(int* Count);
	void SetSkillWindow();
	void ItemValidCheck(bool* IsValid);
	void Calc_BuyPrice(int ItemId, int Price, int* MarginPrice, float* Margin);
	void UpdateDescription_Ruby(int ItemId, bool* Ruby);
	void GetUITextData(const struct FName& Label, struct FString* OutString);
	bool IsCrudeDrugOnly();
	void IsFocusedSetComplete(int FocusItemNo, bool* IsComplete);
	void SetExchange_CheckPayIcon();
	void SetShopName(int ShopID);
	void CheckSubEvent(TArray<int>* BuyItemList);
	void BeforDestroy();
	void PushAddSubButtonAfter();
	void SubSetItem();
	void AddSetItem();
	void ChangePage(int Value);
	void InitPageIcon();
	void MoveCategoryFocusAfter();
	void GetCategory(ES3ItemDataGroup* Category);
	void InitItemListWindow();
	void MoveCategoryFocus(int Value);
	void SetCategory(class UDataTable* DataTable);
	void UpdateItemIDList();
	void VisibleButton_CheckDialog(bool Visible_CheckDialog);
	void CheckVisibleAddButton();
	void CheckVisibleSubButton();
	void UpdateDescriptionSub(struct FText* Description);
	void CheckFocusItemNo();
	void UserConstructionScript();
	void InpActEvt_ResetCamera_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10(const struct FKey& Key);
	void PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton);
	void FinishPriceAnim();
	void ReceiveBeginPlay();
	void DecideDetectAction(ES3ActionIconType Type);
	void OpenYesNoDialog();
	void InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue);
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void PushL2R2_ViewMode(float InputPin);
	void UpDownReset();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PushButton(TEnumAsByte<EN_UI_Button> newParam);
	void ExecuteUbergraph_BP_UI_ShopBaseManager(int EntryPoint);
	void ED_Switch_DoBuy__DelegateSignature(bool DoBuy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
