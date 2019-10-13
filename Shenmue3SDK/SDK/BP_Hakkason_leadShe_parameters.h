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

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.CheckLoadSartShe
struct ABP_Hakkason_leadShe_C_CheckLoadSartShe_Params
{
	bool                                               is_load;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SheLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    SheRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.InitSet
struct ABP_Hakkason_leadShe_C_InitSet_Params
{
	struct FDataTableRowHandle                         EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                UseFlagID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoadStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.UserConstructionScript
struct ABP_Hakkason_leadShe_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ReceiveTick
struct ABP_Hakkason_leadShe_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.RenewalActorCount
struct ABP_Hakkason_leadShe_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.KillSheLead
struct ABP_Hakkason_leadShe_C_KillSheLead_Params
{
};

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.StartLeadSHE_Macro
struct ABP_Hakkason_leadShe_C_StartLeadSHE_Macro_Params
{
	bool                                               LoadStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_leadShe.BP_Hakkason_leadShe_C.ExecuteUbergraph_BP_Hakkason_leadShe
struct ABP_Hakkason_leadShe_C_ExecuteUbergraph_BP_Hakkason_leadShe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
