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

// BlueprintGeneratedClass BTS_DisableAdventureHud.BTS_DisableAdventureHud_C
// 0x0008 (0x00A0 - 0x0098)
class UBTS_DisableAdventureHud_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_DisableAdventureHud.BTS_DisableAdventureHud_C");
		return ptr;
	}


	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTS_DisableAdventureHud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
