
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
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_SetControlRotationYaw(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotationYaw");

	ABP_S3PlayerCameraManagerBase_C_SetControlRotationYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetControlRotation
// (Exec, Native, NetResponse, NetMulticast, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_S3PlayerCameraManagerBase_C::GetControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetControlRotation");

	ABP_S3PlayerCameraManagerBase_C_GetControlRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateMouseLook
// (NetRequest, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_SetActiveFocusSign(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetActiveFocusSign");

	ABP_S3PlayerCameraManagerBase_C_SetActiveFocusSign_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetIsZoomingInFOV
// (NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_SetEnabledAttentionSearch(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetEnabledAttentionSearch");

	ABP_S3PlayerCameraManagerBase_C_SetEnabledAttentionSearch_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetCameraPitchLimit
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ResetCameraPitchLimit(bool Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetCameraPitchLimit");

	ABP_S3PlayerCameraManagerBase_C_ResetCameraPitchLimit_Params params;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PanInterp
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputStr                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3PlayerCameraManagerBase_C::STATIC_PanInterp(float Current, float Max, float Speed, float InputStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PanInterp");

	ABP_S3PlayerCameraManagerBase_C_PanInterp_Params params;
	params.Current = Current;
	params.Max = Max;
	params.Speed = Speed;
	params.InputStr = InputStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotation
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_SetControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotation");

	ABP_S3PlayerCameraManagerBase_C_SetControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.EnableFaceFocusMode
// (Net, NetReliable, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bSetEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_EnableFaceFocusMode(bool bSetEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.EnableFaceFocusMode");

	ABP_S3PlayerCameraManagerBase_C_EnableFaceFocusMode_Params params;
	params.bSetEnabled = bSetEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.Debug_EnableFaceFocusMode
// (NetReliable, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bSetEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_Debug_EnableFaceFocusMode(bool bSetEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.Debug_EnableFaceFocusMode");

	ABP_S3PlayerCameraManagerBase_C_Debug_EnableFaceFocusMode_Params params;
	params.bSetEnabled = bSetEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFaceFocusModeEnabled
// (Net, NetReliable, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_IsFaceFocusModeEnabled(bool* bIsEnabled)
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
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bValidChar                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_ZoomLookAtTalkChar(bool* bValidChar)
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
// (Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InitZoomRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InitZoomRotation");

	ABP_S3PlayerCameraManagerBase_C_InitZoomRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetZoomTargetCharacter
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AS3Character*            OutCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::GetZoomTargetCharacter(class AS3Character** OutCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetZoomTargetCharacter");

	ABP_S3PlayerCameraManagerBase_C_GetZoomTargetCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCharacter != nullptr)
		*OutCharacter = params.OutCharacter;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetLookAtRotation
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                FallbackRotation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_GetLookAtRotation(const struct FRotator& FallbackRotation, struct FRotator* OutRotation)
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
// (Net, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_StopLookAtLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StopLookAtLocation");

	ABP_S3PlayerCameraManagerBase_C_StopLookAtLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateFloatInput
// (Net, NetRequest, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          InFloat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutFloat                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::StandardGateFloatInput(float InFloat, float* OutFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateFloatInput");

	ABP_S3PlayerCameraManagerBase_C_StandardGateFloatInput_Params params;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFloat != nullptr)
		*OutFloat = params.OutFloat;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BeginLookAtLocation
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetRotationOffset
// (Net, NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_SetRotationOffset(const struct FRotator& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetRotationOffset");

	ABP_S3PlayerCameraManagerBase_C_SetRotationOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehindSmooth
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, Const)
// Parameters:
// bool                           Smooth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::SetPlayerBehindSmooth(bool Smooth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehindSmooth");

	ABP_S3PlayerCameraManagerBase_C_SetPlayerBehindSmooth_Params params;
	params.Smooth = Smooth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmLagFlag
// (Exec, Native, Static, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_UpdateSpringArmLagFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmLagFlag");

	ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmLagFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PhotographyCameraModify
// (Exec, Native, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 NewCameraLocation              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ResultCameraLocation           (Parm, OutParm, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PhotographyCameraModify");

	ABP_S3PlayerCameraManagerBase_C_PhotographyCameraModify_Params params;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultCameraLocation != nullptr)
		*ResultCameraLocation = params.ResultCameraLocation;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetCameraSpaceYaw
