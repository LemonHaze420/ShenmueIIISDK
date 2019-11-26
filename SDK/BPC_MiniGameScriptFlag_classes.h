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

// BlueprintGeneratedClass BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C
// 0x0008 (0x00F8 - 0x00F0)
class UBPC_MiniGameScriptFlag_C : public UActorComponent
{
public:
	int                                                ScoreIndex;                                               // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResultNumIndex;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C");
		return ptr;
	}


	void GetGlobalFlagMiniGameResultNum(int* Result);
	void SetGlobalFlagMiniGameResultNum(int Result);
	void GetGlobalFlagMiniGameScore(int* Score);
	void SetGlobalFlagMiniGameScore(int Score);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
