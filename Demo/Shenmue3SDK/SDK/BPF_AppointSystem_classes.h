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

// BlueprintGeneratedClass BPF_AppointSystem.BPF_AppointSystem_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_AppointSystem_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_AppointSystem.BPF_AppointSystem_C");
		return ptr;
	}


	void STATIC_GetS3AppointSystemManager(class UObject* __WorldContext, class ABP_AppointSystemManager_C** newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
