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

// BlueprintGeneratedClass BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C
// 0x0038 (0x03E8 - 0x03B0)
class ABP_TimeSwitchSpotLight_C : public AS3TimeSwitchSpotLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C");
		return ptr;
	}


	void isLightOnTimezone(bool* Light);
	void UserConstructionScript();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
