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

// BlueprintGeneratedClass BP_UI_PawnshManager.BP_UI_PawnshManager_C
// 0x003F (0x0438 - 0x03F9)
class ABP_UI_PawnshManager_C : public ABP_UI_ShopBaseManager_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	int                                                MaxItemNo;                                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TArray<struct FS3ItemDataTable>                    ItemDataList;                                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ES3Where                                           AreaId;                                                   // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	TArray<int>                                        SetIDList;                                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_PawnshManager.BP_UI_PawnshManager_C");
		return ptr;
	}


	void IsVisibleRStickCenterPos(bool* IsCenter);
	void CheckClothItemNum(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List);
	bool IsVisibleRStickOnlyViewMode();
	void CheckEnabledByArea(const struct FName& ItemLabel, bool* Enabled);
	void CheckItemGroup(int item_id, ES3ItemDataGroup* Group);
	void CheckRewardGacha(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List);
	void CheckClothItem(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List);
	void GetItem();
	void STATIC_SetPrice();
	void SetRightWindow();
	void RightWindowChange();
	void MakeItemDataList();
	void PawnshUpdateItemIDList();
	void STATIC_PawnshChangePage(int Value);
	void MakeItemIdList();
	void InitItemDataLength();
	void STATIC_UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CheckVisibleAddButton();
	void CheckVisibleSubButton();
	void ChangePage(int Value);
	void UpdateItemIDList();
	void MoveCategoryFocusAfter();
	void STATIC_CustomEvent_2();
	void PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton);
	void CustomEvent();
	void SetSkillWindow();
	void ExecuteUbergraph_BP_UI_PawnshManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
