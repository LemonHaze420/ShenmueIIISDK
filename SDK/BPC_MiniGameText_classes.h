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

// BlueprintGeneratedClass BPC_MiniGameText.BPC_MiniGameText_C
// 0x0000 (0x00F0 - 0x00F0)
class UBPC_MiniGameText_C : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGameText.BPC_MiniGameText_C");
		return ptr;
	}


	void GetMiniGameText(TEnumAsByte<E_MiniGameText> Enum, struct FString* OutString);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
