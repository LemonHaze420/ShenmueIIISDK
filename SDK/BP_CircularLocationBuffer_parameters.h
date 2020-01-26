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

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.GetMaxDeviationDistSqr
struct UBP_CircularLocationBuffer_C_GetMaxDeviationDistSqr_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Update
struct UBP_CircularLocationBuffer_C_Update_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Initialize
struct UBP_CircularLocationBuffer_C_Initialize_Params
{
	class USceneComponent*                             PositionSource;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Samples;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WindowTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.CompletedWindow
struct UBP_CircularLocationBuffer_C_CompletedWindow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Reset
struct UBP_CircularLocationBuffer_C_Reset_Params
{
};

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.GetAverageLocation
struct UBP_CircularLocationBuffer_C_GetAverageLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.OnWindowCompleted__DelegateSignature
struct UBP_CircularLocationBuffer_C_OnWindowCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
