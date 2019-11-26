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

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.UpdateLight
struct ABP_SB_SquareLight_C_UpdateLight_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.SetColor
struct ABP_SB_SquareLight_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.UserConstructionScript
struct ABP_SB_SquareLight_C_UserConstructionScript_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__FinishedFunc
struct ABP_SB_SquareLight_C_Timeline_Flash__FinishedFunc_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__UpdateFunc
struct ABP_SB_SquareLight_C_Timeline_Flash__UpdateFunc_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__LightOff__EventFunc
struct ABP_SB_SquareLight_C_Timeline_Flash__LightOff__EventFunc_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Timeline_Flash__LightOn__EventFunc
struct ABP_SB_SquareLight_C_Timeline_Flash__LightOn__EventFunc_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.ReceiveBeginPlay
struct ABP_SB_SquareLight_C_ReceiveBeginPlay_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.Flash
struct ABP_SB_SquareLight_C_Flash_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.AllLightOn
struct ABP_SB_SquareLight_C_AllLightOn_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.AllLightOff
struct ABP_SB_SquareLight_C_AllLightOff_Params
{
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.TargetLightOff
struct ABP_SB_SquareLight_C_TargetLightOff_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_SquareLight.BP_SB_SquareLight_C.ExecuteUbergraph_BP_SB_SquareLight
struct ABP_SB_SquareLight_C_ExecuteUbergraph_BP_SB_SquareLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
