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

// Function wgt_AddressPage_1.wgt_AddressPage_0_C.Construct
struct Uwgt_AddressPage_0_C_Construct_Params
{
};

// Function wgt_AddressPage_1.wgt_AddressPage_0_C.PushButton
struct Uwgt_AddressPage_0_C_PushButton_Params
{
	struct FVector2D                                   positiopn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function wgt_AddressPage_1.wgt_AddressPage_0_C.SetPageIndex
struct Uwgt_AddressPage_0_C_SetPageIndex_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_AddressPage_1.wgt_AddressPage_0_C.ExecuteUbergraph_wgt_AddressPage_1
struct Uwgt_AddressPage_0_C_ExecuteUbergraph_wgt_AddressPage_1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
