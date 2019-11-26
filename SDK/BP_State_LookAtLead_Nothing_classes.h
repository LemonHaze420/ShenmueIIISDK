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

// BlueprintGeneratedClass BP_State_LookAtLead_Nothing.BP_State_LookAtLead_Nothing_C
// 0x0000 (0x0050 - 0x0050)
class UBP_State_LookAtLead_Nothing_C : public UBP_State_LookAtLead_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtLead_Nothing.BP_State_LookAtLead_Nothing_C");
		return ptr;
	}


	void StateEnter(float Delta, bool* bProcessing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
