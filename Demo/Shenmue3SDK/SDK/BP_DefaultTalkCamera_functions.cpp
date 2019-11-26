
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

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcAndMoveCameraToSafeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::CalcAndMoveCameraToSafeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcAndMoveCameraToSafeLocation");

	ABP_DefaultTalkCamera_C_CalcAndMoveCameraToSafeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CutOffNearBlur
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::CutOffNearBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CutOffNearBlur");

	ABP_DefaultTalkCamera_C_CutOffNearBlur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLookTargetSocketLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_DefaultTalkCamera_C::GetLookTargetSocketLocation(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLookTargetSocketLocation");

	ABP_DefaultTalkCamera_C_GetLookTargetSocketLocation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FinishCameraDistance           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::CalcFinalDistance(float* FinishCameraDistance)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                FinalSpin                      (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::CalcFinalSpin(struct FRotator* FinalSpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalSpin");

	ABP_DefaultTalkCamera_C_CalcFinalSpin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalSpin != nullptr)
		*FinalSpin = params.FinalSpin;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UpdateComponent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::UpdateComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UpdateComponent");

	ABP_DefaultTalkCamera_C_UpdateComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_DefaultTalkCamera_C::GetCamera(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetCamera");

	ABP_DefaultTalkCamera_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetForwardVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Forward                        (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::GetForwardVector(class USkeletalMeshComponent* Target, struct FVector* Forward)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 DepthOffset                    (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::GetLockPointDepthOffset(struct FVector* DepthOffset)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::SetSkeletalMeshFromTalkActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.SetSkeletalMeshFromTalkActor");

	ABP_DefaultTalkCamera_C_SetSkeletalMeshFromTalkActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_DollyZoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::Movement_FovZoom(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_FovZoom");

	ABP_DefaultTalkCamera_C_Movement_FovZoom_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_Spin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::Movement_Spin(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_Spin");

	ABP_DefaultTalkCamera_C_Movement_Spin_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Rotater + Rotater
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Rotator_A                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotator_B                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotator                        (Parm, OutParm, IsPlainOldData)

void ABP_DefaultTalkCamera_C::Rotater___Rotater(const struct FRotator& Rotator_A, const struct FRotator& Rotator_B, struct FRotator* Rotator)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::StartupSettingsCaseLookPair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookPair");

	ABP_DefaultTalkCamera_C_StartupSettingsCaseLookPair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookAlone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::StartupSettingsCaseLookAlone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookAlone");

	ABP_DefaultTalkCamera_C_StartupSettingsCaseLookAlone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultTalkCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UserConstructionScript");

	ABP_DefaultTalkCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DefaultTalkCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveBeginPlay");

	ABP_DefaultTalkCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ChangeTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          NewTarget                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          lerpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ChangeTarget");

	ABP_DefaultTalkCamera_C_ChangeTarget_Params params;
	params.NewTarget = NewTarget;
	params.lerpTime = lerpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultTalkCamera_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveTick");

	ABP_DefaultTalkCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ExecuteUbergraph_BP_DefaultTalkCamera
// ()
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
