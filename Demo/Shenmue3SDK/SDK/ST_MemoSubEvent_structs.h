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

// UserDefinedStruct ST_MemoSubEvent.ST_MemoSubEvent
// 0x0018
struct FST_MemoSubEvent
{
	int                                                SubEventNo_6_29123CAB4186433CAA4AB180F72230CB;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MemoFlg_7_22CAD7854D8C6226A5F9A2BF0158902D;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
