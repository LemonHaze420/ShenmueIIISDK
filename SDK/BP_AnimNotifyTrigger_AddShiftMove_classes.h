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

// BlueprintGeneratedClass BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C
// 0x0013 (0x004C - 0x0039)
class UBP_AnimNotifyTrigger_AddShiftMove_C : public UBP_AnimNotifyTrigger_Base_C
{
public:
	unsigned char                                      UnknownData00[0x13];                                      // 0x0039(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C");
		return ptr;
	}


	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
