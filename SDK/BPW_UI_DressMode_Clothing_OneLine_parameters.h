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

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.GetIconIndex
struct UBPW_UI_DressMode_Clothing_OneLine_C_GetIconIndex_Params
{
	int                                                IconIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.SetIconIndex
struct UBPW_UI_DressMode_Clothing_OneLine_C_SetIconIndex_Params
{
	int                                                IconIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parts;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EClothPartsType                                    PartsType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.GetText_1
struct UBPW_UI_DressMode_Clothing_OneLine_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.SetText
struct UBPW_UI_DressMode_Clothing_OneLine_C_SetText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.InitIconButton
struct UBPW_UI_DressMode_Clothing_OneLine_C_InitIconButton_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PartsName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3ClothPartsArray                          ClothPartsArray;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.Construct
struct UBPW_UI_DressMode_Clothing_OneLine_C_Construct_Params
{
};

// Function BPW_UI_DressMode_Clothing_OneLine.BPW_UI_DressMode_Clothing_OneLine_C.ExecuteUbergraph_BPW_UI_DressMode_Clothing_OneLine
struct UBPW_UI_DressMode_Clothing_OneLine_C_ExecuteUbergraph_BPW_UI_DressMode_Clothing_OneLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
