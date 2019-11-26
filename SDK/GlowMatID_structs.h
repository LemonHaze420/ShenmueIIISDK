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

// UserDefinedStruct GlowMatID.GlowMatID
// 0x0030
struct FGlowMatID
{
	int                                                GlowMatID_58_9A3F388B4E09D536E6AEB2B8D0191698;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UMaterialInstance*                           Material_40_A3DF43004E3CE12913E2BEACDDACE823;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaterialIntensity_51_E129857A420DC9AFC3AAFDBEBE1A1C26;    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GlowColour_52_695374C1473CC3081F58359F52AD7A05;           // 0x0014(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	ES3DayTimeEvent                                    TimeEventFrom_53_7315026D409D7162D25335A1F19D8A0F;        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3DayTimeEvent                                    TimeEventTo_54_A8C003634AF9D6FBF52A9F9284FA5E20;          // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCustomTime_55_8AAEAC704EFCE686666F069D8C3FCEEF;        // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	float                                              CustomFromTime_56_3B060AC046C9566A5A8A7CBE32EA30FF;       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomToTime_57_0940F746445E160229140FBA55F311D0;         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
