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

// BlueprintGeneratedClass BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C
// 0x0001 (0x0031 - 0x0030)
class UBP_AnimNotifyState_Base_C : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_Base.BP_AnimNotifyState_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
