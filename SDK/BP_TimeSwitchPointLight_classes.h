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

// BlueprintGeneratedClass BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C
// 0x0070 (0x0420 - 0x03B0)
class ABP_TimeSwitchPointLight_C : public AS3TimeSwitchPointLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x68];                                      // 0x03B8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
