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

// BlueprintGeneratedClass BPF_GameModeBase.BPF_GameModeBase_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_GameModeBase_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_GameModeBase.BPF_GameModeBase_C");
		return ptr;
	}


	void getS3GamemodeBase(class UObject* __WorldContext, class ABP_S3GamemodeBase_C** BP_S3GamemodeBase);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
