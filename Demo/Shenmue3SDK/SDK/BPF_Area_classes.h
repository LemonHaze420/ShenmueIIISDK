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

// BlueprintGeneratedClass BPF_Area.BPF_Area_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Area_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Area.BPF_Area_C");
		return ptr;
	}


	void STATIC_getS3AreaLightManager(class UObject* __WorldContext, class US3AreaLightManagerComponent** AreaLightManager);
	void STATIC_getS3AreaManager(class UObject* __WorldContext, class ABP_S3AreaManager_C** BP_S3AreaManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
