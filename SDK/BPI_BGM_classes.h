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

// BlueprintGeneratedClass BPI_BGM.BPI_BGM_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_BGM_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BGM.BPI_BGM_C");
		return ptr;
	}


	void GetBGM(class USoundAtomCue** BGM);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
