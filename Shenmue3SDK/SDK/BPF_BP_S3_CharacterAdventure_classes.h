#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_BP_S3_CharacterAdventure.BPF_BP_S3_CharacterAdventure_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_BP_S3_CharacterAdventure_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_BP_S3_CharacterAdventure.BPF_BP_S3_CharacterAdventure_C");
		return ptr;
	}


	void STATIC_Get_BP_S3_CharacterAdventure(class UObject* __WorldContext, class ABP_S3_Character_Adventure_C** Character, bool* IsValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
