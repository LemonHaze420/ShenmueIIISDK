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

// BlueprintGeneratedClass BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C
// 0x0007 (0x0038 - 0x0031)
class UBP_AnimNotifyState_Invincible_C : public UBP_AnimNotifyState_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C");
		return ptr;
	}


	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
