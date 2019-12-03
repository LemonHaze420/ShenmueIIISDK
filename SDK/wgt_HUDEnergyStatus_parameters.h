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

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetMinimapMode
struct Uwgt_HUDEnergyStatus_C_SetMinimapMode_Params
{
	bool                                               Minimap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetVisible
struct Uwgt_HUDEnergyStatus_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeOut
struct Uwgt_HUDEnergyStatus_C_FadeOut_Params
{
};

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeIn
struct Uwgt_HUDEnergyStatus_C_FadeIn_Params
{
};

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.Tick
struct Uwgt_HUDEnergyStatus_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.PreConstruct
struct Uwgt_HUDEnergyStatus_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.ExecuteUbergraph_wgt_HUDEnergyStatus
struct Uwgt_HUDEnergyStatus_C_ExecuteUbergraph_wgt_HUDEnergyStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
