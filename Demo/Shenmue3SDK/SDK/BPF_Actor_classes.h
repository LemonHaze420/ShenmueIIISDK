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

// BlueprintGeneratedClass BPF_Actor.BPF_Actor_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Actor_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Actor.BPF_Actor_C");
		return ptr;
	}


	void STATIC_SafeDestroyAndRelease(class UObject* __WorldContext, class AActor** Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
