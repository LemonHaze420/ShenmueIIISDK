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

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.AttachActor
struct ABP_MoveCutsceneRoot_C_AttachActor_Params
{
	class AActor*                                      AttachTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.StopCutScenePlayerByTag
struct ABP_MoveCutsceneRoot_C_StopCutScenePlayerByTag_Params
{
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.StopCutScenePlayer
struct ABP_MoveCutsceneRoot_C_StopCutScenePlayer_Params
{
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.FindCutScenePlayerByTag
struct ABP_MoveCutsceneRoot_C_FindCutScenePlayerByTag_Params
{
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_CutscenePlayer_C*                        CutscenePlayer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.UserConstructionScript
struct ABP_MoveCutsceneRoot_C_UserConstructionScript_Params
{
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ReceiveBeginPlay
struct ABP_MoveCutsceneRoot_C_ReceiveBeginPlay_Params
{
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ResetTransform
struct ABP_MoveCutsceneRoot_C_ResetTransform_Params
{
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.SetVisibleAllCutsceneActors
struct ABP_MoveCutsceneRoot_C_SetVisibleAllCutsceneActors_Params
{
	bool                                               bNewHidden;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.SetInfiniteTransform
struct ABP_MoveCutsceneRoot_C_SetInfiniteTransform_Params
{
};

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ExecuteUbergraph_BP_MoveCutsceneRoot
struct ABP_MoveCutsceneRoot_C_ExecuteUbergraph_BP_MoveCutsceneRoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
