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

// BlueprintGeneratedClass BPC_BTL_SparringSetup.BPC_BTL_SparringSetup_C
// 0x0018 (0x0108 - 0x00F0)
class UBPC_BTL_SparringSetup_C : public UActorComponent
{
public:
	float                                              MatchDuration;                                            // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	int                                                NumSimon;                                                 // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PassiveBonus;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActiveBonus;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpMultiplier;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BTL_SparringSetup.BPC_BTL_SparringSetup_C");
		return ptr;
	}


	bool GetShowSimon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
