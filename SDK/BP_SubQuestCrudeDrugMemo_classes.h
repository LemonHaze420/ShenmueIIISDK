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

// BlueprintGeneratedClass BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C
// 0x0078 (0x03A0 - 0x0328)
class ABP_SubQuestCrudeDrugMemo_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                EventFlagNumber;                                          // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMin;                                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMax;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bItemCheckEnable;                                         // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	TMap<struct FString, struct FST_SUBQCrudeDrugMemo> DataTable;                                                // 0x0348(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UTalkScript*                                 TalkScript;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C");
		return ptr;
	}


	bool TryGetItemData(const struct FName& InName, struct FST_SUBQCrudeDrugMemo* OutData);
	void CheckItemGetNum(const struct FString& ItemId, bool* PlayAc);
	void CheckPlayAc(bool* enable_play);
	void CheckAllGetItem(bool* AllGet);
	void GetItemNum(int ID, int* Count);
	void SetCrudeDrugGlobalFlag(int FlagID, int FlagValue, bool* set_is_done);
	void isEnableEvent(bool* Enable);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartEvent(int ArrayIndex, int SetFlags);
	void LoadStartIn();
	void ItemChange(const struct FName& ItemId, int NewNum, int OldItem);
	void ExecuteUbergraph_BP_SubQuestCrudeDrugMemo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
