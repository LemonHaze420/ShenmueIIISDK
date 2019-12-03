
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

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcAndMoveCameraToSafeLocation
// (NetReliable, MulticastDelegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_DefaultTalkCamera_C::CalcAndMoveCameraToSafeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcAndMoveCameraToSafeLocation");

	ABP_DefaultTalkCamera_C_CalcAndMoveCameraToSafeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CutOffNearBlur
// (NetReliable, Native, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_DefaultTalkCamera_C::CutOffNearBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CutOffNearBlur");

	ABP_DefaultTalkCamera_C_CutOffNearBlur_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLookTargetSocketLocation
// (Net, NetReliable, NetRequest, Exec, Native, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_DefaultTalkCamera_C::GetLookTargetSocketLocation(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLookTargetSocketLocation");

	ABP_DefaultTalkCamera_C_GetLookTargetSocketLocation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalDistance
// (Net, Exec, Static, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          FinishCameraDistance           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::STATIC_CalcFinalDistance(float* FinishCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalDistance");

	ABP_DefaultTalkCamera_C_CalcFinalDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinishCameraDistance != nullptr)
		*FinishCameraDistance = params.FinishCameraDistance;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalSpin
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                FinalSpin                      (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::STATIC_CalcFinalSpin(struct FRotator* FinalSpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalSpin");

	ABP_DefaultTalkCamera_C_CalcFinalSpin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalSpin != nullptr)
		*FinalSpin = params.FinalSpin;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UpdateComponent
// (Net, NetReliable, NetRequest, Native, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void ABP_DefaultTalkCamera_C::UpdateComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UpdateComponent");

	ABP_DefaultTalkCamera_C_UpdateComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetCamera
// (Net, NetReliable, NetRequest, Native, NetMulticast, Private, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_DefaultTalkCamera_C::GetCamera(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetCamera");

	ABP_DefaultTalkCamera_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetForwardVector
// (NetReliable, NetRequest, Event, Static, NetMulticast, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Forward                        (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::STATIC_GetForwardVector(class USkeletalMeshComponent* Target, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetForwardVector");

	ABP_DefaultTalkCamera_C_GetForwardVector_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.AdjustRotationFromDistance
// (Event, NetMulticast, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DistanceRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AdjustmentRotation             (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::AdjustRotationFromDistance(const struct FRotator& Rotation, float DistanceRatio, struct FRotator* AdjustmentRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.AdjustRotationFromDistance");

	ABP_DefaultTalkCamera_C_AdjustRotationFromDistance_Params params;
	params.Rotation = Rotation;
	params.DistanceRatio = DistanceRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustmentRotation != nullptr)
		*AdjustmentRotation = params.AdjustmentRotation;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.AdjustCameraDistance
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          CharacterHalfDistance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AdjustmentCameraDistance       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::AdjustCameraDistance(float CharacterHalfDistance, float CameraDistance, float* AdjustmentCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.AdjustCameraDistance");

	ABP_DefaultTalkCamera_C_AdjustCameraDistance_Params params;
	params.CharacterHalfDistance = CharacterHalfDistance;
	params.CameraDistance = CameraDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustmentCameraDistance != nullptr)
		*AdjustmentCameraDistance = params.AdjustmentCameraDistance;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLockPointDepthOffset
// (Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 DepthOffset                    (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::STATIC_GetLockPointDepthOffset(struct FVector* DepthOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLockPointDepthOffset");

	ABP_DefaultTalkCamera_C_GetLockPointDepthOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DepthOffset != nullptr)
		*DepthOffset = params.DepthOffset;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLockPointOffset
// (Net, NetReliable, NetRequest, Event, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LockPointOffset                (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::GetLockPointOffset(struct FVector* LockPointOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLockPointOffset");

	ABP_DefaultTalkCamera_C_GetLockPointOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LockPointOffset != nullptr)
		*LockPointOffset = params.LockPointOffset;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.SetSkeletalMeshFromTalkActor
// (Net, NetReliable, NetRequest, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_DefaultTalkCamera_C::STATIC_SetSkeletalMeshFromTalkActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.SetSkeletalMeshFromTalkActor");

	ABP_DefaultTalkCamera_C_SetSkeletalMeshFromTalkActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_DollyZoom
// (NetReliable, Exec, Event, NetResponse, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::Movement_DollyZoom(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_DollyZoom");

	ABP_DefaultTalkCamera_C_Movement_DollyZoom_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_FovZoom
// (NetRequest, Native, Event, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::Movement_FovZoom(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_FovZoom");

	ABP_DefaultTalkCamera_C_Movement_FovZoom_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_Spin
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::STATIC_Movement_Spin(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_Spin");

	ABP_DefaultTalkCamera_C_Movement_Spin_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Rotater + Rotater
// (NetReliable, NetRequest, Exec, Static, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                Rotator_A                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotator_B                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotator                        (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::STATIC_Rotater___Rotater(const struct FRotator& Rotator_A, const struct FRotator& Rotator_B, struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Rotater + Rotater");

	ABP_DefaultTalkCamera_C_Rotater___Rotater_Params params;
	params.Rotator_A = Rotator_A;
	params.Rotator_B = Rotator_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookPair
// (Net, NetRequest, Native, NetResponse, NetMulticast, Public, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::StartupSettingsCaseLookPair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookPair");

	ABP_DefaultTalkCamera_C_StartupSettingsCaseLookPair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookAlone
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_DefaultTalkCamera_C::STATIC_StartupSettingsCaseLookAlone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookAlone");

	ABP_DefaultTalkCamera_C_StartupSettingsCaseLookAlone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UserConstructionScript
// (Net, NetRequest, Native, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_DefaultTalkCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UserConstructionScript");

	ABP_DefaultTalkCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_DefaultTalkCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveBeginPlay");

	ABP_DefaultTalkCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ChangeTarget
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          NewTarget                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          lerpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::STATIC_ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ChangeTarget");

	ABP_DefaultTalkCamera_C_ChangeTarget_Params params;
	params.NewTarget = NewTarget;
	params.lerpTime = lerpTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveTick
// (Net, NetReliable, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveTick");

	ABP_DefaultTalkCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ExecuteUbergraph_BP_DefaultTalkCamera
// (Net, NetResponse, Public, Private, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::ExecuteUbergraph_BP_DefaultTalkCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ExecuteUbergraph_BP_DefaultTalkCamera");

	ABP_DefaultTalkCamera_C_ExecuteUbergraph_BP_DefaultTalkCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
