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

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DisableBite
struct ABP_Fising_BiteFish_C_DisableBite_Params
{
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.MoveToTargetInTime
struct ABP_Fising_BiteFish_C_MoveToTargetInTime_Params
{
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.SetTargetLocation
struct ABP_Fising_BiteFish_C_SetTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Output_Get;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UpdateBite
struct ABP_Fising_BiteFish_C_UpdateBite_Params
{
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UserConstructionScript
struct ABP_Fising_BiteFish_C_UserConstructionScript_Params
{
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveTick
struct ABP_Fising_BiteFish_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.Initialize
struct ABP_Fising_BiteFish_C_Initialize_Params
{
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveBeginPlay
struct ABP_Fising_BiteFish_C_ReceiveBeginPlay_Params
{
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DestroyReady
struct ABP_Fising_BiteFish_C_DestroyReady_Params
{
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ExecuteUbergraph_BP_Fising_BiteFish
struct ABP_Fising_BiteFish_C_ExecuteUbergraph_BP_Fising_BiteFish_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.OnPerfectBiteDispacher__DelegateSignature
struct ABP_Fising_BiteFish_C_OnPerfectBiteDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
