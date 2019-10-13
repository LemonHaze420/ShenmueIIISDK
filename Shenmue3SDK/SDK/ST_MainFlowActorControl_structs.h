#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_MainFlowActorControl.ST_MainFlowActorControl
// 0x0010
struct FST_MainFlowActorControl
{
	unsigned char                                      RenewalCounter_4_DEF3E19146DAE02BD0E58DAC7DCC2693;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      SetActor_8_8E011D424E151BB56E9FF4B76BD231AF;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
