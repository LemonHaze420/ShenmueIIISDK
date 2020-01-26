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

// BlueprintGeneratedClass BP_UI_PawnshManager.BP_UI_PawnshManager_C
// 0x0030 (0x0488 - 0x0458)
class ABP_UI_PawnshManager_C : public ABP_UI_ShopBaseManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	TArray<struct FS3ItemDataTable>                    AllItemDataList;                                          // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ES3Where                                           AreaId;                                                   // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	TArray<int>                                        SetIDList;                                                // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_PawnshManager.BP_UI_PawnshManager_C");
		return ptr;
	}


	bool HasEnoughToSellItem(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemGroup, int HaveNum);
	void IsVisibleRStickCenterPos(bool* IsCenter);
	void CheckWearableClothItem(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List);
	bool IsVisibleRStickOnlyViewMode();
	void CheckEnabledByArea(int ItemId, bool* Enabled);
	void GetItemGroup(int item_id, ES3ItemDataGroup* Group);
	void CheckRewardGacha(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List);
	void CheckClothItem(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List);
	void SubtractItemSetFromInventory();
	void SetPriceFromSetItem();
	void SetRightWindow();
	void RightWindowChange();
	void MakeItemDataList();
	void PawnshUpdateItemIDList();
	void PawnshChangePage(int Value);
	void MakeItemIdList();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ChangePage(int Value);
	void UpdateItemIDList();
	void MoveCategoryFocusAfter();
	void SellAnimFinish_RegularShop();
	void PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton);
	void SellAnimFinish_Set();
	void SetSkillWindow();
	void CheckVisibleSubButton();
	void CheckVisibleAddButton();
	void ExecuteUbergraph_BP_UI_PawnshManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
