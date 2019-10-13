#pragma once

// Name: S3Demo, Version: 0.90.0

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


	void DecideCancel();
	void DecideBet();
	void SelectCancel();
	void SelectMaxBet();
	void SelectBetDown();
	void SelectBetUp();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
