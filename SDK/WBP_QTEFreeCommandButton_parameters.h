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

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayBlink
struct UWBP_QTEFreeCommandButton_C_PlayBlink_Params
{
};

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.SetButtonImage
struct UWBP_QTEFreeCommandButton_C_SetButtonImage_Params
{
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.PlayInput
struct UWBP_QTEFreeCommandButton_C_PlayInput_Params
{
};

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Reset
struct UWBP_QTEFreeCommandButton_C_Reset_Params
{
};

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.Tick
struct UWBP_QTEFreeCommandButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommandButton.WBP_QTEFreeCommandButton_C.ExecuteUbergraph_WBP_QTEFreeCommandButton
struct UWBP_QTEFreeCommandButton_C_ExecuteUbergraph_WBP_QTEFreeCommandButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
