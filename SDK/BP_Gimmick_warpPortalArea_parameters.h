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

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.GetPortalComponent
struct ABP_Gimmick_warpPortalArea_C_GetPortalComponent_Params
{
	class UBP_Gimmick_warpPortalComp_C*                PortalComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.UserConstructionScript
struct ABP_Gimmick_warpPortalArea_C_UserConstructionScript_Params
{
};

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ReceiveBeginPlay
struct ABP_Gimmick_warpPortalArea_C_ReceiveBeginPlay_Params
{
};

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.onTeleport
struct ABP_Gimmick_warpPortalArea_C_onTeleport_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ExecuteUbergraph_BP_Gimmick_warpPortalArea
struct ABP_Gimmick_warpPortalArea_C_ExecuteUbergraph_BP_Gimmick_warpPortalArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.teleport__DelegateSignature
struct ABP_Gimmick_warpPortalArea_C_teleport__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
