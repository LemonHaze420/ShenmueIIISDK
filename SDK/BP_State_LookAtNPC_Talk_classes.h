#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C
// 0x0000 (0x0059 - 0x0059)
class UBP_State_LookAtNPC_Talk_C : public UBP_State_LookAtNPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C");
		return ptr;
	}


	void CheckBody();
	void StateEnter(float Delta, bool* bProcessing);
	void StateExit(float Delta, bool* bProcessing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
