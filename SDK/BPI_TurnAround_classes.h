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

// BlueprintGeneratedClass BPI_TurnAround.BPI_TurnAround_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TurnAround_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TurnAround.BPI_TurnAround_C");
		return ptr;
	}


	void STATIC_GetTurnAroundComponent(class UBPC_TurnAround_C** Component);
	void STATIC_RemoveTurnAroundComponent(bool* bSuccess);
	void STATIC_AddTurnAroundComponent(class UBPC_TurnAround_C** Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
