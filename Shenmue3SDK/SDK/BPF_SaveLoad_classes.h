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

// BlueprintGeneratedClass BPF_SaveLoad.BPF_SaveLoad_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_SaveLoad_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_SaveLoad.BPF_SaveLoad_C");
		return ptr;
	}


	void STATIC_GetS3SaveLoadManager(class UObject* __WorldContext, class UBP_S3SaveLoadManager_C** newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
