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

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.IsDisable
struct ABP_S3AtomSoundArea_C_IsDisable_Params
{
	bool                                               Disabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.UserConstructionScript
struct ABP_S3AtomSoundArea_C_UserConstructionScript_Params
{
};

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ReceiveBeginPlay
struct ABP_S3AtomSoundArea_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.SetDisableSound
struct ABP_S3AtomSoundArea_C_SetDisableSound_Params
{
	bool*                                              Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature
struct ABP_S3AtomSoundArea_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature_Params
{
};

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature
struct ABP_S3AtomSoundArea_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature_Params
{
};

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ExecuteUbergraph_BP_S3AtomSoundArea
struct ABP_S3AtomSoundArea_C_ExecuteUbergraph_BP_S3AtomSoundArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
