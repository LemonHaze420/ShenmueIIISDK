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

// BlueprintGeneratedClass BP_UI_GiftManager.BP_UI_GiftManager_C
// 0x009F (0x0498 - 0x03F9)
class ABP_UI_GiftManager_C : public ABP_UI_ShopBaseManager_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	int                                                MaxItemNo;                                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TArray<int>                                        CanUseItemIDList;                                         // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             CanUseItemTypeList;                                       // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ED_UseItem;                                               // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     SuccessItemCondition;                                     // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             FalseConditionList;                                       // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EN_UseItemResult>>              FalseTypeList;                                            // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UseItemID;                                                // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SuccessConsumeFlag;                                       // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	TArray<bool>                                       FalseConsumeFlagList;                                     // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    INFO_SuccessItem;                                         // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_GiftManager.BP_UI_GiftManager_C");
		return ptr;
	}


	void CheckResult(TEnumAsByte<EN_UseItemResult>* Result, bool* ConsumeFlag);
	void GiftChangePage(int Value);
	void MakeCanUseItemIDList();
	void InitItemDataLength();
	void MakeItemIDList();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CheckVisibleAddButton();
	void CheckVisibleSubButton();
	void PushAddSubButtonAfter();
	void PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton);
	void BeforDestroy();
	void SetShopName(int ShopID);
	void ExecuteUbergraph_BP_UI_GiftManager(int EntryPoint);
	void INFO_SuccessItem__DelegateSignature(int ItemList);
	void ED_UseItem__DelegateSignature(TEnumAsByte<EN_UseItemResult> Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
