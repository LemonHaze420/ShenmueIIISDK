
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

// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.CalculateLengthOverrideAlpha
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_DoorCameraControl_C::CalculateLengthOverrideAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.CalculateLengthOverrideAlpha");

	UBPC_DoorCameraControl_C_CalculateLengthOverrideAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3Character_C*       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::SetCharacter(class ABP_S3Character_C* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.SetCharacter");

	UBPC_DoorCameraControl_C_SetCharacter_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.CalculateSpringArmLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::CalculateSpringArmLength(float* Length, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.CalculateSpringArmLength");

	UBPC_DoorCameraControl_C_CalculateSpringArmLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.RegisterDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::RegisterDoor(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.RegisterDoor");

	UBPC_DoorCameraControl_C_RegisterDoor_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.StartDoorInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Gimmick_OpenDoor_Template_C* Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::StartDoorInteract(class ABP_Gimmick_OpenDoor_Template_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.StartDoorInteract");

	UBPC_DoorCameraControl_C_StartDoorInteract_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.OnDoorEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::OnDoorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.OnDoorEndPlay");

	UBPC_DoorCameraControl_C_OnDoorEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ReceiveEndPlay");

	UBPC_DoorCameraControl_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.OnDoorAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UBPC_DoorCameraControl_C::OnDoorAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.OnDoorAnimFinish");

	UBPC_DoorCameraControl_C_OnDoorAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ReceiveTick");

	UBPC_DoorCameraControl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.StartInteraction
// (BlueprintCallable, BlueprintEvent)

void UBPC_DoorCameraControl_C::StartInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.StartInteraction");

	UBPC_DoorCameraControl_C_StartInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.EndInteraction
// (BlueprintCallable, BlueprintEvent)

void UBPC_DoorCameraControl_C::EndInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.EndInteraction");

	UBPC_DoorCameraControl_C_EndInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ExecuteUbergraph_BPC_DoorCameraControl
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_DoorCameraControl_C::ExecuteUbergraph_BPC_DoorCameraControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_DoorCameraControl.BPC_DoorCameraControl_C.ExecuteUbergraph_BPC_DoorCameraControl");

	UBPC_DoorCameraControl_C_ExecuteUbergraph_BPC_DoorCameraControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
