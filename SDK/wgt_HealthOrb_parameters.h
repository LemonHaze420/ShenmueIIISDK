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

// Function wgt_HealthOrb.wgt_HealthOrb_C.SetFullTex
struct Uwgt_HealthOrb_C_SetFullTex_Params
{
	class UTexture2D*                                  FullTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HealthOrb.wgt_HealthOrb_C.SetFillRatio
struct Uwgt_HealthOrb_C_SetFillRatio_Params
{
	float                                              FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HealthOrb.wgt_HealthOrb_C.SetScaleRatio
struct Uwgt_HealthOrb_C_SetScaleRatio_Params
{
	float                                              ScaleRatio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HealthOrb.wgt_HealthOrb_C.SetUse
struct Uwgt_HealthOrb_C_SetUse_Params
{
	bool                                               Use;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HealthOrb.wgt_HealthOrb_C.UpdateIcon
struct Uwgt_HealthOrb_C_UpdateIcon_Params
{
};

// Function wgt_HealthOrb.wgt_HealthOrb_C.Construct
struct Uwgt_HealthOrb_C_Construct_Params
{
};

// Function wgt_HealthOrb.wgt_HealthOrb_C.ExecuteUbergraph_wgt_HealthOrb
struct Uwgt_HealthOrb_C_ExecuteUbergraph_wgt_HealthOrb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
