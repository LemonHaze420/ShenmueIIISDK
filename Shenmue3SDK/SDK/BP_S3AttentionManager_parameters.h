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

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.IsContainActor
struct ABP_S3AttentionManager_C_IsContainActor_Params
{
	class AActor*                                      CheckActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Contain;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.CollectActors
struct ABP_S3AttentionManager_C_CollectActors_Params
{
};

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.SetSetting
struct ABP_S3AttentionManager_C_SetSetting_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.UserConstructionScript
struct ABP_S3AttentionManager_C_UserConstructionScript_Params
{
};

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.ReceiveBeginPlay
struct ABP_S3AttentionManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.PlayBGMFromCue
struct ABP_S3AttentionManager_C_PlayBGMFromCue_Params
{
};

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.Event_OnChangePlayerCtrl
struct ABP_S3AttentionManager_C_Event_OnChangePlayerCtrl_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.ExecuteUbergraph_BP_S3AttentionManager
struct ABP_S3AttentionManager_C_ExecuteUbergraph_BP_S3AttentionManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
