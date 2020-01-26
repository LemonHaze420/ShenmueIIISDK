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

// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.SetButtonImage
struct UWBP_QTESimonButtonEffect_C_SetButtonImage_Params
{
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.PlayInstruction
struct UWBP_QTESimonButtonEffect_C_PlayInstruction_Params
{
};

// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.Reset
struct UWBP_QTESimonButtonEffect_C_Reset_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
