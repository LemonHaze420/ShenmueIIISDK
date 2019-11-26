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

// BlueprintGeneratedClass BP_TuriguRentalManager.BP_TuriguRentalManager_C
// 0x00AC (0x03D4 - 0x0328)
class ABP_TuriguRentalManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                shop_id;                                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_dialog;                                                // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_buy;                                                   // 0x033D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    onBuyEnd;                                                 // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onNoBuyEnd;                                               // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_ItemListViewerItemRotateRoot_C*          DetailItem;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                current_buy_price;                                        // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class Uwgt_FishingRodList_C*                       fishrod_list;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<int>                                        turigset_list;                                            // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                now_set;                                                  // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	TArray<class UUniformGridSlot*>                    cartfl_list;                                              // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class Uwgt_ShopCartListItem_C*>             cl_fl;                                                    // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        rental_itemid_list;                                       // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_ItemListViewerItemRotateRoot_C*          DetailItem2;                                              // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AUITextManager_C*                            UITextManager;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PayButttonEnable;                                         // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CancelButtonEnable;                                       // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCansel;                                                 // 0x03D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDecide;                                                 // 0x03D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TuriguRentalManager.BP_TuriguRentalManager_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void IsHaveVipCard(bool* IsHaveVipCard);
	void CheckPayButton();
	void EndFlow();
	void UpdNowSelSet();
	void PlaySE(TEnumAsByte<EN_ShopSE_List> SE);
	void GetItemID(int item_no, struct FText* ret);
	void UserConstructionScript();
	void InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_SearchTopButton_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DecideDetectAction(ES3ActionIconType Type);
	void ExecuteUbergraph_BP_TuriguRentalManager(int EntryPoint);
	void onNoBuyEnd__DelegateSignature();
	void onBuyEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
