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

// BlueprintGeneratedClass BPF_Bgm.BPF_Bgm_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Bgm_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Bgm.BPF_Bgm_C");
		return ptr;
	}


	void STATIC_getS3BgmManager(class UObject* __WorldContext, class ABP_S3BgmManager_C** BP_S3BgmManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
