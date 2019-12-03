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

// BlueprintGeneratedClass BPF_BRallyNative.BPF_BRallyNative_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_BRallyNative_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_BRallyNative.BPF_BRallyNative_C");
		return ptr;
	}


	bool BPF_IsBattleRallyGamemode(class UObject* __WorldContext);
	class US3_BRallyAwardSystem* BPF_GetBRallyAwardComponent(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
