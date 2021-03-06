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


	class US3WetnessComponent* STATIC_GetPlayerWetnessComponent(class UObject* __WorldContext);
	void STATIC_ResetPlayerWetness(class UObject* __WorldContext);
	void STATIC_IsApplyWetness(class AActor* Actor, class UObject* __WorldContext, bool* Apply);
	void STATIC_ApplyMeshWetness(class USkeletalMeshComponent* Component, float Wetness, class UObject* __WorldContext);
	void STATIC_GetPlayerWetness(class UObject* __WorldContext, float* Wetness);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
