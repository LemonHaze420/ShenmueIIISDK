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

// UserDefinedStruct BTL_TrailEffectInfo.BTL_TrailEffectInfo
// 0x0020
struct FBTL_TrailEffectInfo
{
	struct FName                                       FirstSocket_2_BAE4294E4D61715558C6809769F538F5;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondSocket_4_1634D58846516D43AAF8429DD04DAC2E;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width_7_450A8C254C71675D0EF77284B34E9BFA;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBattleAttackCollision>                AttackBox_14_ED1EFC5C46A74B318B3067B563957CA3;            // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Active_17_8C0F89E94CC6C9A8C69AC6B64B13F121;               // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleComponent_27_EFE114034424846F18B25FA09F6DA869;    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
