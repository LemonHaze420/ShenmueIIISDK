#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.PlaySoundAnimation
struct UBPW_UI_Config_Volume_C_PlaySoundAnimation_Params
{
	bool                                               isPlay;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.SetAppearance
struct UBPW_UI_Config_Volume_C_SetAppearance_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_Config_Volume.BPW_UI_Config_Volume_C.SetValue
struct UBPW_UI_Config_Volume_C_SetValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
