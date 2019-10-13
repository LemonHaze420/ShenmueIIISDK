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

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.GetStairsGimmickInfo
struct ABP_NavLink_Stairs_C_GetStairsGimmickInfo_Params
{
	class AActor*                                      StairsGimmick;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ActorTransform;                                           // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     StepDimensions;                                           // (Parm, OutParm, IsPlainOldData)
	int                                                Steps;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Widths;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateStairsInfo
struct ABP_NavLink_Stairs_C_UpdateStairsInfo_Params
{
};

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateDebugStairs
struct ABP_NavLink_Stairs_C_UpdateDebugStairs_Params
{
};

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UserConstructionScript
struct ABP_NavLink_Stairs_C_UserConstructionScript_Params
{
};

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ReceiveSmartLinkReached
struct ABP_NavLink_Stairs_C_ReceiveSmartLinkReached_Params
{
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ExecuteUbergraph_BP_NavLink_Stairs
struct ABP_NavLink_Stairs_C_ExecuteUbergraph_BP_NavLink_Stairs_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
