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

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowEnd
struct UBPC_MiniGameFollowTargetCamera_C_FollowEnd_Params
{
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowStart
struct UBPC_MiniGameFollowTargetCamera_C_FollowStart_Params
{
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraDefaultRelativeTransform
struct UBPC_MiniGameFollowTargetCamera_C_SetCameraDefaultRelativeTransform_Params
{
	struct FTransform                                  trans;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.Update
struct UBPC_MiniGameFollowTargetCamera_C_Update_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveBeginPlay
struct UBPC_MiniGameFollowTargetCamera_C_ReceiveBeginPlay_Params
{
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveTick
struct UBPC_MiniGameFollowTargetCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraFollowTargetActor
struct UBPC_MiniGameFollowTargetCamera_C_SetCameraFollowTargetActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnDestroyTargetActor
struct UBPC_MiniGameFollowTargetCamera_C_OnDestroyTargetActor_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ExecuteUbergraph_BPC_MiniGameFollowTargetCamera
struct UBPC_MiniGameFollowTargetCamera_C_ExecuteUbergraph_BPC_MiniGameFollowTargetCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnReturnDefaultCameraRotation__DelegateSignature
struct UBPC_MiniGameFollowTargetCamera_C_OnReturnDefaultCameraRotation__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
