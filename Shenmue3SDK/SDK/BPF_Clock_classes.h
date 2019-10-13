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

// BlueprintGeneratedClass BPF_Clock.BPF_Clock_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Clock_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Clock.BPF_Clock_C");
		return ptr;
	}


	ESlateVisibility STATIC_CheckClockVisibility(class UObject* __WorldContext);
	void STATIC_SetClockVisibility(bool Visible, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
