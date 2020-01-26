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

// BlueprintGeneratedClass BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C
// 0x0020 (0x0110 - 0x00F0)
class UBPC_MIniGame_CW_GameScore_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                TotalPoint;                                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<struct FST_ChopWoodReward>                  RewardTable;                                              // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C");
		return ptr;
	}


	void GetRewardPrice(int WoodNumber, int* Price);
	void ExecuteUbergraph_BPC_MIniGame_CW_GameScore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
