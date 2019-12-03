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

// UserDefinedStruct AnimNotifyStateInfo.AnimNotifyStateInfo
// 0x0030
struct FAnimNotifyStateInfo
{
	struct FName                                       NotifyID_18_993803D24DB5D2F039D824876167F2D7;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AffectActorList_22_DFF8DD0C4EE18B03D8DB4593483A3817;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UBP_AnimNotifyState_Base_C*                  NofityStateInstance_29_D9A44A3E41925C4B6A2F09B5DDF86E0C;  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation_38_01EC86814D938B54763C3B9C7D85D7EC;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NotifyDuration_32_751E97D44FF1C9518DCA249EDF9CDF0B;       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainTime_35_E2F3917F48C727A218518AA95F77BC9F;           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
