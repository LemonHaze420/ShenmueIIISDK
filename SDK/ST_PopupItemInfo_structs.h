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

// UserDefinedStruct ST_PopupItemInfo.ST_PopupItemInfo
// 0x001A
struct FST_PopupItemInfo
{
	struct FS3GameGift                                 Data_11_3D8090B14B939BC05A67A59E04CA243E;                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              WaitTime_2_E3FD93C34F9A5D43FE58EB9858FE478B;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UniqueId_19_B173BEC846C45B8370579F8E05B9D2DA;             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoClose_22_3221F93D41C999529631B1B40D37E6D4;           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyData_25_08A418124116CA65E6C125ADD7EA2D14;           // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
