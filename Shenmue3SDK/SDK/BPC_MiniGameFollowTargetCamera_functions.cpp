
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

// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameFollowTargetCamera_C::FollowEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowEnd");

	UBPC_MiniGameFollowTargetCamera_C_FollowEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameFollowTargetCamera_C::FollowStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.FollowStart");

	UBPC_MiniGameFollowTargetCamera_C_FollowStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraDefaultRelativeTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              trans                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::SetCameraDefaultRelativeTransform(struct FTransform* trans)
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
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.Update");

	UBPC_MiniGameFollowTargetCamera_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MiniGameFollowTargetCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveBeginPlay");

	UBPC_MiniGameFollowTargetCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ReceiveTick");

	UBPC_MiniGameFollowTargetCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraFollowTargetActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::SetCameraFollowTargetActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.SetCameraFollowTargetActor");

	UBPC_MiniGameFollowTargetCamera_C_SetCameraFollowTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnDestroyTargetActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::OnDestroyTargetActor(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnDestroyTargetActor");

	UBPC_MiniGameFollowTargetCamera_C_OnDestroyTargetActor_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ExecuteUbergraph_BPC_MiniGameFollowTargetCamera
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameFollowTargetCamera_C::ExecuteUbergraph_BPC_MiniGameFollowTargetCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.ExecuteUbergraph_BPC_MiniGameFollowTargetCamera");

	UBPC_MiniGameFollowTargetCamera_C_ExecuteUbergraph_BPC_MiniGameFollowTargetCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnReturnDefaultCameraRotation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameFollowTargetCamera_C::OnReturnDefaultCameraRotation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameFollowTargetCamera.BPC_MiniGameFollowTargetCamera_C.OnReturnDefaultCameraRotation__DelegateSignature");

	UBPC_MiniGameFollowTargetCamera_C_OnReturnDefaultCameraRotation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
