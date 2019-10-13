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

// BlueprintGeneratedClass BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C
// 0x0010 (0x00A8 - 0x0098)
class UBTS_PlayerFollow_CheckEndFollow_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	class ABP_NPCLeadManager_C*                        NPC;                                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTS_PlayerFollow_CheckEndFollow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
