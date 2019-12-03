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

// BlueprintGeneratedClass BP_State_LookAtPlayer_Global.BP_State_LookAtPlayer_Global_C
// 0x0004 (0x004C - 0x0048)
class UBP_State_LookAtPlayer_Global_C : public UBP_State_LookAtPlayer_C
{
public:
	float                                              AISwitchLookAtTime;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtPlayer_Global.BP_State_LookAtPlayer_Global_C");
		return ptr;
	}


	void STATIC_StateUpdate(float Delta, bool* bDummy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
