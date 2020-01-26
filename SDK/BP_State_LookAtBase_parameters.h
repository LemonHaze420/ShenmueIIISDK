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

// Function BP_State_LookAtBase.BP_State_LookAtBase_C.ResetLookAtParamater
struct UBP_State_LookAtBase_C_ResetLookAtParamater_Params
{
	bool                                               bResetTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtBase.BP_State_LookAtBase_C.GetStateOwner
struct UBP_State_LookAtBase_C_GetStateOwner_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtBase.BP_State_LookAtBase_C.StateOnInitialize
struct UBP_State_LookAtBase_C_StateOnInitialize_Params
{
};

// Function BP_State_LookAtBase.BP_State_LookAtBase_C.ExecuteUbergraph_BP_State_LookAtBase
struct UBP_State_LookAtBase_C_ExecuteUbergraph_BP_State_LookAtBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
