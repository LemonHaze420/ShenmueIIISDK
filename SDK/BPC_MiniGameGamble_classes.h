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

// BlueprintGeneratedClass BPC_MiniGameGamble.BPC_MiniGameGamble_C
// 0x0004 (0x00F4 - 0x00F0)
class UBPC_MiniGameGamble_C : public UActorComponent
{
public:
	int                                                RefundRate;                                               // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameGamble.BPC_MiniGameGamble_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
