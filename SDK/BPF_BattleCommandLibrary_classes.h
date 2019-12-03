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

// BlueprintGeneratedClass BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_BattleCommandLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C");
		return ptr;
	}


	void ChangeBattleCommandLibrary(class UClass* Class, class UObject* __WorldContext);
	class UBTL_CommandLibrary_C* STATIC_GetS3BattleCommandLibrary(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
