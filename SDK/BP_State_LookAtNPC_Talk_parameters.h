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

// Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.CheckBody
struct UBP_State_LookAtNPC_Talk_C_CheckBody_Params
{
};

// Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.StateEnter
struct UBP_State_LookAtNPC_Talk_C_StateEnter_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.StateExit
struct UBP_State_LookAtNPC_Talk_C_StateExit_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
