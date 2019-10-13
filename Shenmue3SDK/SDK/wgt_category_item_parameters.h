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

// Function wgt_category_item.wgt_category_item_C.Selected
struct Uwgt_category_item_C_Selected_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_category_item.wgt_category_item_C.SetEnabledCursor
struct Uwgt_category_item_C_SetEnabledCursor_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_category_item.wgt_category_item_C.SetName
struct Uwgt_category_item_C_SetName_Params
{
	struct FString                                     name_jp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     name_eng;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FColor                                      str_col;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function wgt_category_item.wgt_category_item_C.Construct
struct Uwgt_category_item_C_Construct_Params
{
};

// Function wgt_category_item.wgt_category_item_C.Tick
struct Uwgt_category_item_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_category_item.wgt_category_item_C.ExecuteUbergraph_wgt_category_item
struct Uwgt_category_item_C_ExecuteUbergraph_wgt_category_item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
