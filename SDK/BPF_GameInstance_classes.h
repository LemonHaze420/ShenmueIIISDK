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

// BlueprintGeneratedClass BPF_GameInstance.BPF_GameInstance_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_GameInstance_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_GameInstance.BPF_GameInstance_C");
		return ptr;
	}


	void getS3GameInstance(class UObject* __WorldContext, class UBP_S3GameInstance_C** BP_S3GameInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
