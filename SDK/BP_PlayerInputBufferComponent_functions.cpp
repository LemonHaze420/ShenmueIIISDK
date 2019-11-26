
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

// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.DetermineState_TargetSwitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_PC_State>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_PC_InputRecord> Action                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerInputBufferComponent_C::DetermineState_TargetSwitch(TEnumAsByte<EN_PC_State> State, unsigned char SubState, TEnumAsByte<EN_PC_InputRecord>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.DetermineState_TargetSwitch");

	UBP_PlayerInputBufferComponent_C_DetermineState_TargetSwitch_Params params;
	params.State = State;
	params.SubState = SubState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.DetermineState_Jump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_PC_State>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_PC_InputRecord> Action                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerInputBufferComponent_C::DetermineState_Jump(TEnumAsByte<EN_PC_State> State, unsigned char SubState, TEnumAsByte<EN_PC_InputRecord>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.DetermineState_Jump");

	UBP_PlayerInputBufferComponent_C_DetermineState_Jump_Params params;
	params.State = State;
	params.SubState = SubState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_State>       InPCState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  INPCSubState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerInputBufferComponent_C::Update(TEnumAsByte<EN_PC_State> InPCState, unsigned char INPCSubState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.Update");

	UBP_PlayerInputBufferComponent_C_Update_Params params;
	params.InPCState = InPCState;
	params.INPCSubState = INPCSubState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.OnTargetSelectAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerInputBufferComponent_C::OnTargetSelectAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.OnTargetSelectAction__DelegateSignature");

	UBP_PlayerInputBufferComponent_C_OnTargetSelectAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.OnJumpAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerInputBufferComponent_C::OnJumpAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C.OnJumpAction__DelegateSignature");

	UBP_PlayerInputBufferComponent_C_OnJumpAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
