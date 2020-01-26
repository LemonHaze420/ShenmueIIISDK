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

// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.PreConstruct
struct Uwgt_ExChangeEffItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.Construct
struct Uwgt_ExChangeEffItem_C_Construct_Params
{
};

// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.Tick
struct Uwgt_ExChangeEffItem_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.ExecuteUbergraph_wgt_ExChangeEffItem
struct Uwgt_ExChangeEffItem_C_ExecuteUbergraph_wgt_ExChangeEffItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
