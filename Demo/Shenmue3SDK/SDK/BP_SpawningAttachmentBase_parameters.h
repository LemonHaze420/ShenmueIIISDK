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

// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.UserConstructionScript
struct ABP_SpawningAttachmentBase_C_UserConstructionScript_Params
{
};

// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.RequestActionName
struct ABP_SpawningAttachmentBase_C_RequestActionName_Params
{
	struct FName*                                      ActionName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ReceiveTick
struct ABP_SpawningAttachmentBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ExecuteUbergraph_BP_SpawningAttachmentBase
struct ABP_SpawningAttachmentBase_C_ExecuteUbergraph_BP_SpawningAttachmentBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
