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

// BlueprintGeneratedClass BPC_MiniGameTalk.BPC_MiniGameTalk_C
// 0x0033 (0x02E8 - 0x02B5)
class UBPC_MiniGameTalk_C : public UBPC_S3_TalkComponent_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (Transient, DuplicateTransient)
	bool                                               bCanBeMiniGame;                                           // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	TArray<int>                                        NPCManageMiniGameIdTables;                                // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ChangeMemoFlagIDList;                                     // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameTalk.BPC_MiniGameTalk_C");
		return ptr;
	}


	void GetStartTalkActionType(bool bCanTalk, struct FS3DetectActionParam* Params);
	void getActionType(bool Sight, TArray<struct FS3DetectActionParam>* Params);
	void DecideDetectAction(ES3ActionIconType ActionType);
	void ParseTalkScriptData(class US3TalkDataListBase* TalkDataList);
	void FromExternalFunctions_MemoSet();
	void ExecuteUbergraph_BPC_MiniGameTalk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
