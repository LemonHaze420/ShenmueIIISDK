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

// BlueprintGeneratedClass BPC_SB_Score.BPC_SB_Score_C
// 0x0020 (0x0110 - 0x00F0)
class UBPC_SB_Score_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                Score;                                                    // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAddScore;                                               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_SB_Score.BPC_SB_Score_C");
		return ptr;
	}


	void GetScore(int* Score);
	void AddScore();
	void ExecuteUbergraph_BPC_SB_Score(int EntryPoint);
	void OnAddScore__DelegateSignature(int GiveScore);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
