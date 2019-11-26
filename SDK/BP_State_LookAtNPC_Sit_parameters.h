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

// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.GetLookAngle
struct UBP_State_LookAtNPC_Sit_C_GetLookAngle_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.GetLookDistance
struct UBP_State_LookAtNPC_Sit_C_GetLookDistance_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateExit
struct UBP_State_LookAtNPC_Sit_C_StateExit_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateUpdate
struct UBP_State_LookAtNPC_Sit_C_StateUpdate_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtNPC_Sit.BP_State_LookAtNPC_Sit_C.StateEnter
struct UBP_State_LookAtNPC_Sit_C_StateEnter_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
