
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

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputRotateY
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmountY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InputRotateY(float AmountY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputRotateY");

	ABP_S3PlayerCameraManagerBase_C_InputRotateY_Params params;
	params.AmountY = AmountY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputRotateX
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmountX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InputRotateX(float AmountX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputRotateX");

	ABP_S3PlayerCameraManagerBase_C_InputRotateX_Params params;
	params.AmountX = AmountX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotationYaw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SetControlRotationYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotationYaw");

	ABP_S3PlayerCameraManagerBase_C_SetControlRotationYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetControlRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_S3PlayerCameraManagerBase_C::GetControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetControlRotation");

	ABP_S3PlayerCameraManagerBase_C_GetControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateMouseLook
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3PlayerCameraManagerBase_C::StandardGateMouseLook(float In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateMouseLook");

	ABP_S3PlayerCameraManagerBase_C_StandardGateMouseLook_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetActiveFocusSign
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SetActiveFocusSign(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetActiveFocusSign");

	ABP_S3PlayerCameraManagerBase_C_SetActiveFocusSign_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetIsZoomingInFOV
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3PlayerCameraManagerBase_C::GetIsZoomingInFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetIsZoomingInFOV");

	ABP_S3PlayerCameraManagerBase_C_GetIsZoomingInFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetEnabledAttentionSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SetEnabledAttentionSearch(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetEnabledAttentionSearch");

	ABP_S3PlayerCameraManagerBase_C_SetEnabledAttentionSearch_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetCameraPitchLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ResetCameraPitchLimit(bool Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetCameraPitchLimit");

	ABP_S3PlayerCameraManagerBase_C_ResetCameraPitchLimit_Params params;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PanInterp
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputStr                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3PlayerCameraManagerBase_C::PanInterp(float Current, float Max, float Speed, float InputStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PanInterp");

	ABP_S3PlayerCameraManagerBase_C_PanInterp_Params params;
	params.Current = Current;
	params.Max = Max;
	params.Speed = Speed;
	params.InputStr = InputStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SetControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotation");

	ABP_S3PlayerCameraManagerBase_C_SetControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.EnableFaceFocusMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSetEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::EnableFaceFocusMode(bool bSetEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.EnableFaceFocusMode");

	ABP_S3PlayerCameraManagerBase_C_EnableFaceFocusMode_Params params;
	params.bSetEnabled = bSetEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.Debug_EnableFaceFocusMode
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSetEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::Debug_EnableFaceFocusMode(bool bSetEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.Debug_EnableFaceFocusMode");

	ABP_S3PlayerCameraManagerBase_C_Debug_EnableFaceFocusMode_Params params;
	params.bSetEnabled = bSetEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFaceFocusModeEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsFaceFocusModeEnabled(bool* bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFaceFocusModeEnabled");

	ABP_S3PlayerCameraManagerBase_C_IsFaceFocusModeEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsEnabled != nullptr)
		*bIsEnabled = params.bIsEnabled;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ZoomLookAtChar
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ZoomLookAtChar(class AS3Character* InCharacter, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ZoomLookAtChar");

	ABP_S3PlayerCameraManagerBase_C_ZoomLookAtChar_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ZoomLookAtTalkChar
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValidChar                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ZoomLookAtTalkChar(bool* bValidChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ZoomLookAtTalkChar");

	ABP_S3PlayerCameraManagerBase_C_ZoomLookAtTalkChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidChar != nullptr)
		*bValidChar = params.bValidChar;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InitZoomRotation
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::InitZoomRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InitZoomRotation");

	ABP_S3PlayerCameraManagerBase_C_InitZoomRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetZoomTargetCharacter
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            OutCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::GetZoomTargetCharacter(class AS3Character** OutCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetZoomTargetCharacter");

	ABP_S3PlayerCameraManagerBase_C_GetZoomTargetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCharacter != nullptr)
		*OutCharacter = params.OutCharacter;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetLookAtRotation
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                FallbackRotation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::GetLookAtRotation(const struct FRotator& FallbackRotation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetLookAtRotation");

	ABP_S3PlayerCameraManagerBase_C_GetLookAtRotation_Params params;
	params.FallbackRotation = FallbackRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StopLookAtLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::StopLookAtLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StopLookAtLocation");

	ABP_S3PlayerCameraManagerBase_C_StopLookAtLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateFloatInput
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InFloat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutFloat                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::StandardGateFloatInput(float InFloat, float* OutFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateFloatInput");

	ABP_S3PlayerCameraManagerBase_C_StandardGateFloatInput_Params params;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFloat != nullptr)
		*OutFloat = params.OutFloat;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BeginLookAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bImmediate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::BeginLookAtLocation(const struct FVector& Location, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BeginLookAtLocation");

	ABP_S3PlayerCameraManagerBase_C_BeginLookAtLocation_Params params;
	params.Location = Location;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetRotationOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SetRotationOffset(const struct FRotator& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetRotationOffset");

	ABP_S3PlayerCameraManagerBase_C_SetRotationOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehindSmooth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Smooth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SetPlayerBehindSmooth(bool Smooth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehindSmooth");

	ABP_S3PlayerCameraManagerBase_C_SetPlayerBehindSmooth_Params params;
	params.Smooth = Smooth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmLagFlag
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::UpdateSpringArmLagFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmLagFlag");

	ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmLagFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PhotographyCameraModify
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewCameraLocation              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ResultCameraLocation           (Parm, OutParm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PhotographyCameraModify");

	ABP_S3PlayerCameraManagerBase_C_PhotographyCameraModify_Params params;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultCameraLocation != nullptr)
		*ResultCameraLocation = params.ResultCameraLocation;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetCameraSpaceYaw
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::GetCameraSpaceYaw(const struct FVector& Direction, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetCameraSpaceYaw");

	ABP_S3PlayerCameraManagerBase_C_GetCameraSpaceYaw_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CanScreenShot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::CanScreenShot(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CanScreenShot");

	ABP_S3PlayerCameraManagerBase_C_CanScreenShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmSocket
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::UpdateSpringArmSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmSocket");

	ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateZoomState
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ZoomInputAxis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::UpdateZoomState(float ZoomInputAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateZoomState");

	ABP_S3PlayerCameraManagerBase_C_UpdateZoomState_Params params;
	params.ZoomInputAxis = ZoomInputAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InterpolateAngleNear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SrcAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DstAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InterpolateAngleNear(float SrcAngle, float DstAngle, float Ratio, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InterpolateAngleNear");

	ABP_S3PlayerCameraManagerBase_C_InterpolateAngleNear_Params params;
	params.SrcAngle = SrcAngle;
	params.DstAngle = DstAngle;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InterpolateAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SrcAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DstAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InterpolateAngle(float SrcAngle, float DstAngle, float Ratio, bool Positive, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InterpolateAngle");

	ABP_S3PlayerCameraManagerBase_C_InterpolateAngle_Params params;
	params.SrcAngle = SrcAngle;
	params.DstAngle = DstAngle;
	params.Ratio = Ratio;
	params.Positive = Positive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetAngleNormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SrcAngleDeg                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DstAngleDeg                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::GetAngleNormal(float SrcAngleDeg, float* DstAngleDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetAngleNormal");

	ABP_S3PlayerCameraManagerBase_C_GetAngleNormal_Params params;
	params.SrcAngleDeg = SrcAngleDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DstAngleDeg != nullptr)
		*DstAngleDeg = params.DstAngleDeg;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsReversedSignIfAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          BaseParam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reversed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsReversedSignIfAdd(float BaseParam, float AddParam, bool* Reversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsReversedSignIfAdd");

	ABP_S3PlayerCameraManagerBase_C_IsReversedSignIfAdd_Params params;
	params.BaseParam = BaseParam;
	params.AddParam = AddParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reversed != nullptr)
		*Reversed = params.Reversed;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehind
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::SetPlayerBehind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehind");

	ABP_S3PlayerCameraManagerBase_C_SetPlayerBehind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZoomEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsZoomEnable(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZoomEnable");

	ABP_S3PlayerCameraManagerBase_C_IsZoomEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WithState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ResetZoom(bool WithState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetZoom");

	ABP_S3PlayerCameraManagerBase_C_ResetZoom_Params params;
	params.WithState = WithState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFirstPersonView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           FirstPerson                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsFirstPersonView(bool* FirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFirstPersonView");

	ABP_S3PlayerCameraManagerBase_C_IsFirstPersonView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstPerson != nullptr)
		*FirstPerson = params.FirstPerson;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SwitchZoomState
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SwitchZoomState(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SwitchZoomState");

	ABP_S3PlayerCameraManagerBase_C_SwitchZoomState_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CalcThirdPersonCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CalcThirdPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CalcThirdPersonCamera");

	ABP_S3PlayerCameraManagerBase_C_CalcThirdPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsAttention
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Attention                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsAttention(bool* Attention)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsAttention");

	ABP_S3PlayerCameraManagerBase_C_IsAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attention != nullptr)
		*Attention = params.Attention;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.TickZoomCameraRotation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::TickZoomCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.TickZoomCameraRotation");

	ABP_S3PlayerCameraManagerBase_C_TickZoomCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZooming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Zooming                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsZooming(bool* Zooming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZooming");

	ABP_S3PlayerCameraManagerBase_C_IsZooming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zooming != nullptr)
		*Zooming = params.Zooming;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmParams
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::UpdateSpringArmParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmParams");

	ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetDesiredZoomFOV
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3PlayerCameraManagerBase_C::GetDesiredZoomFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetDesiredZoomFOV");

	ABP_S3PlayerCameraManagerBase_C_GetDesiredZoomFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BlueprintUpdateCamera
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CameraTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewCameraLocation              (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewCameraRotation              (Parm, OutParm, IsPlainOldData)
// float                          NewCameraFOV                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3PlayerCameraManagerBase_C::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BlueprintUpdateCamera");

	ABP_S3PlayerCameraManagerBase_C_BlueprintUpdateCamera_Params params;
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCameraLocation != nullptr)
		*NewCameraLocation = params.NewCameraLocation;
	if (NewCameraRotation != nullptr)
		*NewCameraRotation = params.NewCameraRotation;
	if (NewCameraFOV != nullptr)
		*NewCameraFOV = params.NewCameraFOV;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraSpringArmLagSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::CameraSpringArmLagSet(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraSpringArmLagSet");

	ABP_S3PlayerCameraManagerBase_C_CameraSpringArmLagSet_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsCameraCollision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CollisionFlag                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsCameraCollision(bool* CollisionFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsCameraCollision");

	ABP_S3PlayerCameraManagerBase_C_IsCameraCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionFlag != nullptr)
		*CollisionFlag = params.CollisionFlag;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CameraCollisionOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOff");

	ABP_S3PlayerCameraManagerBase_C_CameraCollisionOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CameraCollisionOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOn");

	ABP_S3PlayerCameraManagerBase_C_CameraCollisionOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CameraCalcOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOff");

	ABP_S3PlayerCameraManagerBase_C_CameraCalcOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CameraCalcOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOn");

	ABP_S3PlayerCameraManagerBase_C_CameraCalcOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInitParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CameraRotInitParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInitParam");

	ABP_S3PlayerCameraManagerBase_C_CameraRotInitParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CameraRotInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInit");

	ABP_S3PlayerCameraManagerBase_C_CameraRotInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UserConstructionScript");

	ABP_S3PlayerCameraManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_Screenshot_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::InpActEvt_Screenshot_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_Screenshot_K2Node_InputActionEvent_8");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_Screenshot_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::InpActEvt_ResetCamera_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_6");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::InpActEvt_ResetCamera_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_5");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveTick");

	ABP_S3PlayerCameraManagerBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveBeginPlay");

	ABP_S3PlayerCameraManagerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::OnPhotographySessionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionStart");

	ABP_S3PlayerCameraManagerBase_C_OnPhotographySessionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::OnPhotographySessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionEnd");

	ABP_S3PlayerCameraManagerBase_C_OnPhotographySessionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputHeldResetCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::InputHeldResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputHeldResetCamera");

	ABP_S3PlayerCameraManagerBase_C_InputHeldResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_7");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_18
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_18(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_18");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_18_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveEndPlay");

	ABP_S3PlayerCameraManagerBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CleanupNullReferences
// (BlueprintCallable, BlueprintEvent)

void ABP_S3PlayerCameraManagerBase_C::CleanupNullReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CleanupNullReferences");

	ABP_S3PlayerCameraManagerBase_C_CleanupNullReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ChangedCameraState
// (Event, Public, BlueprintEvent)
// Parameters:
// ECameraState                   OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECameraState                   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ChangedCameraState(ECameraState OldState, ECameraState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ChangedCameraState");

	ABP_S3PlayerCameraManagerBase_C_ChangedCameraState_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ExecuteUbergraph_BP_S3PlayerCameraManagerBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ExecuteUbergraph_BP_S3PlayerCameraManagerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ExecuteUbergraph_BP_S3PlayerCameraManagerBase");

	ABP_S3PlayerCameraManagerBase_C_ExecuteUbergraph_BP_S3PlayerCameraManagerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
