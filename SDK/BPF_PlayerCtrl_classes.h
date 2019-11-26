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

// BlueprintGeneratedClass BPF_PlayerCtrl.BPF_PlayerCtrl_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_PlayerCtrl_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_PlayerCtrl.BPF_PlayerCtrl_C");
		return ptr;
	}


	void STATIC_getS3PlayerCtrl(class UObject* __WorldContext, class APlayerCtrl_C** PlayerCtrl);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
