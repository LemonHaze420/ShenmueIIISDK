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

// BlueprintGeneratedClass BPF_UltraDynamicSky.BPF_UltraDynamicSky_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_UltraDynamicSky_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_UltraDynamicSky.BPF_UltraDynamicSky_C");
		return ptr;
	}


	void STATIC_GetUltraDynamicSky(class UObject* __WorldContext, class AUltra_Dynamic_Sky_BP_C** UDS);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
