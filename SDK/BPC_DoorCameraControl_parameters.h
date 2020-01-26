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

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.CalculateLengthOverrideAlpha
struct UBPC_DoorCameraControl_C_CalculateLengthOverrideAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.SetCharacter
struct UBPC_DoorCameraControl_C_SetCharacter_Params
{
	class ABP_S3Character_C*                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.CalculateSpringArmLength
struct UBPC_DoorCameraControl_C_CalculateSpringArmLength_Params
{
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.RegisterDoor
struct UBPC_DoorCameraControl_C_RegisterDoor_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.StartDoorInteract
struct UBPC_DoorCameraControl_C_StartDoorInteract_Params
{
	class ABP_Gimmick_OpenDoor_Template_C*             Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.OnDoorEndPlay
struct UBPC_DoorCameraControl_C_OnDoorEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ReceiveEndPlay
struct UBPC_DoorCameraControl_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.OnDoorAnimFinish
struct UBPC_DoorCameraControl_C_OnDoorAnimFinish_Params
{
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ReceiveTick
struct UBPC_DoorCameraControl_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.StartInteraction
struct UBPC_DoorCameraControl_C_StartInteraction_Params
{
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.EndInteraction
struct UBPC_DoorCameraControl_C_EndInteraction_Params
{
};

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ExecuteUbergraph_BPC_DoorCameraControl
struct UBPC_DoorCameraControl_C_ExecuteUbergraph_BPC_DoorCameraControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
