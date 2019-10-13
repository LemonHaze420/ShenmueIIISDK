
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

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetRefractionRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::SetRefractionRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetRefractionRate");

	ABP_FishingBuoy_test_C_SetRefractionRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.InitializeBuoyTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PreBuoyLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 BaseDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_FishingBuoy_test_C::InitializeBuoyTransform(const struct FVector& PreBuoyLocation, const struct FVector& BaseDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.InitializeBuoyTransform");

	ABP_FishingBuoy_test_C_InitializeBuoyTransform_Params params;
	params.PreBuoyLocation = PreBuoyLocation;
	params.BaseDirection = BaseDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetPreBuoyLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PreBuoyLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_FishingBuoy_test_C::SetPreBuoyLocation(const struct FVector& PreBuoyLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetPreBuoyLocation");

	ABP_FishingBuoy_test_C_SetPreBuoyLocation_Params params;
	params.PreBuoyLocation = PreBuoyLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateBuoyTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceUpdate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::UpdateBuoyTransform(bool ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateBuoyTransform");

	ABP_FishingBuoy_test_C_UpdateBuoyTransform_Params params;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.GetCableLengthRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CableLengthRate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::GetCableLengthRate(float* CableLengthRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.GetCableLengthRate");

	ABP_FishingBuoy_test_C_GetCableLengthRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CableLengthRate != nullptr)
		*CableLengthRate = params.CableLengthRate;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ResetIdleMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::ResetIdleMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ResetIdleMove");

	ABP_FishingBuoy_test_C_ResetIdleMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateIdleMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::UpdateIdleMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateIdleMove");

	ABP_FishingBuoy_test_C_UpdateIdleMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdatePull
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::UpdatePull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdatePull");

	ABP_FishingBuoy_test_C_UpdatePull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.AddPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ArgVector                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ArgPow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::AddPower(const struct FVector& ArgVector, float ArgPow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.AddPower");

	ABP_FishingBuoy_test_C_AddPower_Params params;
	params.ArgVector = ArgVector;
	params.ArgPow = ArgPow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.GetBPMinigameFishing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Minigame_Fishing_Test_C* RetBPFishing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::GetBPMinigameFishing(class ABP_Minigame_Fishing_Test_C** RetBPFishing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.GetBPMinigameFishing");

	ABP_FishingBuoy_test_C_GetBPMinigameFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetBPFishing != nullptr)
		*RetBPFishing = params.RetBPFishing;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ProjectileStopFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::ProjectileStopFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ProjectileStopFunc");

	ABP_FishingBuoy_test_C_ProjectileStopFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateGuideArrowMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::UpdateGuideArrowMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateGuideArrowMove");

	ABP_FishingBuoy_test_C_UpdateGuideArrowMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetupGuideArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Fishing_Arrow_C*     ArgArrow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ArgArrowPow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::SetupGuideArrow(class ABP_Fishing_Arrow_C* ArgArrow, float ArgArrowPow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetupGuideArrow");

	ABP_FishingBuoy_test_C_SetupGuideArrow_Params params;
	params.ArgArrow = ArgArrow;
	params.ArgArrowPow = ArgArrowPow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateDelayHoming
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::UpdateDelayHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateDelayHoming");

	ABP_FishingBuoy_test_C_UpdateDelayHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ResetHoming
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::ResetHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ResetHoming");

	ABP_FishingBuoy_test_C_ResetHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.StartProjectileAndHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ArgHomingPos                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgDelayTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::StartProjectileAndHoming(class USceneComponent* ArgHomingPos, float ArgDelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.StartProjectileAndHoming");

	ABP_FishingBuoy_test_C_StartProjectileAndHoming_Params params;
	params.ArgHomingPos = ArgHomingPos;
	params.ArgDelayTime = ArgDelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetupTargetHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ArgTargetActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_FishingBuoy_test_C::SetupTargetHoming(class USceneComponent* ArgTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetupTargetHoming");

	ABP_FishingBuoy_test_C_SetupTargetHoming_Params params;
	params.ArgTargetActor = ArgTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetCaptureActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::SetCaptureActive(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetCaptureActive");

	ABP_FishingBuoy_test_C_SetCaptureActive_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UserConstructionScript");

	ABP_FishingBuoy_test_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Small UpDown__FinishedFunc
// (BlueprintEvent)

void ABP_FishingBuoy_test_C::Small_UpDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Small UpDown__FinishedFunc");

	ABP_FishingBuoy_test_C_Small_UpDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Small UpDown__UpdateFunc
// (BlueprintEvent)

void ABP_FishingBuoy_test_C::Small_UpDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Small UpDown__UpdateFunc");

	ABP_FishingBuoy_test_C_Small_UpDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Big UpDown__FinishedFunc
// (BlueprintEvent)

void ABP_FishingBuoy_test_C::Big_UpDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Big UpDown__FinishedFunc");

	ABP_FishingBuoy_test_C_Big_UpDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Big UpDown__UpdateFunc
// (BlueprintEvent)

void ABP_FishingBuoy_test_C::Big_UpDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Big UpDown__UpdateFunc");

	ABP_FishingBuoy_test_C_Big_UpDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BouyMoveTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_FishingBuoy_test_C::BouyMoveTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BouyMoveTimeline__FinishedFunc");

	ABP_FishingBuoy_test_C_BouyMoveTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BouyMoveTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_FishingBuoy_test_C::BouyMoveTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BouyMoveTimeline__UpdateFunc");

	ABP_FishingBuoy_test_C_BouyMoveTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_FishingBuoy_test_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature");

	ABP_FishingBuoy_test_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Stop Small UpDown
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::Stop_Small_UpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Stop Small UpDown");

	ABP_FishingBuoy_test_C_Stop_Small_UpDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Start Big UpDown
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::Start_Big_UpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Start Big UpDown");

	ABP_FishingBuoy_test_C_Start_Big_UpDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Stop Big UpDown
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::Stop_Big_UpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Stop Big UpDown");

	ABP_FishingBuoy_test_C_Stop_Big_UpDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Set Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_active                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::Set_Active(bool is_active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Set Active");

	ABP_FishingBuoy_test_C_Set_Active_Params params;
	params.is_active = is_active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetLureMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::SetLureMesh(class UStaticMesh* Mesh, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetLureMesh");

	ABP_FishingBuoy_test_C_SetLureMesh_Params params;
	params.Mesh = Mesh;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveEndPlay");

	ABP_FishingBuoy_test_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Start Small UpDown
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::Start_Small_UpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Start Small UpDown");

	ABP_FishingBuoy_test_C_Start_Small_UpDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetActiveBuoyVelocityDir
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::SetActiveBuoyVelocityDir(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetActiveBuoyVelocityDir");

	ABP_FishingBuoy_test_C_SetActiveBuoyVelocityDir_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.StopBuoyVelocityMove
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::StopBuoyVelocityMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.StopBuoyVelocityMove");

	ABP_FishingBuoy_test_C_StopBuoyVelocityMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.PlayBuoyVelocityMove
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::PlayBuoyVelocityMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.PlayBuoyVelocityMove");

	ABP_FishingBuoy_test_C_PlayBuoyVelocityMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveTick");

	ABP_FishingBuoy_test_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveActorBeginOverlap");

	ABP_FishingBuoy_test_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FishingBuoy_test_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveBeginPlay");

	ABP_FishingBuoy_test_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Update
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingBuoy_test_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Update");

	ABP_FishingBuoy_test_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ExecuteUbergraph_BP_FishingBuoy_test
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FishingBuoy_test_C::ExecuteUbergraph_BP_FishingBuoy_test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ExecuteUbergraph_BP_FishingBuoy_test");

	ABP_FishingBuoy_test_C_ExecuteUbergraph_BP_FishingBuoy_test_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
