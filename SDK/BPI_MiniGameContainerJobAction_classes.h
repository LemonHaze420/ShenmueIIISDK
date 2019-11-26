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

// BlueprintGeneratedClass BPI_MiniGameContainerJobAction.BPI_MiniGameContainerJobAction_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_MiniGameContainerJobAction_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MiniGameContainerJobAction.BPI_MiniGameContainerJobAction_C");
		return ptr;
	}


	void ContainerAction(bool Enabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
