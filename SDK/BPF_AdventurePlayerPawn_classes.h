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

// BlueprintGeneratedClass BPF_AdventurePlayerPawn.BPF_AdventurePlayerPawn_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_AdventurePlayerPawn_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_AdventurePlayerPawn.BPF_AdventurePlayerPawn_C");
		return ptr;
	}


	class APawn* STATIC_GetAdventurePlayerPawn(class UObject* __WorldContext, bool* IsValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
