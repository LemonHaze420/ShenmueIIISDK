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

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetValidMinimap
struct ABP_MiniMap2DManager_C_SetValidMinimap_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.Update
struct ABP_MiniMap2DManager_C_Update_Params
{
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetBackAlpha
struct ABP_MiniMap2DManager_C_SetBackAlpha_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetBrushAlpha
struct ABP_MiniMap2DManager_C_SetBrushAlpha_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.IsInValidMapRegion
struct ABP_MiniMap2DManager_C_IsInValidMapRegion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.UserConstructionScript
struct ABP_MiniMap2DManager_C_UserConstructionScript_Params
{
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnLoaded_596D289D4B92DE0545173793E979D552
struct ABP_MiniMap2DManager_C_OnLoaded_596D289D4B92DE0545173793E979D552_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnLoaded_596D289D4B92DE0545173793A0671C6E
struct ABP_MiniMap2DManager_C_OnLoaded_596D289D4B92DE0545173793A0671C6E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ReceiveBeginPlay
struct ABP_MiniMap2DManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ReceiveTick
struct ABP_MiniMap2DManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.MessageInvalidMap
struct ABP_MiniMap2DManager_C_MessageInvalidMap_Params
{
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ExecuteUbergraph_BP_MiniMap2DManager
struct ABP_MiniMap2DManager_C_ExecuteUbergraph_BP_MiniMap2DManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnDetermineValid__DelegateSignature
struct ABP_MiniMap2DManager_C_OnDetermineValid__DelegateSignature_Params
{
	bool                                               bIsValid;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
