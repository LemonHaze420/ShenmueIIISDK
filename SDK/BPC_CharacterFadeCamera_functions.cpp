
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.IsFarCharacter
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Far                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterFadeCamera_C::IsFarCharacter(bool* Far)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.IsFarCharacter");

	UBPC_CharacterFadeCamera_C_IsFarCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Far != nullptr)
		*Far = params.Far;
}


// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.IsNearCharacter
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNear                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterFadeCamera_C::IsNearCharacter(bool* bNear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.IsNearCharacter");

	UBPC_CharacterFadeCamera_C_IsNearCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNear != nullptr)
		*bNear = params.bNear;
}


// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_CharacterFadeCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ReceiveBeginPlay");

	UBPC_CharacterFadeCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.EnabledFadeCheck
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharacterFadeCamera_C::EnabledFadeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.EnabledFadeCheck");

	UBPC_CharacterFadeCamera_C_EnabledFadeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.DisabledFadeCheck
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharacterFadeCamera_C::DisabledFadeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.DisabledFadeCheck");

	UBPC_CharacterFadeCamera_C_DisabledFadeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterFadeCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ReceiveTick");

	UBPC_CharacterFadeCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ExecuteUbergraph_BPC_CharacterFadeCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterFadeCamera_C::ExecuteUbergraph_BPC_CharacterFadeCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterFadeCamera.BPC_CharacterFadeCamera_C.ExecuteUbergraph_BPC_CharacterFadeCamera");

	UBPC_CharacterFadeCamera_C_ExecuteUbergraph_BPC_CharacterFadeCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
