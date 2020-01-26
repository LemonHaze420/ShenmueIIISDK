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

// Function LCComponent.LCComponent_C.TryDefaultInit
struct ULCComponent_C_TryDefaultInit_Params
{
};

// Function LCComponent.LCComponent_C.ChangeState
struct ULCComponent_C_ChangeState_Params
{
	TEnumAsByte<ELocomotionState>                      ArgState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCComponent.LCComponent_C.Init
struct ULCComponent_C_Init_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCComponent.LCComponent_C.TickFunc
struct ULCComponent_C_TickFunc_Params
{
	float                                              DeltaSec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCComponent.LCComponent_C.ReceiveBeginPlay
struct ULCComponent_C_ReceiveBeginPlay_Params
{
};

// Function LCComponent.LCComponent_C.ReceiveTick
struct ULCComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LCComponent.LCComponent_C.ExecuteUbergraph_LCComponent
struct ULCComponent_C_ExecuteUbergraph_LCComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
