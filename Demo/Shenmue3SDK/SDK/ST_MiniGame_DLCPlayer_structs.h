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

// UserDefinedStruct ST_MiniGame_DLCPlayer.ST_MiniGame_DLCPlayer
// 0x0074
struct FST_MiniGame_DLCPlayer
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_MiniGame_DLCPlayer.ST_MiniGame_DLCPlayer.ArmMesh_13_A11F5CDD47EA8131590606BA01725FAC
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_MiniGame_DLCPlayer.ST_MiniGame_DLCPlayer.BodyMesh_10_12ABDA0A4C2C8D517A9993A70CA87214
	struct FVector                                     OtoshidamaBallOffset_5_5A4281C74264F037356D09A48731A015;  // 0x0050(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     KachaFugetsuKihudaOffset_9_5ED9E808457C4D861AFAA99659B9B0A5;// 0x005C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     KachoFugetsuBallOffset_7_EA1D81CB47FAF0A16B7FFA93342E5F2C;// 0x0068(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
