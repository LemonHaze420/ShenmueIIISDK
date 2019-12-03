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

// BlueprintGeneratedClass BP_AnimNotifyState_Momentum.BP_AnimNotifyState_Momentum_C
// 0x0007 (0x0038 - 0x0031)
class UBP_AnimNotifyState_Momentum_C : public UBP_AnimNotifyState_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              RotateLimitRatio;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_Momentum.BP_AnimNotifyState_Momentum_C");
		return ptr;
	}


	struct FString STATIC_GetNotifyName();
	void GetNotifyID(struct FName* NotifyID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
