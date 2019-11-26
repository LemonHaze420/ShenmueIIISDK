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

// Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetButtonSelected
struct UBPI_S3CategoryButtonWidget_C_SetButtonSelected_Params
{
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetCursorEnabled
struct UBPI_S3CategoryButtonWidget_C_SetCursorEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetText
struct UBPI_S3CategoryButtonWidget_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
