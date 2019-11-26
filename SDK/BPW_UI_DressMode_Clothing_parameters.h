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

// Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.ChangeRow
struct UBPW_UI_DressMode_Clothing_C_ChangeRow_Params
{
	int                                                RowIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.InitClothingLine
struct UBPW_UI_DressMode_Clothing_C_InitClothingLine_Params
{
	TArray<int>                                        SelectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       MeshName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_ClothingCategory                        Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<EClothPartsType, struct FS3ClothPartsArray>   PartsArray;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_UI_DressMode_Clothing.BPW_UI_DressMode_Clothing_C.InitIconButton
struct UBPW_UI_DressMode_Clothing_C_InitIconButton_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
