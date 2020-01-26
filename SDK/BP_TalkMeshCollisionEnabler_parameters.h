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

// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionOnActorsWithIgnore
struct UBP_TalkMeshCollisionEnabler_C_EnableQueryCollisionOnActorsWithIgnore_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ignoreActors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionForTalk
struct UBP_TalkMeshCollisionEnabler_C_EnableQueryCollisionForTalk_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 BackupComponents;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionOnActors
struct UBP_TalkMeshCollisionEnabler_C_EnableQueryCollisionOnActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.RestoreQueryCollision
struct UBP_TalkMeshCollisionEnabler_C_RestoreQueryCollision_Params
{
};

// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollision
struct UBP_TalkMeshCollisionEnabler_C_EnableQueryCollision_Params
{
	class UPrimitiveComponent*                         Primitives;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
