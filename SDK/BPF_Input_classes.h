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

// BlueprintGeneratedClass BPF_Input.BPF_Input_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Input_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Input.BPF_Input_C");
		return ptr;
	}


	TEnumAsByte<EN_GeneralWindow_Button> STATIC_BPF_PadIndexToGeneralWindowButton(ES3PadButtonIndex Pad, class UObject* __WorldContext);
	ES3PadButtonIndex STATIC_BPF_GetCancelPadIndex(class UObject* __WorldContext);
	ES3PadButtonIndex STATIC_BPF_GetConfirmPadIndex(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
