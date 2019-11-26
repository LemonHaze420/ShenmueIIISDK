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

// BlueprintGeneratedClass BPF_HideActor.BPF_HideActor_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_HideActor_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_HideActor.BPF_HideActor_C");
		return ptr;
	}


	void STATIC_HideActor(class AActor* TargetActor, bool IsHidden, bool EnableCollision, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
