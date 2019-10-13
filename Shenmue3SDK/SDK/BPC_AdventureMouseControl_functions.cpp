
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.IsInputEnabled
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::IsInputEnabled(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.IsInputEnabled");

	UBPC_AdventureMouseControl_C_IsInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.TickSoftwareCursor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MoveAxii                       (Parm, OutParm, IsPlainOldData)
// bool                           JoystickOn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::TickSoftwareCursor(struct FVector2D* MoveAxii, bool* JoystickOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.TickSoftwareCursor");

	UBPC_AdventureMouseControl_C_TickSoftwareCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveAxii != nullptr)
		*MoveAxii = params.MoveAxii;
	if (JoystickOn != nullptr)
		*JoystickOn = params.JoystickOn;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.EnableVirtualJoystick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::EnableVirtualJoystick(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.EnableVirtualJoystick");

	UBPC_AdventureMouseControl_C_EnableVirtualJoystick_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveEndPlay");

	UBPC_AdventureMouseControl_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_AdventureMouseControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveBeginPlay");

	UBPC_AdventureMouseControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ExecuteUbergraph_BPC_AdventureMouseControl
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::ExecuteUbergraph_BPC_AdventureMouseControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ExecuteUbergraph_BPC_AdventureMouseControl");

	UBPC_AdventureMouseControl_C_ExecuteUbergraph_BPC_AdventureMouseControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
