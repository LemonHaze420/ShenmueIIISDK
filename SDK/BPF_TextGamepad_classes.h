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

// BlueprintGeneratedClass BPF_TextGamepad.BPF_TextGamepad_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_TextGamepad_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_TextGamepad.BPF_TextGamepad_C");
		return ptr;
	}


	struct FText STATIC_GetPlaftormGamepadShoulderText(TEnumAsByte<EGamepadShoulder> Button, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
