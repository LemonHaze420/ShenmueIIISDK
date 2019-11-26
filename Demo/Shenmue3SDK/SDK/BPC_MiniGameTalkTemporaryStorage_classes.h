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

// BlueprintGeneratedClass BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C
// 0x0024 (0x0114 - 0x00F0)
class UBPC_MiniGameTalkTemporaryStorage_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	int                                                PlayCount;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<E_MiniGameResult>>              MiniGameResult;                                           // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Money;                                                    // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C");
		return ptr;
	}


	void AddAcquiredMoney(int Acquired);
	void GetTotalMoney(int* Money);
	void GetPreGameResult(bool* bSuccess, TEnumAsByte<E_MiniGameResult>* Result);
	void GetTotalNumberOfResult(TEnumAsByte<E_MiniGameResult> Result, int* TotalCount);
	void GetContinuousResultNumber(TEnumAsByte<E_MiniGameResult> Result, int* Count);
	void GetContinuousPlayCount(int* PlayCount);
	void Finalize();
	void Initialize();
	void BindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame);
	void UnbindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame);
	void OnEndMiniGame(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnWinMiniGame(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnLoseMiniGame(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnDrawMiniGame(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnStartMiniGame(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnRestartMiniGame(class ABP_MiniGameBase_C* SelfMiniGame);
	void ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
