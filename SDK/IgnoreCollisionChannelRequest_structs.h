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

// UserDefinedStruct IgnoreCollisionChannelRequest.IgnoreCollisionChannelRequest
// 0x0010
struct FIgnoreCollisionChannelRequest
{
	TEnumAsByte<ECollisionChannel>                     Channel_2_4674E61D479FD4AC9948339A78E2569F;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     Requester_5_3AB97F98444D292C9D5668A5D21D3957;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
