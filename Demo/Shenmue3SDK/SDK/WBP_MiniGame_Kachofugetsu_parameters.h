#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetTextures
struct UWBP_MiniGame_Kachofugetsu_C_SetTextures_Params
{
	class UTexture2D*                                  Flower;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Bird;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Wind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Moon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Back;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleImage
struct UWBP_MiniGame_Kachofugetsu_C_SetVisibleImage_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleViewText
struct UWBP_MiniGame_Kachofugetsu_C_SetVisibleViewText_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetViewText
struct UWBP_MiniGame_Kachofugetsu_C_SetViewText_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleButton
struct UWBP_MiniGame_Kachofugetsu_C_SetVisibleButton_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.Construct
struct UWBP_MiniGame_Kachofugetsu_C_Construct_Params
{
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayStartFadeAnim
struct UWBP_MiniGame_Kachofugetsu_C_PlayStartFadeAnim_Params
{
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayEndFadeAnim
struct UWBP_MiniGame_Kachofugetsu_C_PlayEndFadeAnim_Params
{
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayAppearAnim
struct UWBP_MiniGame_Kachofugetsu_C_PlayAppearAnim_Params
{
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMiniGameKFTypeEnum>                   AppearType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.ExecuteUbergraph_WBP_MiniGame_Kachofugetsu
struct UWBP_MiniGame_Kachofugetsu_C_ExecuteUbergraph_WBP_MiniGame_Kachofugetsu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
