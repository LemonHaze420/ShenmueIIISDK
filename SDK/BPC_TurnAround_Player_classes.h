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

// BlueprintGeneratedClass BPC_TurnAround_Player.BPC_TurnAround_Player_C
// 0x000B (0x0168 - 0x015D)
class UBPC_TurnAround_Player_C : public UBPC_TurnAround_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TurnAround_Player.BPC_TurnAround_Player_C");
		return ptr;
	}


	bool TryPreTalkJump();
	class AActor* STATIC_GetTalkedMinigame();
	void CanTurnAround(bool* bCan);
	void STATIC_ReturnPreTalkRotationActor();
	void STATIC_ReceiveBeginPlay();
	void ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation);
	void STATIC_TurnAroundTickFinish();
	void STATIC_ExecuteUbergraph_BPC_TurnAround_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
