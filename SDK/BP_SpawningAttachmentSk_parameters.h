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

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComp
struct ABP_SpawningAttachmentSk_C_GetSkeletalMeshComp_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.IsMeshVisibility
struct ABP_SpawningAttachmentSk_C_IsMeshVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.GetSkeletalMeshComponent
struct ABP_SpawningAttachmentSk_C_GetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      SkeltalMeshComp;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.UserConstructionScript
struct ABP_SpawningAttachmentSk_C_UserConstructionScript_Params
{
};

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.SetMeshVisibility
struct ABP_SpawningAttachmentSk_C_SetMeshVisibility_Params
{
	bool                                               bEnable;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawningAttachmentSk.BP_SpawningAttachmentSk_C.ExecuteUbergraph_BP_SpawningAttachmentSk
struct ABP_SpawningAttachmentSk_C_ExecuteUbergraph_BP_SpawningAttachmentSk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
