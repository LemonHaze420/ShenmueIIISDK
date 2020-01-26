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

// Function BP_FlareObject.BP_FlareObject_C.InitiateFlares
struct ABP_FlareObject_C_InitiateFlares_Params
{
};

// Function BP_FlareObject.BP_FlareObject_C.UpdateFlareVisibility
struct ABP_FlareObject_C_UpdateFlareVisibility_Params
{
};

// Function BP_FlareObject.BP_FlareObject_C.UserConstructionScript
struct ABP_FlareObject_C_UserConstructionScript_Params
{
};

// Function BP_FlareObject.BP_FlareObject_C.ReceiveBeginPlay
struct ABP_FlareObject_C_ReceiveBeginPlay_Params
{
};

// Function BP_FlareObject.BP_FlareObject_C.ReceiveTick
struct ABP_FlareObject_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlareObject.BP_FlareObject_C.ExecuteUbergraph_BP_FlareObject
struct ABP_FlareObject_C_ExecuteUbergraph_BP_FlareObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
