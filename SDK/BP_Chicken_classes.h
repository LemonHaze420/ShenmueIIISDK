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

// BlueprintGeneratedClass BP_Chicken.BP_Chicken_C
// 0x0008 (0x0970 - 0x0968)
class ABP_Chicken_C : public ABP_RunAwayAnimal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chicken.BP_Chicken_C");
		return ptr;
	}


	void UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
