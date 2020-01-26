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

// Function BP_ExitActor.BP_ExitActor_C.UserConstructionScript
struct ABP_ExitActor_C_UserConstructionScript_Params
{
};

// Function BP_ExitActor.BP_ExitActor_C.ReceiveBeginPlay
struct ABP_ExitActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExitActor.BP_ExitActor_C.ReceiveEndPlay
struct ABP_ExitActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExitActor.BP_ExitActor_C.SelectDecide
struct ABP_ExitActor_C_SelectDecide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExitActor.BP_ExitActor_C.SelectCancel
struct ABP_ExitActor_C_SelectCancel_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExitActor.BP_ExitActor_C.ExecuteUbergraph_BP_ExitActor
struct ABP_ExitActor_C_ExecuteUbergraph_BP_ExitActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
