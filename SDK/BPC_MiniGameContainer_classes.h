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

// BlueprintGeneratedClass BPC_MiniGameContainer.BPC_MiniGameContainer_C
// 0x003A (0x012A - 0x00F0)
class UBPC_MiniGameContainer_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                Price;                                                    // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FluctuationValue;                                         // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ScriptOverridePrice;                                      // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GamePlayCount;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GamePlayedNowCount;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameResult>                      GameResult;                                               // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameProcess>                     GameProcess;                                              // 0x010D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	int                                                GameMaxPlayCount;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ScriptOverrideMaxPlayCount;                               // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPC_MiniGameGamble_C*                       GambleMiniGame;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	ES3MiniGameCategory                                Category;                                                 // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                RuleIndex;                                                // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_ValueType>                          ValueType;                                                // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowMoneyPriceWithKS;                                     // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameContainer.BPC_MiniGameContainer_C");
		return ptr;
	}


	void GetGameGamblePrice(int* Price);
	bool IsGambleMiniGame();
	void GetGameGambleSuccessPrice(int* Price);
	void GetGameMaxPrice(int* Price);
	void ResetScriptOverrideMaxPlayCount();
	void GetGameMaxPlayCount(int* MaxPlayCount);
	bool IsPlayMiniGame();
	void RemainingGamePlayCount(int* Result);
	void IncrementGamePlayCount(int* Result);
	void Initialize();
	void ResetScriptOverridePrice();
	void GetGamePrice(int* Price);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_MiniGameContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
