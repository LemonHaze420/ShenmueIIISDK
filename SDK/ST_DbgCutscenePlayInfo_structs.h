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

// UserDefinedStruct ST_DbgCutscenePlayInfo.ST_DbgCutscenePlayInfo
// 0x0038
struct FST_DbgCutscenePlayInfo
{
	struct FString                                     CutsceneID_8_11ED21F84D579A5AB75F3C9194D2E1E0;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description_7_63D86A174C7CCE7801FA63878228AAD4;           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Category_11_FBDB3C8B484A5362E5F348AE55AD7CFA;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SingleSubLevelName_15_86E1356E436D7F57366D229FF6A55382;   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
