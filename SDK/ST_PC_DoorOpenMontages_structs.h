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

// UserDefinedStruct ST_PC_DoorOpenMontages.ST_PC_DoorOpenMontages
// 0x0018
struct FST_PC_DoorOpenMontages
{
	TEnumAsByte<EN_DoorOpenType>                       Type_2_BE4FB18E4B3D0E26A41F42A4FDFBD625;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                EnterMontage_6_9E9993E0493F5A7636965BBCEA17BF70;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ExitMontage_8_E0A363FA44AEE12CA0B692B4C4913C06;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
