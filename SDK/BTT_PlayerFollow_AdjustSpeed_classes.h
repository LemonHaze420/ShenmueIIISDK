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

// BlueprintGeneratedClass BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C
// 0x0008 (0x00D0 - 0x00C8)
class UBTT_PlayerFollow_AdjustSpeed_C : public UBTT_PlayerFollow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void STATIC_ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ExecuteUbergraph_BTT_PlayerFollow_AdjustSpeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
