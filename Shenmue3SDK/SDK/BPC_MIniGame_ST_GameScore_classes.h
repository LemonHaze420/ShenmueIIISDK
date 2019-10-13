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

// BlueprintGeneratedClass BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C
// 0x0010 (0x0100 - 0x00F0)
class UBPC_MIniGame_ST_GameScore_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                TotalPoint;                                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalSuccess;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C");
		return ptr;
	}


	void Reset();
	void IncrementSuccessCount();
	void AddPoint(int Add, int* Total);
	void ExecuteUbergraph_BPC_MIniGame_ST_GameScore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
