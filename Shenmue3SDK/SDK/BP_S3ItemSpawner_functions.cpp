
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

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_S3ItemSpawner_C::GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpName");

	ABP_S3ItemSpawner_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_S3ItemSpawner_C::GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpPriority");

	ABP_S3ItemSpawner_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsActivateHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsActivateHelp");

	ABP_S3ItemSpawner_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RegisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RegisterHelp");

	ABP_S3ItemSpawner_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UnregisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::UnregisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UnregisterHelp");

	ABP_S3ItemSpawner_C_UnregisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetAquisitionItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::SetAquisitionItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetAquisitionItem");

	ABP_S3ItemSpawner_C_SetAquisitionItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsAcquisitionItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::IsAcquisitionItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsAcquisitionItem");

	ABP_S3ItemSpawner_C_IsAcquisitionItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InitializeSearchItemActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::InitializeSearchItemActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InitializeSearchItemActor");

	ABP_S3ItemSpawner_C_InitializeSearchItemActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsPlayOnlyLookScript
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::IsPlayOnlyLookScript(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsPlayOnlyLookScript");

	ABP_S3ItemSpawner_C_IsPlayOnlyLookScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetUniqueCameraTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::GetUniqueCameraTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetUniqueCameraTransform");

	ABP_S3ItemSpawner_C_GetUniqueCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsLooking
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::IsLooking(bool* Look)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsLooking");

	ABP_S3ItemSpawner_C_IsLooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetCameraLocationOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 CameraLocationOffset           (Parm, OutParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::GetCameraLocationOffset(struct FVector* CameraLocationOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetCameraLocationOffset");

	ABP_S3ItemSpawner_C_GetCameraLocationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraLocationOffset != nullptr)
		*CameraLocationOffset = params.CameraLocationOffset;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetItemIDAsName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_S3ItemSpawner_C::GetItemIDAsName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetItemIDAsName");

	ABP_S3ItemSpawner_C_GetItemIDAsName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UniqueActionOnFind
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::UniqueActionOnFind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UniqueActionOnFind");

	ABP_S3ItemSpawner_C_UniqueActionOnFind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ForceFindSelf
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::ForceFindSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ForceFindSelf");

	ABP_S3ItemSpawner_C_ForceFindSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RemovalItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::RemovalItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RemovalItem");

	ABP_S3ItemSpawner_C_RemovalItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::IsCompleted(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCompleted");

	ABP_S3ItemSpawner_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InFront
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemSpawner_C::InFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InFront");

	ABP_S3ItemSpawner_C_InFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.MyDestructor
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::MyDestructor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.MyDestructor");

	ABP_S3ItemSpawner_C_MyDestructor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcTargetDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3ItemSpawner_C*     BP_S3ItemSpawner               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PC_Sensor_Input_Dir_WS         (Parm, OutParm, IsPlainOldData)
// float                          PC_NPCSelect_Dir               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::CalcTargetDirection(class ABP_S3ItemSpawner_C* BP_S3ItemSpawner, struct FVector* PC_Sensor_Input_Dir_WS, float* PC_NPCSelect_Dir, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcTargetDirection");

	ABP_S3ItemSpawner_C_CalcTargetDirection_Params params;
	params.BP_S3ItemSpawner = BP_S3ItemSpawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PC_Sensor_Input_Dir_WS != nullptr)
		*PC_Sensor_Input_Dir_WS = params.PC_Sensor_Input_Dir_WS;
	if (PC_NPCSelect_Dir != nullptr)
		*PC_NPCSelect_Dir = params.PC_NPCSelect_Dir;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetSearchStep
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::SetSearchStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetSearchStep");

	ABP_S3ItemSpawner_C_SetSearchStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SwitchTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::SwitchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SwitchTarget");

	ABP_S3ItemSpawner_C_SwitchTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCurrentItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::IsCurrentItem(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCurrentItem");

	ABP_S3ItemSpawner_C_IsCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsOverlappingPlayer
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RangeFlag                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::IsOverlappingPlayer(class UObject* Object, bool* RangeFlag, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsOverlappingPlayer");

	ABP_S3ItemSpawner_C_IsOverlappingPlayer_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RangeFlag != nullptr)
		*RangeFlag = params.RangeFlag;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.OverlappingCheck
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::OverlappingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.OverlappingCheck");

	ABP_S3ItemSpawner_C_OverlappingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UpdateEffect
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::UpdateEffect(float Value, bool Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UpdateEffect");

	ABP_S3ItemSpawner_C_UpdateEffect_Params params;
	params.Value = Value;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcRelativeAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RelativeAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentItem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::CalcRelativeAngle(float* RelativeAngle, bool* CurrentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcRelativeAngle");

	ABP_S3ItemSpawner_C_CalcRelativeAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeAngle != nullptr)
		*RelativeAngle = params.RelativeAngle;
	if (CurrentItem != nullptr)
		*CurrentItem = params.CurrentItem;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CreateEffect
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::CreateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CreateEffect");

	ABP_S3ItemSpawner_C_CreateEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcCameraTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::CalcCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcCameraTransform");

	ABP_S3ItemSpawner_C_CalcCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::Initialize(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.Initialize");

	ABP_S3ItemSpawner_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UserConstructionScript");

	ABP_S3ItemSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3ItemSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveBeginPlay");

	ABP_S3ItemSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveTick");

	ABP_S3ItemSpawner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_S3ItemSpawner_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveDestroyed");

	ABP_S3ItemSpawner_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveEndPlay");

	ABP_S3ItemSpawner_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetEnabledHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::SetEnabledHelp(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetEnabledHelp");

	ABP_S3ItemSpawner_C_SetEnabledHelp_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3ItemSpawner_C_BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.DelayedInitialize
// (Event, Public, BlueprintEvent)

void ABP_S3ItemSpawner_C::DelayedInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.DelayedInitialize");

	ABP_S3ItemSpawner_C_DelayedInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BeginActionVisibleAndFound
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemSpawner_C::BeginActionVisibleAndFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BeginActionVisibleAndFound");

	ABP_S3ItemSpawner_C_BeginActionVisibleAndFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ExecuteUbergraph_BP_S3ItemSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemSpawner_C::ExecuteUbergraph_BP_S3ItemSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ExecuteUbergraph_BP_S3ItemSpawner");

	ABP_S3ItemSpawner_C_ExecuteUbergraph_BP_S3ItemSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
