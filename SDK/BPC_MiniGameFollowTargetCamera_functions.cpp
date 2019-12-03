
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

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowEnd
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_FollowEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowEnd");

	UBPC_MiniGameFollowTargetCamera_C_FollowEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowStart
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_FollowStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowStart");

	UBPC_MiniGameFollowTargetCamera_C_FollowStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraDefaultRelativeTransform
// (NetReliable, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              trans                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_SetCameraDefaultRelativeTransform(struct FTransform* trans)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraDefaultRelativeTransform");

	UBPC_MiniGameFollowTargetCamera_C_SetCameraDefaultRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (trans != nullptr)
		*trans = params.trans;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.Update
// (NetRequest, Exec, Native, NetResponse, Static, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.Update");

	UBPC_MiniGameFollowTargetCamera_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveBeginPlay
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveBeginPlay");

	UBPC_MiniGameFollowTargetCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveTick
// (Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveTick");

	UBPC_MiniGameFollowTargetCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraFollowTargetActor
// (Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_SetCameraFollowTargetActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraFollowTargetActor");

	UBPC_MiniGameFollowTargetCamera_C_SetCameraFollowTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnDestroyTargetActor
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_OnDestroyTargetActor(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnDestroyTargetActor");

	UBPC_MiniGameFollowTargetCamera_C_OnDestroyTargetActor_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ExecuteUbergraph_BPC_MiniGameFollowTargetCamera
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::ExecuteUbergraph_BPC_MiniGameFollowTargetCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ExecuteUbergraph_BPC_MiniGameFollowTargetCamera");

	UBPC_MiniGameFollowTargetCamera_C_ExecuteUbergraph_BPC_MiniGameFollowTargetCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnReturnDefaultCameraRotation__DelegateSignature
// (Net, NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintCallable)

void UBPC_MiniGameFollowTargetCamera_C::STATIC_OnReturnDefaultCameraRotation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnReturnDefaultCameraRotation__DelegateSignature");

	UBPC_MiniGameFollowTargetCamera_C_OnReturnDefaultCameraRotation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
