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

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.DestroyTriangle
struct ABP_MiniGameChooseSelectTriangle_C_DestroyTriangle_Params
{
};

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.SetLocationAndRotation
struct ABP_MiniGameChooseSelectTriangle_C_SetLocationAndRotation_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.UpdateVisible
struct ABP_MiniGameChooseSelectTriangle_C_UpdateVisible_Params
{
	int                                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.SetMiniGameLastIndex
struct ABP_MiniGameChooseSelectTriangle_C_SetMiniGameLastIndex_Params
{
	int                                                MiniGameLastIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.UserConstructionScript
struct ABP_MiniGameChooseSelectTriangle_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ReceiveBeginPlay
struct ABP_MiniGameChooseSelectTriangle_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ReceiveEndPlay
struct ABP_MiniGameChooseSelectTriangle_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ExecuteUbergraph_BP_MiniGameChooseSelectTriangle
struct ABP_MiniGameChooseSelectTriangle_C_ExecuteUbergraph_BP_MiniGameChooseSelectTriangle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
