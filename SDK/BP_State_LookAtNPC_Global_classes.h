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

// BlueprintGeneratedClass BP_State_LookAtNPC_Global.BP_State_LookAtNPC_Global_C
// 0x0000 (0x0059 - 0x0059)
class UBP_State_LookAtNPC_Global_C : public UBP_State_LookAtNPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtNPC_Global.BP_State_LookAtNPC_Global_C");
		return ptr;
	}


	void StateUpdate(float Delta, bool* bDummy);
	void CheckNPCLocomationState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
