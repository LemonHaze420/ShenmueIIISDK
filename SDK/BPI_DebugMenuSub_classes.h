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

// BlueprintGeneratedClass BPI_DebugMenuSub.BPI_DebugMenuSub_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_DebugMenuSub_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_DebugMenuSub.BPI_DebugMenuSub_C");
		return ptr;
	}


	void SetInitialFocus();
	void BuildMenu();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
