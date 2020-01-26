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

// BlueprintGeneratedClass BPF_Adventure_HUD.BPF_Adventure_HUD_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Adventure_HUD_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Adventure_HUD.BPF_Adventure_HUD_C");
		return ptr;
	}


	void STATIC_getS3AdventureHud(class UObject* __WorldContext, class ABP_S3AdventureHUD_C** AdventureHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
