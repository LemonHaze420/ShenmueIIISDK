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

// BlueprintGeneratedClass BP_TalkProcess_Bet.BP_TalkProcess_Bet_C
// 0x0018 (0x0050 - 0x0038)
class UBP_TalkProcess_Bet_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UBetTask*                                    BetTask;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_BetMoneyManager_C*                       BetManager;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_Bet.BP_TalkProcess_Bet_C");
		return ptr;
	}


	void CheckStreetFight(bool* Success, int* Price);
	void OnBetCancel();
	void OnBet();
	void WasEnteredBet();
	void CreateBetUI(int bet, int maxbet, int FluctuationValue, TEnumAsByte<EN_ValueType> Type);
	void Finalize();
	void Activate();
	void ExecuteUbergraph_BP_TalkProcess_Bet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
