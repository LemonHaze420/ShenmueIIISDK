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

// BlueprintGeneratedClass AIController_AnimalCommon.AIController_AnimalCommon_C
// 0x0008 (0x0440 - 0x0438)
class AAIController_AnimalCommon_C : public AS3AnimalAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIController_AnimalCommon.AIController_AnimalCommon_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_AIController_AnimalCommon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
