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

// Function BP_BushyRock.BP_BushyRock_C.MakeBushScale
struct ABP_BushyRock_C_MakeBushScale_Params
{
	struct FRandomStream                               Stream;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BushyRock.BP_BushyRock_C.MakeBushRotation
struct ABP_BushyRock_C_MakeBushRotation_Params
{
	struct FRandomStream                               Stream;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BushyRock.BP_BushyRock_C.SetTextComponentValue
struct ABP_BushyRock_C_SetTextComponentValue_Params
{
};

// Function BP_BushyRock.BP_BushyRock_C.CalculateTraceStartAndEnd
struct ABP_BushyRock_C_CalculateTraceStartAndEnd_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, IsPlainOldData)
	float                                              AdjustedRadius;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BushyRock.BP_BushyRock_C.SetBushlineStartTransform
struct ABP_BushyRock_C_SetBushlineStartTransform_Params
{
};

// Function BP_BushyRock.BP_BushyRock_C.SetArrowComponentTransform
struct ABP_BushyRock_C_SetArrowComponentTransform_Params
{
};

// Function BP_BushyRock.BP_BushyRock_C.SetTextComponentTransform
struct ABP_BushyRock_C_SetTextComponentTransform_Params
{
};

// Function BP_BushyRock.BP_BushyRock_C.UserConstructionScript
struct ABP_BushyRock_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
