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

// Function BP_SpawningAttachment.BP_SpawningAttachment_C.GetStaticMeshComp
struct ABP_SpawningAttachment_C_GetStaticMeshComp_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_SpawningAttachment.BP_SpawningAttachment_C.IsMeshVisibility
struct ABP_SpawningAttachment_C_IsMeshVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpawningAttachment.BP_SpawningAttachment_C.UserConstructionScript
struct ABP_SpawningAttachment_C_UserConstructionScript_Params
{
};

// Function BP_SpawningAttachment.BP_SpawningAttachment_C.SetMeshVisibility
struct ABP_SpawningAttachment_C_SetMeshVisibility_Params
{
	bool                                               bEnable;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawningAttachment.BP_SpawningAttachment_C.ExecuteUbergraph_BP_SpawningAttachment
struct ABP_SpawningAttachment_C_ExecuteUbergraph_BP_SpawningAttachment_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
