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

// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.SetSpline
struct UBP_State_LookAtLead_Action_C_SetSpline_Params
{
	class USplineComponent*                            spline;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.LookAtSpline
struct UBP_State_LookAtLead_Action_C_LookAtSpline_Params
{
	bool                                               bLookAt;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateExit
struct UBP_State_LookAtLead_Action_C_StateExit_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateEnter
struct UBP_State_LookAtLead_Action_C_StateEnter_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateUpdate
struct UBP_State_LookAtLead_Action_C_StateUpdate_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
