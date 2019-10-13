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

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.IsInputEnabled
struct UBPC_AdventureMouseControl_C_IsInputEnabled_Params
{
	bool                                               InputEnabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.TickSoftwareCursor
struct UBPC_AdventureMouseControl_C_TickSoftwareCursor_Params
{
	struct FVector2D                                   MoveAxii;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               JoystickOn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.EnableVirtualJoystick
struct UBPC_AdventureMouseControl_C_EnableVirtualJoystick_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveEndPlay
struct UBPC_AdventureMouseControl_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveBeginPlay
struct UBPC_AdventureMouseControl_C_ReceiveBeginPlay_Params
{
};

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ExecuteUbergraph_BPC_AdventureMouseControl
struct UBPC_AdventureMouseControl_C_ExecuteUbergraph_BPC_AdventureMouseControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
