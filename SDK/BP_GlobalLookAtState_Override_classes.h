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

// BlueprintGeneratedClass BP_GlobalLookAtState_Override.BP_GlobalLookAtState_Override_C
// 0x0008 (0x0050 - 0x0048)
class UBP_GlobalLookAtState_Override_C : public UBP_State_LookAtBase_C
{
public:
	struct FName                                       State;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GlobalLookAtState_Override.BP_GlobalLookAtState_Override_C");
		return ptr;
	}


	void StateUpdate(float Delta, bool* bDummy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
