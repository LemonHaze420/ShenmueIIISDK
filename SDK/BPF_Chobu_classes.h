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

// BlueprintGeneratedClass BPF_Chobu.BPF_Chobu_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Chobu_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Chobu.BPF_Chobu_C");
		return ptr;
	}


	void STATIC_SetEnableRyosyaSofaCollision(bool Enable, class UObject* __WorldContext);
	void STATIC_GetChobuNightCutsceneId(class UObject* __WorldContext, struct FName* ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
