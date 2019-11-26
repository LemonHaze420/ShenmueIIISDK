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

// BlueprintGeneratedClass BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C
// 0x0028 (0x08F8 - 0x08D0)
class ABP_MiniGameDLCBigWheel_C : public ABP_MiniGameBigWheel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (Transient, DuplicateTransient)
	int                                                EventFlagIndex;                                           // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class UDataTable*                                  SpecialEventItemData;                                     // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEventJackpot;                                           // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	int                                                PlayCountFlagIndex;                                       // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                QuestFlagIndex;                                           // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AfterEventFlagNum;                                        // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameDLCBigWheel.BP_MiniGameDLCBigWheel_C");
		return ptr;
	}


	void IsSpecialEvent(bool* Event);
	void UpdateEventFlag();
	bool IsGetAllItem(class UDataTable* Table);
	bool IsFigureEvent();
	bool IsAfterEvent();
	void UserConstructionScript();
	void UpdateSpecialItemData(class UDataTable* DataTable, int Count);
	void OnFlagChanged(int ArrayIndex, int SetFlags);
	void AddJackpotCount();
	void ReceiveBeginPlay();
	void UpdateTicketNum();
	void EndMiniGame();
	void ExecuteUbergraph_BP_MiniGameDLCBigWheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
