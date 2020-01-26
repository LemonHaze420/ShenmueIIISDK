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

// UserDefinedStruct ST_TalkDialogInfo.ST_TalkDialogInfo
// 0x0039
struct FST_TalkDialogInfo
{
	TArray<struct FName>                               MainLabels_14_9218A2094898D4A89C5ABB85E7E3CFC4;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       DecideLabel_4_CF068A4B44473ED72ADB0884AB1FFD2F;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CancelLabel_6_4ABA2CB84609B3A80820B79E6D6A3234;           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3DialogType                                      Type_12_502BB2E14C713EDAB3DA50AB1B07D626;                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify_9_C2744C344C8B8D0A1772828979DD4903;               // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                InputDelayMS_20_B48309B14CB8926BC4A865BA9F8E7FFC;         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_GeneralWindow_Image>             Images_25_780495CA46769EB4E1C967AB781C6B14;               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EN_TalkDialogSEType>                   SoundEffect_29_1F1A8E6A4FF6F8A3ADE43DA71E9056A3;          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
