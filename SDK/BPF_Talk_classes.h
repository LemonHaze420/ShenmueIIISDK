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

// BlueprintGeneratedClass BPF_Talk.BPF_Talk_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Talk_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Talk.BPF_Talk_C");
		return ptr;
	}


	void IsCharacterReadyAC(class AActor* TargetCharacter, class UObject* __WorldContext, bool* bReady);
	void STATIC_IsCharacterReadyTalk(class AActor* TargetCharacter, class AActor* TalkTo, class UObject* __WorldContext, bool* bReady);
	void getS3TalkEventManager(class UObject* __WorldContext, class ABP_TalkEventManager_C** TalkEventManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
