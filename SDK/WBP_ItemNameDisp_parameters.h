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

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.SetCount
struct UWBP_ItemNameDisp_C_SetCount_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.InitSet
struct UWBP_ItemNameDisp_C_InitSet_Params
{
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.SetIcon
struct UWBP_ItemNameDisp_C_SetIcon_Params
{
	int                                                item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Construct
struct UWBP_ItemNameDisp_C_Construct_Params
{
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Destruct
struct UWBP_ItemNameDisp_C_Destruct_Params
{
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Close
struct UWBP_ItemNameDisp_C_Close_Params
{
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Tick
struct UWBP_ItemNameDisp_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.ExecuteUbergraph_WBP_ItemNameDisp
struct UWBP_ItemNameDisp_C_ExecuteUbergraph_WBP_ItemNameDisp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.OnStartAnmEnd__DelegateSignature
struct UWBP_ItemNameDisp_C_OnStartAnmEnd__DelegateSignature_Params
{
};

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.OnClosedDispatcher__DelegateSignature
struct UWBP_ItemNameDisp_C_OnClosedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
