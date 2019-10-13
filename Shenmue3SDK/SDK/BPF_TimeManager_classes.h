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

// BlueprintGeneratedClass BPF_TimeManager.BPF_TimeManager_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_TimeManager_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_TimeManager.BPF_TimeManager_C");
		return ptr;
	}


	void STATIC_getS3GameTimeManager(class UObject* __WorldContext, class ABP_S3WorldTimekeeper_C** BP_S3World_Timekeeper);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
