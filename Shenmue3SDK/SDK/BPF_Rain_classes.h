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

// BlueprintGeneratedClass BPF_Rain.BPF_Rain_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Rain_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Rain.BPF_Rain_C");
		return ptr;
	}


	void STATIC_IsApplyWetness(class AActor* Actor, class UObject* __WorldContext, bool* Apply);
	void STATIC_ApplyMeshWetness(class USkeletalMeshComponent* Component, float Wetness, class UObject* __WorldContext);
	void STATIC_GetPlayerWetness(class UObject* __WorldContext, float* Wetness);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
