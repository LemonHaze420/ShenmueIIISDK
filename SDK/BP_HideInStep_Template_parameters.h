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

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ChangeHide_Owner
struct UBP_HideInStep_Template_C_ChangeHide_Owner_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.CheckStep_MinMax
struct UBP_HideInStep_Template_C_CheckStep_MinMax_Params
{
	int                                                MinStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.LocalEvt_ChangeStep
struct UBP_HideInStep_Template_C_LocalEvt_ChangeStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveTick
struct UBP_HideInStep_Template_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveBeginPlay
struct UBP_HideInStep_Template_C_ReceiveBeginPlay_Params
{
};

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveEndPlay
struct UBP_HideInStep_Template_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.StartIn
struct UBP_HideInStep_Template_C_StartIn_Params
{
};

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ExecuteUbergraph_BP_HideInStep_Template
struct UBP_HideInStep_Template_C_ExecuteUbergraph_BP_HideInStep_Template_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
