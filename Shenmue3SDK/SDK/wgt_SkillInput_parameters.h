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

// Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderInputImage
struct Uwgt_SkillInput_C_GetShoulderInputImage_Params
{
	TEnumAsByte<EGamepadShoulder>                      Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByShoulderButton
struct Uwgt_SkillInput_C_SetInputByShoulderButton_Params
{
	TEnumAsByte<EGamepadShoulder>                      Modifier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.GetShoulderStyle
struct Uwgt_SkillInput_C_GetShoulderStyle_Params
{
	TEnumAsByte<EShoulderButtonStyle>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.GetModifierInputImage
struct Uwgt_SkillInput_C_GetModifierInputImage_Params
{
	EBTL_HoldInputType                                 Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.SetStyle
struct Uwgt_SkillInput_C_SetStyle_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByModifierButton
struct Uwgt_SkillInput_C_SetInputByModifierButton_Params
{
	EBTL_HoldInputType                                 Modifier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.SetInputByActionName
struct Uwgt_SkillInput_C_SetInputByActionName_Params
{
	struct FName                                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.GetAttackInputImage
struct Uwgt_SkillInput_C_GetAttackInputImage_Params
{
	struct FName                                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Graphic;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillInput.wgt_SkillInput_C.Construct
struct Uwgt_SkillInput_C_Construct_Params
{
};

// Function wgt_SkillInput.wgt_SkillInput_C.ExecuteUbergraph_wgt_SkillInput
struct Uwgt_SkillInput_C_ExecuteUbergraph_wgt_SkillInput_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
