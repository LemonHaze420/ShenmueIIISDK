
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.IsInputEnabled
// (Exec, Native, Event, NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::IsInputEnabled(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.IsInputEnabled");

	UBPC_AdventureMouseControl_C_IsInputEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.TickSoftwareCursor
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               MoveAxii                       (Parm, OutParm, IsPlainOldData)
// bool                           JoystickOn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::STATIC_TickSoftwareCursor(struct FVector2D* MoveAxii, bool* JoystickOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.TickSoftwareCursor");

	UBPC_AdventureMouseControl_C_TickSoftwareCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveAxii != nullptr)
		*MoveAxii = params.MoveAxii;
	if (JoystickOn != nullptr)
		*JoystickOn = params.JoystickOn;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.EnableVirtualJoystick
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::EnableVirtualJoystick(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.EnableVirtualJoystick");

	UBPC_AdventureMouseControl_C_EnableVirtualJoystick_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveEndPlay
// (NetReliable, Exec, Native, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveEndPlay");

	UBPC_AdventureMouseControl_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveBeginPlay
// (Net, Exec, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void UBPC_AdventureMouseControl_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ReceiveBeginPlay");

	UBPC_AdventureMouseControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ExecuteUbergraph_BPC_AdventureMouseControl
// (Native, Event, NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AdventureMouseControl_C::ExecuteUbergraph_BPC_AdventureMouseControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AdventureMouseControl.BPC_AdventureMouseControl_C.ExecuteUbergraph_BPC_AdventureMouseControl");

	UBPC_AdventureMouseControl_C_ExecuteUbergraph_BPC_AdventureMouseControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
