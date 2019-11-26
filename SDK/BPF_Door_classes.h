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

// BlueprintGeneratedClass BPF_Door.BPF_Door_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Door_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Door.BPF_Door_C");
		return ptr;
	}


	void STATIC_GetDoorManager(class UObject* __WorldContext, class ABP_DoorManager_C** DoorManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
