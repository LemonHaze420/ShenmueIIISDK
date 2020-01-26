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

// BlueprintGeneratedClass BPC_MiniGameJobResult.BPC_MiniGameJobResult_C
// 0x0028 (0x0118 - 0x00F0)
class UBPC_MiniGameJobResult_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UWBP_MiniGame_JobResult_C*                   RefWidget;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                ResultStep;                                               // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEndResultDispacher;                                     // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameJobResult.BPC_MiniGameJobResult_C");
		return ptr;
	}


	void Finalize();
	void StartResult(const struct FText& JobTargetOriginalText, const struct FText& JobTargetLocalizeText, const struct FText& EarningsOriginalText, const struct FText& EarningsLocalizeText, int JobTargetNum, int EarningsNum, class UTexture2D* TargetTexture, class USoundAtomCue* JobSE, class USoundAtomCue* ResultSE);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_MiniGameJobResult(int EntryPoint);
	void OnEndResultDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
