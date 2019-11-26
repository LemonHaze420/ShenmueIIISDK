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

// Function BP_S3AtomSound.BP_S3AtomSound_C.SetLanguageSelector
struct ABP_S3AtomSound_C_SetLanguageSelector_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.SetSystemVolume
struct ABP_S3AtomSound_C_SetSystemVolume_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.Stop
struct ABP_S3AtomSound_C_Stop_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.PlayOrActivate
struct ABP_S3AtomSound_C_PlayOrActivate_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.SetDisableSound
struct ABP_S3AtomSound_C_SetDisableSound_Params
{
	bool                                               Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.IsDisable
struct ABP_S3AtomSound_C_IsDisable_Params
{
	bool                                               Disabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.PermitPlay
struct ABP_S3AtomSound_C_PermitPlay_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.SetGameTimeSelector
struct ABP_S3AtomSound_C_SetGameTimeSelector_Params
{
	bool                                               Change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.Replay
struct ABP_S3AtomSound_C_Replay_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.SetWeatherSelector
struct ABP_S3AtomSound_C_SetWeatherSelector_Params
{
	bool                                               Bind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.SetSelectorLabel
struct ABP_S3AtomSound_C_SetSelectorLabel_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.UserConstructionScript
struct ABP_S3AtomSound_C_UserConstructionScript_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.ChangeWeather
struct ABP_S3AtomSound_C_ChangeWeather_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveTick
struct ABP_S3AtomSound_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveBeginPlay
struct ABP_S3AtomSound_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveEndPlay
struct ABP_S3AtomSound_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSound.BP_S3AtomSound_C.ExecuteUbergraph_BP_S3AtomSound
struct ABP_S3AtomSound_C_ExecuteUbergraph_BP_S3AtomSound_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
