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

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.IsDisable
struct ABP_S3AtomSoundTimer_C_IsDisable_Params
{
	bool                                               Disable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetSelectorLabel
struct ABP_S3AtomSoundTimer_C_SetSelectorLabel_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StopForbid
struct ABP_S3AtomSoundTimer_C_StopForbid_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetSystemVolume
struct ABP_S3AtomSoundTimer_C_SetSystemVolume_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.PermitPlay
struct ABP_S3AtomSoundTimer_C_PermitPlay_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StartPlay
struct ABP_S3AtomSoundTimer_C_StartPlay_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetParam
struct ABP_S3AtomSoundTimer_C_SetParam_Params
{
	struct FS3SoundTimerParam                          newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.UpdateInterval
struct ABP_S3AtomSoundTimer_C_UpdateInterval_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.Initialize
struct ABP_S3AtomSoundTimer_C_Initialize_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StopSound
struct ABP_S3AtomSoundTimer_C_StopSound_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.PlaySound
struct ABP_S3AtomSoundTimer_C_PlaySound_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.CheckInterval
struct ABP_S3AtomSoundTimer_C_CheckInterval_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.CheckStartTime
struct ABP_S3AtomSoundTimer_C_CheckStartTime_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.UserConstructionScript
struct ABP_S3AtomSoundTimer_C_UserConstructionScript_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveBeginPlay
struct ABP_S3AtomSoundTimer_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveTick
struct ABP_S3AtomSoundTimer_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveEndPlay
struct ABP_S3AtomSoundTimer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature
struct ABP_S3AtomSoundTimer_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature
struct ABP_S3AtomSoundTimer_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature_Params
{
};

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ExecuteUbergraph_BP_S3AtomSoundTimer
struct ABP_S3AtomSoundTimer_C_ExecuteUbergraph_BP_S3AtomSoundTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
