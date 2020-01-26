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

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.IsFarCharacter
struct UBPC_CharacterFadeCamera_C_IsFarCharacter_Params
{
	bool                                               Far;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.IsNearCharacter
struct UBPC_CharacterFadeCamera_C_IsNearCharacter_Params
{
	bool                                               bNear;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ReceiveBeginPlay
struct UBPC_CharacterFadeCamera_C_ReceiveBeginPlay_Params
{
};

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.EnabledFadeCheck
struct UBPC_CharacterFadeCamera_C_EnabledFadeCheck_Params
{
};

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.DisabledFadeCheck
struct UBPC_CharacterFadeCamera_C_DisabledFadeCheck_Params
{
};

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ReceiveTick
struct UBPC_CharacterFadeCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ExecuteUbergraph_BPC_CharacterFadeCamera
struct UBPC_CharacterFadeCamera_C_ExecuteUbergraph_BPC_CharacterFadeCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
