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

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisiblity_Impl
struct ABP_HUDEnergyStatusManager_C_UpdateVisiblity_Impl_Params
{
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetOverrideEnableRequestCounter
struct ABP_HUDEnergyStatusManager_C_GetOverrideEnableRequestCounter_Params
{
	class URequestCounter_C*                           DisableRequestCounter;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ShouldBeVisible
struct ABP_HUDEnergyStatusManager_C_ShouldBeVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetDisableRequestCounter
struct ABP_HUDEnergyStatusManager_C_GetDisableRequestCounter_Params
{
	class URequestCounter_C*                           DisableRequestCounter;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UserConstructionScript
struct ABP_HUDEnergyStatusManager_C_UserConstructionScript_Params
{
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveBeginPlay
struct ABP_HUDEnergyStatusManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveEndPlay
struct ABP_HUDEnergyStatusManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisibility
struct ABP_HUDEnergyStatusManager_C_UpdateVisibility_Params
{
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveTick
struct ABP_HUDEnergyStatusManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.OnMinimapValidityChange
struct ABP_HUDEnergyStatusManager_C_OnMinimapValidityChange_Params
{
	bool                                               bIsValid;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.CheckPlayerInBuilding
struct ABP_HUDEnergyStatusManager_C_CheckPlayerInBuilding_Params
{
};

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ExecuteUbergraph_BP_HUDEnergyStatusManager
struct ABP_HUDEnergyStatusManager_C_ExecuteUbergraph_BP_HUDEnergyStatusManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
