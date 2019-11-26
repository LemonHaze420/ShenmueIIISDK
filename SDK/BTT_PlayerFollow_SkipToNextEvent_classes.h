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

// BlueprintGeneratedClass BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C
// 0x0015 (0x00DD - 0x00C8)
class UBTT_PlayerFollow_SkipToNextEvent_C : public UBTT_PlayerFollow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (Transient, DuplicateTransient)
	float                                              UnclampedNextDistance;                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClampedNextDistance;                                      // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedFade;                                              // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C");
		return ptr;
	}


	void CalcTeleportLocation(class AActor* Character, class ABP_NPCLeadManager_C* LeaderAI, struct FVector* DestLocation, struct FRotator* DestRotation);
	void CalcNextMoveLocation(class AActor* Character, class ABP_NPCLeadManager_C* LeaderAI, float DeltaSeconds, float Speed, struct FVector* DestLocation, struct FRotator* DestRotation, bool* IsEnd);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void EndFailure();
	void StartPanicTeleport();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_PlayerFollow_SkipToNextEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
