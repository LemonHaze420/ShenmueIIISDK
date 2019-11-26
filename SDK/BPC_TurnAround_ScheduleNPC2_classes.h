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

// BlueprintGeneratedClass BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C
// 0x000B (0x0168 - 0x015D)
class UBPC_TurnAround_ScheduleNPC2_C : public UBPC_TurnAround_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C");
		return ptr;
	}


	void CanTurnAround(bool* bCan);
	void TryPostTeleportTurnaround(bool bTeleported);
	void ExecuteUbergraph_BPC_TurnAround_ScheduleNPC2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
