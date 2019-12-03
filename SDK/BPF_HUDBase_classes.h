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

// BlueprintGeneratedClass BPF_HUDBase.BPF_HUDBase_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_HUDBase_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_HUDBase.BPF_HUDBase_C");
		return ptr;
	}


	void BPF_SafeRemovePersistantWidget(class UObject* __WorldContext, class UUserWidget** Widget);
	void getS3HudBase(class UObject* __WorldContext, class ABP_S3HUD_Base_C** BP_S3HUD_Base);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
