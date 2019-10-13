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

// ScriptStruct NavGrid.NG_Link
// 0x0008
struct FNG_Link
{
	int                                                mDestinationIndex;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mbObstructed;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct NavGrid.NG_Node
// 0x0020
struct FNG_Node
{
	TArray<struct FNG_Link>                            maLinks;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bValidLocation;                                           // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
