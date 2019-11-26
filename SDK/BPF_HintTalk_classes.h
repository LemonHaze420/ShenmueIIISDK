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

// BlueprintGeneratedClass BPF_HintTalk.BPF_HintTalk_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_HintTalk_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_HintTalk.BPF_HintTalk_C");
		return ptr;
	}


	void STATIC_GetHintTalkManager(class UObject* __WorldContext, class ABP_HintTalkManager_C** HintTalkManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
