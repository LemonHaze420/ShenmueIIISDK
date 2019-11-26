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

// BlueprintGeneratedClass BPF_Help.BPF_Help_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Help_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Help.BPF_Help_C");
		return ptr;
	}


	void STATIC_GetS3HelpManager(class UObject* __WorldContext, class ABP_S3HelpManager_C** newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
