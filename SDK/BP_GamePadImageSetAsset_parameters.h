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

// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSetNoDefault
struct UBP_GamePadImageSetAsset_C_GetFaceButtonImageSetNoDefault_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             SET;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetShoulderImageSet
struct UBP_GamePadImageSetAsset_C_GetShoulderImageSet_Params
{
	TEnumAsByte<EShoulderButtonStyle>                  Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadShoulderSetAsset_C*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetDPadImageSet
struct UBP_GamePadImageSetAsset_C_GetDPadImageSet_Params
{
	TEnumAsByte<EDpadButtonImageStyle>                 Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             SET;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSet
struct UBP_GamePadImageSetAsset_C_GetFaceButtonImageSet_Params
{
	TEnumAsByte<EFaceButtonImageStyle>                 Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GamePadFaceButtonSetAsset_C*             SET;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
