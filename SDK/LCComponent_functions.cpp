
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

// Function LCComponent.LCComponent_C.TryDefaultInit
// (Public, BlueprintCallable, BlueprintEvent)

void ULCComponent_C::TryDefaultInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function LCComponent.LCComponent_C.TryDefaultInit");

	ULCComponent_C_TryDefaultInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCComponent.LCComponent_C.ChangeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELocomotionState>  ArgState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCComponent_C::ChangeState(TEnumAsByte<ELocomotionState> ArgState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCComponent.LCComponent_C.ChangeState");

	ULCComponent_C_ChangeState_Params params;
	params.ArgState = ArgState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCComponent.LCComponent_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCComponent_C::Init(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCComponent.LCComponent_C.Init");

	ULCComponent_C_Init_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCComponent.LCComponent_C.TickFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCComponent_C::TickFunc(float DeltaSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCComponent.LCComponent_C.TickFunc");

	ULCComponent_C_TickFunc_Params params;
	params.DeltaSec = DeltaSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCComponent.LCComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ULCComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LCComponent.LCComponent_C.ReceiveBeginPlay");

	ULCComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCComponent.LCComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCComponent.LCComponent_C.ReceiveTick");

	ULCComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCComponent.LCComponent_C.ExecuteUbergraph_LCComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCComponent_C::ExecuteUbergraph_LCComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCComponent.LCComponent_C.ExecuteUbergraph_LCComponent");

	ULCComponent_C_ExecuteUbergraph_LCComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
