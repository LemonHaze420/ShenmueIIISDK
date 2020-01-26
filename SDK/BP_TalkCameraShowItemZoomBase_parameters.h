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

// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.GetLookTargetSocketLocation
struct ABP_TalkCameraShowItemZoomBase_C_GetLookTargetSocketLocation_Params
{
	struct FName                                       InSocketName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.UserConstructionScript
struct ABP_TalkCameraShowItemZoomBase_C_UserConstructionScript_Params
{
};

// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveBeginPlay
struct ABP_TalkCameraShowItemZoomBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ReceiveTick
struct ABP_TalkCameraShowItemZoomBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C.ExecuteUbergraph_BP_TalkCameraShowItemZoomBase
struct ABP_TalkCameraShowItemZoomBase_C_ExecuteUbergraph_BP_TalkCameraShowItemZoomBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
