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

// UserDefinedStruct ST_MainFlowStepControl.ST_MainFlowStepControl
// 0x000A
struct FST_MainFlowStepControl
{
	int                                                ControlFlag_12_9904F9F94EF5372A718E2EA2D91579EB;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubStep_7_993DA5B646E7773A7000C3B5922125A7;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnumStepID_19_5C90163942A16F5CD24CD8A48C598481;           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayableSP_18_C6EBC5624F2FD85CDEEC4894C43B5C61;           // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
