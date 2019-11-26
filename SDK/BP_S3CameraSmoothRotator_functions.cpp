
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

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.GetYawVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          YawVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3CameraSmoothRotator_C::GetYawVelocity(float* YawVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.GetYawVelocity");

	UBP_S3CameraSmoothRotator_C_GetYawVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YawVelocity != nullptr)
		*YawVelocity = params.YawVelocity;
}


// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowAcceleration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceDeaccel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResultAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3CameraSmoothRotator_C::UpdateYaw(float CurrentAngle, float TargetAngle, bool AllowAcceleration, bool ForceDeaccel, float* ResultAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateYaw");

	UBP_S3CameraSmoothRotator_C_UpdateYaw_Params params;
	params.CurrentAngle = CurrentAngle;
	params.TargetAngle = TargetAngle;
	params.AllowAcceleration = AllowAcceleration;
	params.ForceDeaccel = ForceDeaccel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
}


// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateAxis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             VelocityCurve                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             AccelerationCurve              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Deaccleration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowAcceleration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceDeaccel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResultAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ResultVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3CameraSmoothRotator_C::UpdateAxis(float CurrentAngle, float TargetAngle, float Velocity, class UCurveFloat* VelocityCurve, class UCurveFloat* AccelerationCurve, float Deaccleration, bool AllowAcceleration, bool ForceDeaccel, float* ResultAngle, float* ResultVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateAxis");

	UBP_S3CameraSmoothRotator_C_UpdateAxis_Params params;
	params.CurrentAngle = CurrentAngle;
	params.TargetAngle = TargetAngle;
	params.Velocity = Velocity;
	params.VelocityCurve = VelocityCurve;
	params.AccelerationCurve = AccelerationCurve;
	params.Deaccleration = Deaccleration;
	params.AllowAcceleration = AllowAcceleration;
	params.ForceDeaccel = ForceDeaccel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
	if (ResultVelocity != nullptr)
		*ResultVelocity = params.ResultVelocity;
}


// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdatePitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowAcceleration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceDeaccel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ResultAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3CameraSmoothRotator_C::UpdatePitch(float CurrentAngle, float TargetAngle, bool AllowAcceleration, bool ForceDeaccel, float* ResultAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdatePitch");

	UBP_S3CameraSmoothRotator_C_UpdatePitch_Params params;
	params.CurrentAngle = CurrentAngle;
	params.TargetAngle = TargetAngle;
	params.AllowAcceleration = AllowAcceleration;
	params.ForceDeaccel = ForceDeaccel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
}


// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_S3CameraSmoothRotator_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.Reset");

	UBP_S3CameraSmoothRotator_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.GetRealVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SourceAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DestinationAngle               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IntendedVelocity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RealVelocity                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3CameraSmoothRotator_C::GetRealVelocity(float SourceAngle, float DestinationAngle, float IntendedVelocity, float* RealVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.GetRealVelocity");

	UBP_S3CameraSmoothRotator_C_GetRealVelocity_Params params;
	params.SourceAngle = SourceAngle;
	params.DestinationAngle = DestinationAngle;
	params.IntendedVelocity = IntendedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RealVelocity != nullptr)
		*RealVelocity = params.RealVelocity;
}


// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateAngularVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentVel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             VelCurve                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             AccelCurve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Deaccel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableAccel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceDeaccel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_S3CameraSmoothRotator_C::UpdateAngularVelocity(float CurrentAngle, float TargetAngle, float CurrentVel, class UCurveFloat* VelCurve, class UCurveFloat* AccelCurve, float Deaccel, bool EnableAccel, bool ForceDeaccel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateAngularVelocity");

	UBP_S3CameraSmoothRotator_C_UpdateAngularVelocity_Params params;
	params.CurrentAngle = CurrentAngle;
	params.TargetAngle = TargetAngle;
	params.CurrentVel = CurrentVel;
	params.VelCurve = VelCurve;
	params.AccelCurve = AccelCurve;
	params.Deaccel = Deaccel;
	params.EnableAccel = EnableAccel;
	params.ForceDeaccel = ForceDeaccel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.Update
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetPitch                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetYaw                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CurrentRotation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           AllowAccel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, IsPlainOldData)

void UBP_S3CameraSmoothRotator_C::Update(float TargetPitch, float TargetYaw, const struct FRotator& CurrentRotation, bool AllowAccel, struct FRotator* NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.Update");

	UBP_S3CameraSmoothRotator_C_Update_Params params;
	params.TargetPitch = TargetPitch;
	params.TargetYaw = TargetYaw;
	params.CurrentRotation = CurrentRotation;
	params.AllowAccel = AllowAccel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
