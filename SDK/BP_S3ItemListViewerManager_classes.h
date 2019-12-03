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

// BlueprintGeneratedClass BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C
// 0x02A9 (0x05D1 - 0x0328)
class ABP_S3ItemListViewerManager_C : public AS3ItemListViewerManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class Uwgt_S3ItemListViewerWindow_C*               gachaWindow;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBW_MenuTimer_C*                             MenuTimer;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsBusy;                                                   // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	int                                                CurrentIndex;                                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   startCurPos;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRight;                                                  // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isLeft;                                                   // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isUp;                                                     // 0x035A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDown;                                                   // 0x035B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<class ABP_ItemListViewerItemRotateRoot_C*>  itemList;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                itemSelIdxX;                                              // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                itemSelIdxY;                                              // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                currentCategory;                                          // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class ABP_ItemListViewerItemRotateRoot_C*          detailItem;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ItemListViewerItemRotateRoot_C*          CurrentItem;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ItemListViewerItemRotateRoot_C*          tmpItem;                                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                tmpIdx;                                                   // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FItemListItemTable>                  tableList;                                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               selectMode;                                               // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class UDataTable*                                  item_table;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                list_row_max;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                list_col_max;                                             // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                list_page_max;                                            // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                list_page_now;                                            // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                list_page_old;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UDataTable*                                  category_table;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rootRot;                                                  // 0x03E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               isInisializing;                                           // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class Uwgt_CheckWindow_C*                          check_window;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                current_item_id;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_dialog;                                                // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_item_use;                                              // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_sell;                                                  // 0x03FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x03FF(0x0001) MISSED OFFSET
	int                                                current_sell_price;                                       // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                current_value;                                            // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Category_MAX;                                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EItemListType>                         list_type;                                                // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_buy;                                                   // 0x040D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x040E(0x0002) MISSED OFFSET
	int                                                current_buy_price;                                        // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class Uwgt_item_list_status_C*                     status_window;                                            // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               isMoneyCount;                                             // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3ItemListMenuType                                select_menu_type;                                         // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0422(0x0006) MISSED OFFSET
	TArray<ES3ItemListMenuType>                        select_menu_type_list;                                    // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               is_shop_buy;                                              // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	int                                                shop_id;                                                  // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CloseOnCursorModeEnd;                                     // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	TArray<int>                                        gift_item_list;                                           // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3actionSelect_C*                        selectBuyOrSell;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ED_shopEnd;                                               // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<int>                                        gift_item_page_list;                                      // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EItemListBuyType>                      buy_type;                                                 // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                current_buy_need_item_id;                                 // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        col_max_list;                                             // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               iconMakeMode;                                             // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	TArray<struct FString>                             localizedList;                                            // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Uwgt_skiledit_C*                             skill_editor;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<bool>                                       itemL;                                                    // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ActionButtonVisibility;                                   // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FString                                     HelpName;                                                 // 0x04D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                CategoryIndex_Min;                                        // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CategoryIndex_Max;                                        // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ViewMode;                                                 // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class ABP_UI_ConfigManager_C*                      ConfigWidget;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                SkillWindowIndex;                                         // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DownPress;                                                // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	float                                              DelayTime_Down;                                           // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDelayTime_Down;                                    // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayCount_Down;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpPress;                                                  // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x050D(0x0003) MISSED OFFSET
	float                                              DelayTime_Up;                                             // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDelayTime_Up;                                      // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayCount_Up;                                            // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightPress;                                               // 0x051C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	float                                              DelayTime_Right;                                          // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDelayTime_Right;                                   // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayCount_Right;                                         // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftPress;                                                // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	float                                              DelayTime_Left;                                           // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDelayTime_Left;                                    // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayCount_Left;                                          // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_DestroyManager;                                        // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_UI_SetExchangeManager_C*                 SetExchangeManager;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetExchangeEnd;                                           // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CancelButtonVisibility;                                   // 0x0559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x055A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ED_FinishInit;                                            // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EnableSFX;                                                // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Inventory_DecideButtonVisibility;                         // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x0572(0x0002) MISSED OFFSET
	float                                              L2R2Value;                                                // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ViewModeButtonVisibility;                                 // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	TArray<int>                                        FocusItemList;                                            // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Uwgt_SkillEditor_SetPanel_C*                 ItemListViewerManager;                                    // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bInitVisibilityBaseGrid;                                  // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReleaseFlg;                                               // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x059A(0x0002) MISSED OFFSET
	int                                                Item716_Index;                                            // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ExchangeLabel;                                            // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCancelAnimation;                                        // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableOption;                                            // 0x05B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x6];                                       // 0x05B2(0x0006) MISSED OFFSET
	class UImage*                                      BackgroundImage;                                          // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bCloseReserve;                                            // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class UBPW_UI_RStickIcon_C*                        RefWBP_RStickIcon;                                        // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDisableViewModeInput;                                    // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> STATIC_GetDetectAction();
	void STATIC_CheckTrialVersion();
	bool STATIC_IsVisibleRStickOnlyViewMode(ES3ItemListMenuType Type);
	void STATIC_InitializeCategories();
	void SetSelectMenuTypeList();
	bool STATIC_IsOnExchangeCategory();
	void STATIC_UpdateSkillDisplay();
	void AddItemDataToList(int ItemId, TArray<struct FItemListItemTable> Table, int* NextTableIdx);
	void STATIC_SimpleValueAdditiveSort(ES3ItemListMenuType CategoryType, TArray<struct FItemListItemTable>* itemList);
	void SpaceOneItemPerRow(TArray<struct FItemListItemTable>* ItemDataList);
	bool STATIC_IsSetMenu(ES3ItemListMenuType InputPin);
	void STATIC_SortItemListByInt(TArray<int> IntArray, bool dsc, TArray<struct FItemListItemTable>* SortArray);
	void STATIC_MoveContentsOfArray(TArray<struct FItemListItemTable>* Sorce_Array, TArray<struct FItemListItemTable>* Temp_Array);
	TEnumAsByte<EN_Inventory_CategoryType> STATIC_GetDescriptionType(int Index);
	bool STATIC_AllowsViewModeAxisInput(bool* TryTransit);
	void STATIC_UpdateCategoryTipsImage();
	void NavigateSkillEditor(TEnumAsByte<Een_skill_key_type> Key);
	void SetSkillWindow(TEnumAsByte<EMenuType> InputPin);
	void STATIC_MakeFocusItemList(int ItemIndex);
	void PlaySound(class USoundAtomCue* Sound);
	void STATIC_OpenToFoodItem(int ItemId);
	void ReleaseCursor();
	void IsValidSetExchange(bool* IsValid);
	void GetIndex(const struct FString& ItemLabel, int* ItemIndex);
	void TickSelectKeyPresses(float DelayTime);
	void STATIC_IsViewHelp(bool* IsDisp);
	void STATIC_FlipPage(bool DirRight);
	bool CanUseItem(bool Warn);
	void STATIC_MovedCursor();
	void FormatItemString(const struct FS3ItemDataTable& S3ItemDataTable, bool Show, struct FString* OutString);
	void STATIC_TrySelectCategory();
	void CloseUseItemWindow();
	void LaunchUseItemWindow(TEnumAsByte<EMenuType> InputPin);
	void GetCurrentItemUseAction(ES3ItemEffectTarget* Value_Target);
	void STATIC_UseItem();
	void GetLocalizedText(TEnumAsByte<EUIText_Enum> ID, struct FString* Text);
	void MakeLocalizedText();
	void PlayCommonSound(TEnumAsByte<EN_InventorySE_List> ID);
	void STATIC_MakeDetail();
	void STATIC_SetVisibleDetail(int idx);
	void ResetSelect();
	void AddCurrentItemNum(int Add);
	void STATIC_GetItem(int ItemIndex, struct FText* ItemIndexText);
	void STATIC_AllDestroy();
	void SetCursorMode(bool selectMode);
	void STATIC_RightCursor();
	void STATIC_LeftCursor();
	void STATIC_UpCursor();
	void DownCursor();
	void STATIC_UpdateDetailItemInfo();
	void changeItemList();
	void RegisterForInput(bool isOpe);
	bool STATIC_IsNoScrollRange();
	void STATIC_ChangeCursorPos();
	void STATIC_ChangeStatus();
	void STATIC_ReturnStatus();
	void UserConstructionScript();
	void InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_SearchRightButton_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_MenuPageRight_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Alt_P_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_ResetCamera_K2Node_InputActionEvent_15(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DecideDetectAction(ES3ActionIconType Type);
	void InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue);
	void CloseMenuSelf();
	void UpSelect();
	void DownSelect();
	void LeftSelect();
	void RightSelect();
	void OnGatchaAnimEnd();
	void InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9(float AxisValue);
	void EndSetEcchange(bool DoBuy);
	void StartViewMode();
	void PushL2R2_ViewMode(float InputPin);
	void InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_3(float AxisValue);
	void EnterViewModeInternal();
	void Private_SelectCategoryVert(bool Up);
	void CloseReserve();
	void PermitHelpOnInit();
	void PushButton(class AActor* Actor);
	void ExecuteUbergraph_BP_S3ItemListViewerManager(int EntryPoint);
	void ED_FinishInit__DelegateSignature();
	void ED_DestroyManager__DelegateSignature();
	void STATIC_ED_shopEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
