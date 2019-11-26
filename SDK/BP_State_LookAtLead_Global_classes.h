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

// BlueprintGeneratedClass BP_State_LookAtLead_Global.BP_State_LookAtLead_Global_C
// 0x0004 (0x0054 - 0x0050)
class UBP_State_LookAtLead_Global_C : public UBP_State_LookAtLead_C
{
public:
	float                                              AISwitchLookAtTime;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtLead_Global.BP_State_LookAtLead_Global_C");
		return ptr;
	}


	void StateUpdate(float Delta, bool* bDummy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
