#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetSubtitles
struct UBPW_UI_Config_Row_C_SetSubtitles_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitSubtitles
struct UBPW_UI_Config_Row_C_InitSubtitles_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitTextBlock_3
struct UBPW_UI_Config_Row_C_InitTextBlock_3_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetZoomFinder
struct UBPW_UI_Config_Row_C_SetZoomFinder_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitZoomFinder
struct UBPW_UI_Config_Row_C_InitZoomFinder_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDisable
struct UBPW_UI_Config_Row_C_SetDisable_Params
{
	bool                                               Disabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.AssignDressMode
struct UBPW_UI_Config_Row_C_AssignDressMode_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.GetParam
struct UBPW_UI_Config_Row_C_GetParam_Params
{
	TEnumAsByte<EN_ConfigParam>                        Param;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ParseResolution
struct UBPW_UI_Config_Row_C_ParseResolution_Params
{
	struct FString                                     Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitVibration
struct UBPW_UI_Config_Row_C_InitVibration_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.CheckReLoadTitle
struct UBPW_UI_Config_Row_C_CheckReLoadTitle_Params
{
	bool                                               ReLoadTitle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetHorizontalKey
struct UBPW_UI_Config_Row_C_SetHorizontalKey_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVerticalKey
struct UBPW_UI_Config_Row_C_SetVerticalKey_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDecideKey
struct UBPW_UI_Config_Row_C_SetDecideKey_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ChangeKey
struct UBPW_UI_Config_Row_C_ChangeKey_Params
{
	ES3KeyConfigType                                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDifficulty
struct UBPW_UI_Config_Row_C_SetDifficulty_Params
{
	TEnumAsByte<EBattleDifficulty>                     Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetGamma
struct UBPW_UI_Config_Row_C_SetGamma_Params
{
	float                                              Gamma;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitVsync
struct UBPW_UI_Config_Row_C_InitVsync_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitResolution
struct UBPW_UI_Config_Row_C_InitResolution_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.MakeResolutionList
struct UBPW_UI_Config_Row_C_MakeResolutionList_Params
{
	int                                                InBorderIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.GetBorderlessValue
struct UBPW_UI_Config_Row_C_GetBorderlessValue_Params
{
	struct FIntPoint                                   Output;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetGraphic
struct UBPW_UI_Config_Row_C_SetGraphic_Params
{
	ES3GraphicPreset                                   InGraphicPreset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PushRightButton
struct UBPW_UI_Config_Row_C_PushRightButton_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetName
struct UBPW_UI_Config_Row_C_SetName_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetLocale
struct UBPW_UI_Config_Row_C_SetLocale_Params
{
	ES3Locale                                          Locale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVoiceLanguage
struct UBPW_UI_Config_Row_C_SetVoiceLanguage_Params
{
	ES3VoiceLanguage                                   VoiceLanguage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVolume
struct UBPW_UI_Config_Row_C_SetVolume_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.HiddenChoice
struct UBPW_UI_Config_Row_C_HiddenChoice_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PushLeftRightCursor
struct UBPW_UI_Config_Row_C_PushLeftRightCursor_Params
{
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitChoiceList
struct UBPW_UI_Config_Row_C_InitChoiceList_Params
{
	TArray<struct FString>                             ChoiceList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FocusButton
struct UBPW_UI_Config_Row_C_FocusButton_Params
{
	bool                                               IsForcus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnLoaded_5B1B81D442FCD483358473950A373374
struct UBPW_UI_Config_Row_C_OnLoaded_5B1B81D442FCD483358473950A373374_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnLoaded_58EFD7524DB327D54C6CCE8DF255007C
struct UBPW_UI_Config_Row_C_OnLoaded_58EFD7524DB327D54C6CCE8DF255007C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.Construct
struct UBPW_UI_Config_Row_C_Construct_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.Destruct
struct UBPW_UI_Config_Row_C_Destruct_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.BindVoicePlayer
struct UBPW_UI_Config_Row_C_BindVoicePlayer_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FinishPlayer
struct UBPW_UI_Config_Row_C_FinishPlayer_Params
{
	class ABP_S3SoundPlayer_C*                         SoundPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.BindSEPlayer
struct UBPW_UI_Config_Row_C_BindSEPlayer_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnSaveLoad
struct UBPW_UI_Config_Row_C_OnSaveLoad_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FinishSaveLoad
struct UBPW_UI_Config_Row_C_FinishSaveLoad_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SelectTitleBack
struct UBPW_UI_Config_Row_C_SelectTitleBack_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.DecideTitleBack
struct UBPW_UI_Config_Row_C_DecideTitleBack_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.CancelTitleBack
struct UBPW_UI_Config_Row_C_CancelTitleBack_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.TransitionTitle
struct UBPW_UI_Config_Row_C_TransitionTitle_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PlayTestVoice
struct UBPW_UI_Config_Row_C_PlayTestVoice_Params
{
};

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ExecuteUbergraph_BPW_UI_Config_Row
struct UBPW_UI_Config_Row_C_ExecuteUbergraph_BPW_UI_Config_Row_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
