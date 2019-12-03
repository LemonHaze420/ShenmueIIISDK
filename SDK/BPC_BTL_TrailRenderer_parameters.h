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

// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.UpdateTimeDilation
struct UBPC_BTL_TrailRenderer_C_UpdateTimeDilation_Params
{
};

// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.UpdateRenderingState
struct UBPC_BTL_TrailRenderer_C_UpdateRenderingState_Params
{
};

// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ReceiveTick
struct UBPC_BTL_TrailRenderer_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ReceiveBeginPlay
struct UBPC_BTL_TrailRenderer_C_ReceiveBeginPlay_Params
{
};

// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ExecuteUbergraph_BPC_BTL_TrailRenderer
struct UBPC_BTL_TrailRenderer_C_ExecuteUbergraph_BPC_BTL_TrailRenderer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
