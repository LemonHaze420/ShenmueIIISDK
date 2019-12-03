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

// Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.UserConstructionScript
struct ABP_NarrowPassageActor_C_UserConstructionScript_Params
{
};

// Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.RequestIgnoreCollision
struct ABP_NarrowPassageActor_C_RequestIgnoreCollision_Params
{
	class AS3Character*                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NarrowPassageActor.BP_NarrowPassageActor_C.ExecuteUbergraph_BP_NarrowPassageActor
struct ABP_NarrowPassageActor_C_ExecuteUbergraph_BP_NarrowPassageActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
