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

// Function WBP_QTESimonButton.WBP_QTESimonButton_C.SetButtonImage
struct UWBP_QTESimonButton_C_SetButtonImage_Params
{
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInput
struct UWBP_QTESimonButton_C_PlayInput_Params
{
};

// Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInstruction
struct UWBP_QTESimonButton_C_PlayInstruction_Params
{
};

// Function WBP_QTESimonButton.WBP_QTESimonButton_C.Reset
struct UWBP_QTESimonButton_C_Reset_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
