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

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetMapCenterLocation
struct UWBP_MiniMap2D_C_GetMapCenterLocation_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetPlayerCharYaw
struct UWBP_MiniMap2D_C_GetPlayerCharYaw_Params
{
	float                                              ReturnYaw;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.IsFollowPlayerCharMode
struct UWBP_MiniMap2D_C_IsFollowPlayerCharMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetTargetYaw
struct UWBP_MiniMap2D_C_GetTargetYaw_Params
{
	float                                              ReturnYaw;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapMaskTexture
struct UWBP_MiniMap2D_C_SetMinimapMaskTexture_Params
{
	class UTexture*                                    Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.ZoomMinimap
struct UWBP_MiniMap2D_C_ZoomMinimap_Params
{
	bool                                               Zoom;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapTexture
struct UWBP_MiniMap2D_C_SetMinimapTexture_Params
{
	class UTexture*                                    newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.Initialize
struct UWBP_MiniMap2D_C_Initialize_Params
{
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.UpdateMiniMap
struct UWBP_MiniMap2D_C_UpdateMiniMap_Params
{
};

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.FadeMinimap
struct UWBP_MiniMap2D_C_FadeMinimap_Params
{
	bool                                               IsHidden;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
