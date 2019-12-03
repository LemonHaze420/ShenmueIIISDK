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

// BlueprintGeneratedClass BPF_KunfuMinigame.BPF_KunfuMinigame_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_KunfuMinigame_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_KunfuMinigame.BPF_KunfuMinigame_C");
		return ptr;
	}


	void STATIC_BPF_GetAllKunFuKeys_Minigame(class UObject* __WorldContext);
	struct FName BPF_GetKunfuKey_Minigame(TEnumAsByte<E_MiniGame_KungFuType> Type, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
