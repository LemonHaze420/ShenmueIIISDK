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

// UserDefinedStruct ST_MainFlowMessageControl.ST_MainFlowMessageControl
// 0x0020
struct FST_MainFlowMessageControl
{
	int                                                Destination_ID_2_3737B4E64DC62AFC5090B896F655F966;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Message_5_2D04B45B40E49BEE6AF87785CCEA4395;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      Sender_11_C62B442444EA9552052777990580CD26;               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
