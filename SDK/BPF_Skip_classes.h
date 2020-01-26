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

// BlueprintGeneratedClass BPF_Skip.BPF_Skip_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Skip_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Skip.BPF_Skip_C");
		return ptr;
	}


	void STATIC_GetS3SkipController(class UObject* __WorldContext, class ABP_SkipController_C** AsBP_Skip_Controller);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
