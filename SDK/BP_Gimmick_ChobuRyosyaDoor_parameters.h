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

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.GetTargetStreamingLevel
struct ABP_Gimmick_ChobuRyosyaDoor_C_GetTargetStreamingLevel_Params
{
	class ULevelStreaming*                             Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.UserConstructionScript
struct ABP_Gimmick_ChobuRyosyaDoor_C_UserConstructionScript_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.ReceiveBeginPlay
struct ABP_Gimmick_ChobuRyosyaDoor_C_ReceiveBeginPlay_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.FinishAdjustPosition
struct ABP_Gimmick_ChobuRyosyaDoor_C_FinishAdjustPosition_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.CallNotifyEvent
struct ABP_Gimmick_ChobuRyosyaDoor_C_CallNotifyEvent_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.FinishLevelLoaded
struct ABP_Gimmick_ChobuRyosyaDoor_C_FinishLevelLoaded_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.CallEventComplete
struct ABP_Gimmick_ChobuRyosyaDoor_C_CallEventComplete_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.FinishLoadLevel
struct ABP_Gimmick_ChobuRyosyaDoor_C_FinishLoadLevel_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.FinishFadeOut
struct ABP_Gimmick_ChobuRyosyaDoor_C_FinishFadeOut_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.ReceiveSmartLinkReached
struct ABP_Gimmick_ChobuRyosyaDoor_C_ReceiveSmartLinkReached_Params
{
	class AActor*                                      Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.FinishLoadLevelGameMode
struct ABP_Gimmick_ChobuRyosyaDoor_C_FinishLoadLevelGameMode_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.StartCutscene
struct ABP_Gimmick_ChobuRyosyaDoor_C_StartCutscene_Params
{
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.ReceiveEndPlay
struct ABP_Gimmick_ChobuRyosyaDoor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_ChobuRyosyaDoor.BP_Gimmick_ChobuRyosyaDoor_C.ExecuteUbergraph_BP_Gimmick_ChobuRyosyaDoor
struct ABP_Gimmick_ChobuRyosyaDoor_C_ExecuteUbergraph_BP_Gimmick_ChobuRyosyaDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
