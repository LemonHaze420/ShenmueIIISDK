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

// Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetArray
struct UBP_GamePadFaceButtonSetAsset_C_GetArray_Params
{
	TArray<class UTexture2D*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_GamePadFaceButtonSetAsset.BP_GamePadFaceButtonSetAsset_C.GetImageByPadIndex
struct UBP_GamePadFaceButtonSetAsset_C_GetImageByPadIndex_Params
{
	ES3PadButtonIndex                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
