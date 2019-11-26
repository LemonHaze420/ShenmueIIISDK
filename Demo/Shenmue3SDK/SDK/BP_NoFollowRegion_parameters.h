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

// Function BP_NoFollowRegion.BP_NoFollowRegion_C.UserConstructionScript
struct ABP_NoFollowRegion_C_UserConstructionScript_Params
{
};

// Function BP_NoFollowRegion.BP_NoFollowRegion_C.ReceiveActorBeginOverlap
struct ABP_NoFollowRegion_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NoFollowRegion.BP_NoFollowRegion_C.ReceiveActorEndOverlap
struct ABP_NoFollowRegion_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NoFollowRegion.BP_NoFollowRegion_C.ExecuteUbergraph_BP_NoFollowRegion
struct ABP_NoFollowRegion_C_ExecuteUbergraph_BP_NoFollowRegion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
