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

// BlueprintGeneratedClass BPF_FirstPerson.BPF_FirstPerson_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_FirstPerson_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_FirstPerson.BPF_FirstPerson_C");
		return ptr;
	}


	void BPF_SetPlayerAndCameraYaw(float Yaw, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
