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

// BlueprintGeneratedClass BPI_SelectBet.BPI_SelectBet_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_SelectBet_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SelectBet.BPI_SelectBet_C");
		return ptr;
	}


	void STATIC_DecideCancel();
	void STATIC_DecideBet();
	void STATIC_SelectCancel();
	void STATIC_SelectMaxBet();
	void SelectBetDown();
	void SelectBetUp();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
