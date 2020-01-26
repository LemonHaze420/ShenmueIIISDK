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

// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.SetNameAndPrice
struct UBPW_UI_RentalButton_C_SetNameAndPrice_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.SelectButton
struct UBPW_UI_RentalButton_C_SelectButton_Params
{
	bool                                               Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.FocusButton
struct UBPW_UI_RentalButton_C_FocusButton_Params
{
	bool                                               Focus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.Construct
struct UBPW_UI_RentalButton_C_Construct_Params
{
};

// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.ExecuteUbergraph_BPW_UI_RentalButton
struct UBPW_UI_RentalButton_C_ExecuteUbergraph_BPW_UI_RentalButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
