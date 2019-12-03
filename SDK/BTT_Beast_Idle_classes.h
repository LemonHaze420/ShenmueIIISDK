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

// BlueprintGeneratedClass BTT_Beast_Idle.BTT_Beast_Idle_C
// 0x0048 (0x00E8 - 0x00A0)
class UBTT_Beast_Idle_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	int                                                MovePossibility;                                          // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MoveLocation;                                             // 0x00AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_AnimalBeast_Base_C*                      CachedPawn;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      IsAlerted;                                                // 0x00C0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Beast_Idle.BTT_Beast_Idle_C");
		return ptr;
	}


	void ReceiveAbort(class AActor* OwnerActor);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTT_Beast_Idle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
