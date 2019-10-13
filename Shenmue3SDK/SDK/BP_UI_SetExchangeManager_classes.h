#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C
// 0x0067 (0x0460 - 0x03F9)
class ABP_UI_SetExchangeManager_C : public ABP_UI_ShopBaseManager_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	TArray<int>                                        ExchangeSkillBookList;                                    // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        VisibleExchangeSkillBookList;                             // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             NameList;                                                 // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             VisibleNameList;                                          // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInventory;                                              // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	TArray<int>                                        AreaItemIDList;                                           // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C");
		return ptr;
	}


	bool IsVisibleRStickOnlyViewMode();
	void MakeAreaItemIdList();
	void GetItem();
	void SetRightWindow();
	void SetExchangeChangePage(int Value);
	void MakeItemIdList();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void MoveCategoryFocusAfter();
	void ChangePage(int* Value);
	void PushCheckDialog(TEnumAsByte<EN_UI_Button>* PushButton);
	void ExecuteUbergraph_BP_UI_SetExchangeManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
