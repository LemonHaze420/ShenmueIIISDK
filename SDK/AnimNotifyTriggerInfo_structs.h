#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct AnimNotifyTriggerInfo.AnimNotifyTriggerInfo
// 0x0020
struct FAnimNotifyTriggerInfo
{
	struct FName                                       NotifyID_18_993803D24DB5D2F039D824876167F2D7;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AffectActorList_22_DFF8DD0C4EE18B03D8DB4593483A3817;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBP_AnimNotifyTrigger_Base_C*                NofityTriggerInstance_31_D9A44A3E41925C4B6A2F09B5DDF86E0C;// 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
