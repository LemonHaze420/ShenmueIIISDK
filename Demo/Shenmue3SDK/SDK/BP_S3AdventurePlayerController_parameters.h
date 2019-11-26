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

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention_Location
struct ABP_S3AdventurePlayerController_C_StartAttention_Location_Params
{
	struct FVector                                     ForcedLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExitAttention
struct ABP_S3AdventurePlayerController_C_ExitAttention_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StartAttention
struct ABP_S3AdventurePlayerController_C_StartAttention_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ResetZoom
struct ABP_S3AdventurePlayerController_C_ResetZoom_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsLookActor
struct ABP_S3AdventurePlayerController_C_IsLookActor_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Look;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.Init
struct ABP_S3AdventurePlayerController_C_Init_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.CheckAttention
struct ABP_S3AdventurePlayerController_C_CheckAttention_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.IsZoom
struct ABP_S3AdventurePlayerController_C_IsZoom_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.UserConstructionScript
struct ABP_S3AdventurePlayerController_C_UserConstructionScript_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.InpActEvt_SystemPause_K2Node_InputActionEvent_2
struct ABP_S3AdventurePlayerController_C_InpActEvt_SystemPause_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveBeginPlay
struct ABP_S3AdventurePlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.StreamingDebug
struct ABP_S3AdventurePlayerController_C_StreamingDebug_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveTick
struct ABP_S3AdventurePlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ReceiveEndPlay
struct ABP_S3AdventurePlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.OpenHelp
struct ABP_S3AdventurePlayerController_C_OpenHelp_Params
{
};

// Function BP_S3AdventurePlayerController.BP_S3AdventurePlayerController_C.ExecuteUbergraph_BP_S3AdventurePlayerController
struct ABP_S3AdventurePlayerController_C_ExecuteUbergraph_BP_S3AdventurePlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
