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

// BlueprintGeneratedClass BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_AdventurePlayerDialog_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C");
		return ptr;
	}


	void STATIC_BPF_StopAdventurePlayerDialog(class UObject* __WorldContext);
	bool STATIC_BPF_GetAdventurePlayerDialogComponent(class UObject* __WorldContext, class UBPC_CharacterDialogPlayer_C** Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
