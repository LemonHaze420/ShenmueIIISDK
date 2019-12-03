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
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RemainRange;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShiftTime;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyTrigger_AddShiftMove.BP_AnimNotifyTrigger_AddShiftMove_C");
		return ptr;
	}


	struct FString STATIC_GetNotifyName();
	void STATIC_GetNotifyID(struct FName* NotifyID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
