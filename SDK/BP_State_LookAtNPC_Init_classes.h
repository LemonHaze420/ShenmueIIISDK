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

// BlueprintGeneratedClass BP_State_LookAtNPC_Init.BP_State_LookAtNPC_Init_C
// 0x0000 (0x0059 - 0x0059)
class UBP_State_LookAtNPC_Init_C : public UBP_State_LookAtNPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtNPC_Init.BP_State_LookAtNPC_Init_C");
		return ptr;
	}


	void STATIC_StateEnter(float Delta, bool* bProcessing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
