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

// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.DetermineState_TargetSwitch
struct UBP_PlayerInputBufferComponent_C_DetermineState_TargetSwitch_Params
{
	TEnumAsByte<EN_PC_State>                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_PC_InputRecord>                     Action;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.DetermineState_Jump
struct UBP_PlayerInputBufferComponent_C_DetermineState_Jump_Params
{
	TEnumAsByte<EN_PC_State>                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_PC_InputRecord>                     Action;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.Update
struct UBP_PlayerInputBufferComponent_C_Update_Params
{
	TEnumAsByte<EN_PC_State>                           InPCState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      INPCSubState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.OnTargetSelectAction__DelegateSignature
struct UBP_PlayerInputBufferComponent_C_OnTargetSelectAction__DelegateSignature_Params
{
};

// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.OnJumpAction__DelegateSignature
struct UBP_PlayerInputBufferComponent_C_OnJumpAction__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