// (Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::CanScreenShot(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CanScreenShot");

	ABP_S3PlayerCameraManagerBase_C_CanScreenShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmSocket
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3PlayerCameraManagerBase_C::STATIC_UpdateSpringArmSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmSocket");

	ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmSocket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateZoomState
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ZoomInputAxis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::UpdateZoomState(float ZoomInputAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateZoomState");

	ABP_S3PlayerCameraManagerBase_C_UpdateZoomState_Params params;
	params.ZoomInputAxis = ZoomInputAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InterpolateAngleNear
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
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
// (Event, Static, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          SrcAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DstAngle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Positive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InterpolateAngle(float SrcAngle, float DstAngle, float Ratio, bool Positive, float* Result)
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
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          SrcAngleDeg                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DstAngleDeg                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_GetAngleNormal(float SrcAngleDeg, float* DstAngleDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetAngleNormal");

	ABP_S3PlayerCameraManagerBase_C_GetAngleNormal_Params params;
	params.SrcAngleDeg = SrcAngleDeg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DstAngleDeg != nullptr)
		*DstAngleDeg = params.DstAngleDeg;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsReversedSignIfAdd
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          BaseParam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reversed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_IsReversedSignIfAdd(float BaseParam, float AddParam, bool* Reversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsReversedSignIfAdd");

	ABP_S3PlayerCameraManagerBase_C_IsReversedSignIfAdd_Params params;
	params.BaseParam = BaseParam;
	params.AddParam = AddParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reversed != nullptr)
		*Reversed = params.Reversed;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehind
// (NetReliable, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_SetPlayerBehind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehind");

	ABP_S3PlayerCameraManagerBase_C_SetPlayerBehind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZoomEnable
// (Net, Static, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_IsZoomEnable(bool* Enable)
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
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           WithState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::ResetZoom(bool WithState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetZoom");

	ABP_S3PlayerCameraManagerBase_C_ResetZoom_Params params;
	params.WithState = WithState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFirstPersonView
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           FirstPerson                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsFirstPersonView(bool* FirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFirstPersonView");

	ABP_S3PlayerCameraManagerBase_C_IsFirstPersonView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstPerson != nullptr)
		*FirstPerson = params.FirstPerson;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SwitchZoomState
// (NetRequest, Exec, Event, Static, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_SwitchZoomState(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SwitchZoomState");

	ABP_S3PlayerCameraManagerBase_C_SwitchZoomState_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CalcThirdPersonCamera
// (Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3PlayerCameraManagerBase_C::CalcThirdPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CalcThirdPersonCamera");

	ABP_S3PlayerCameraManagerBase_C_CalcThirdPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsAttention
// (Net, NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Native, NetResponse, Static, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_TickZoomCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.TickZoomCameraRotation");

	ABP_S3PlayerCameraManagerBase_C_TickZoomCameraRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZooming
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, Const)
// Parameters:
// bool                           Zooming                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::IsZooming(bool* Zooming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZooming");

	ABP_S3PlayerCameraManagerBase_C_IsZooming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zooming != nullptr)
		*Zooming = params.Zooming;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmParams
// (NetReliable, MulticastDelegate, Private, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::UpdateSpringArmParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmParams");

	ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetDesiredZoomFOV
// (NetRequest, Native, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3PlayerCameraManagerBase_C::GetDesiredZoomFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetDesiredZoomFOV");

	ABP_S3PlayerCameraManagerBase_C_GetDesiredZoomFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BlueprintUpdateCamera
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  CameraTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewCameraLocation              (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewCameraRotation              (Parm, OutParm, IsPlainOldData)
// float                          NewCameraFOV                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3PlayerCameraManagerBase_C::STATIC_BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BlueprintUpdateCamera");

	ABP_S3PlayerCameraManagerBase_C_BlueprintUpdateCamera_Params params;
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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
// (Net, NetReliable, NetRequest, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_CameraSpringArmLagSet(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraSpringArmLagSet");

	ABP_S3PlayerCameraManagerBase_C_CameraSpringArmLagSet_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsCameraCollision
// (Net, NetReliable, NetRequest, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CollisionFlag                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_IsCameraCollision(bool* CollisionFlag)
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
// (NetReliable, NetRequest, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_CameraCollisionOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOff");

	ABP_S3PlayerCameraManagerBase_C_CameraCollisionOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOn
// (Net, NetRequest, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_CameraCollisionOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOn");

	ABP_S3PlayerCameraManagerBase_C_CameraCollisionOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOff
// (NetReliable, Exec, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_CameraCalcOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOff");

	ABP_S3PlayerCameraManagerBase_C_CameraCalcOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOn
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_CameraCalcOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOn");

	ABP_S3PlayerCameraManagerBase_C_CameraCalcOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInitParam
// (Net, NetRequest, Exec, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void ABP_S3PlayerCameraManagerBase_C::CameraRotInitParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInitParam");

	ABP_S3PlayerCameraManagerBase_C_CameraRotInitParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInit
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_CameraRotInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInit");

	ABP_S3PlayerCameraManagerBase_C_CameraRotInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UserConstructionScript
// (NetRequest, Native, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UserConstructionScript");

	ABP_S3PlayerCameraManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_Screenshot_K2Node_InputActionEvent_8
// (NetRequest, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpActEvt_Screenshot_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_Screenshot_K2Node_InputActionEvent_8");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_Screenshot_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7
// (NetRequest, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_6
// (Net, NetReliable, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpActEvt_ResetCamera_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_6");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_5
// (Net, NetRequest, Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpActEvt_ResetCamera_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_5");

	ABP_S3PlayerCameraManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveTick
// (NetRequest, Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveTick");

	ABP_S3PlayerCameraManagerBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveBeginPlay");

	ABP_S3PlayerCameraManagerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionStart
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_OnPhotographySessionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionStart");

	ABP_S3PlayerCameraManagerBase_C_OnPhotographySessionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionEnd
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_OnPhotographySessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionEnd");

	ABP_S3PlayerCameraManagerBase_C_OnPhotographySessionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputHeldResetCamera
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InputHeldResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputHeldResetCamera");

	ABP_S3PlayerCameraManagerBase_C_InputHeldResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_7
// (Net, NetReliable, Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpAxisEvt_LookUp_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_7");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_18
// (NetReliable, Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpAxisEvt_Turn_K2Node_InputAxisEvent_18(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_18");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_18_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveEndPlay
// (NetReliable, Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveEndPlay");

	ABP_S3PlayerCameraManagerBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CleanupNullReferences
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PlayerCameraManagerBase_C::STATIC_CleanupNullReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CleanupNullReferences");

	ABP_S3PlayerCameraManagerBase_C_CleanupNullReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ChangedCameraState
// (NetReliable, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECameraState                   OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECameraState                   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_ChangedCameraState(ECameraState OldState, ECameraState NewState)
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
// (Net, Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4
// (Exec, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PlayerCameraManagerBase_C::STATIC_InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4");

	ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ExecuteUbergraph_BP_S3PlayerCameraManagerBase
// (NetMulticast, Public, Protected, NetClient, DLLImport)
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
