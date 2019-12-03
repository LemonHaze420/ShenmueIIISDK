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

// BlueprintGeneratedClass BPF_NaviMesh.BPF_NaviMesh_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_NaviMesh_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_NaviMesh.BPF_NaviMesh_C");
		return ptr;
	}


	void GetNavModifierVolumes(class UObject* __WorldContext, TArray<class ANavModifierVolume*>* Volumes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
