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

// BlueprintGeneratedClass BP_UI_GiftManager.BP_UI_GiftManager_C
// 0x0098 (0x04F0 - 0x0458)
class ABP_UI_GiftManager_C : public ABP_UI_ShopBaseManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	int                                                MaxItemNo;                                                // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<int>                                        CanUseItemIDList;                                         // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             CanUseItemTypeList;                                       // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ED_UseItem;                                               // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     SuccessItemCondition;                                     // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             FalseConditionList;                                       // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EN_UseItemResult>>              FalseTypeList;                                            // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UseItemID;                                                // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SuccessConsumeFlag;                                       // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	TArray<bool>                                       FalseConsumeFlagList;                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    INFO_SuccessItem;                                         // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_GiftManager.BP_UI_GiftManager_C");
		return ptr;
	}


	void CheckResult(TEnumAsByte<EN_UseItemResult>* Result, bool* ConsumeFlag);
	void GiftChangePage(int Value);
	void MakeCanUseItemIDList();
	void InitItemDataLength();
	void MakeItemIdList();
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
