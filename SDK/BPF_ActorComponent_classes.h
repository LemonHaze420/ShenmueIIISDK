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

// BlueprintGeneratedClass BPF_ActorComponent.BPF_ActorComponent_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_ActorComponent_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ActorComponent.BPF_ActorComponent_C");
		return ptr;
	}


	void STATIC_SafeDestroyAndRelease(class UObject* __WorldContext, class UActorComponent** Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
