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

// BlueprintGeneratedClass BP_State_LookAtLead.BP_State_LookAtLead_C
// 0x0008 (0x0050 - 0x0048)
class UBP_State_LookAtLead_C : public UBP_State_LookAtBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtLead.BP_State_LookAtLead_C");
		return ptr;
	}


	void IsInitializeState(bool* bSuccess);
	void StateOnInitialize();
	void ExecuteUbergraph_BP_State_LookAtLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
