#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_ItemOffset.ST_ItemOffset
// 0x0030
struct FST_ItemOffset
{
	struct FRotator                                    ViewItem_Rotator_6_B4807DD0442763B0F241BEAF20521174;      // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ViewItem_Location_9_5C4DF7F8408CA131E43D2ABA87913BC9;     // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     HandJointOffset_12_AA132ED742DB642F17292483ACC90867;      // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CaptureCameraLocation_16_89F226C5416B5F25E52EF09C5F1B1931;// 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
