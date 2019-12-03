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

// BlueprintGeneratedClass BTT_SetRandomEQS.BTT_SetRandomEQS_C
// 0x0030 (0x00D0 - 0x00A0)
class UBTT_SetRandomEQS_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      RandomEQSTimes;                                           // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_SetRandomEQS.BTT_SetRandomEQS_C");
		return ptr;
	}


	void STATIC_ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void STATIC_ExecuteUbergraph_BTT_SetRandomEQS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
