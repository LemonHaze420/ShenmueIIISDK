
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

// Function BP_ST_Arrow.BP_ST_Arrow_C.EnabledSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::EnabledSplineMesh(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.EnabledSplineMesh");

	ABP_ST_Arrow_C_EnabledSplineMesh_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowNumRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetArrowNumRate(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowNumRate");

	ABP_ST_Arrow_C_SetArrowNumRate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowMaskSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ST_Arrow_C::SetArrowMaskSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowMaskSize");

	ABP_ST_Arrow_C_SetArrowMaskSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetHorizonTaperedScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetHorizonTaperedScale(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetHorizonTaperedScale");

	ABP_ST_Arrow_C_SetHorizonTaperedScale_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetMaxAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxAlpha                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetMaxAlpha(float MaxAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetMaxAlpha");

	ABP_ST_Arrow_C_SetMaxAlpha_Params params;
	params.MaxAlpha = MaxAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::Reset(float Velocity, float degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.Reset");

	ABP_ST_Arrow_C_Reset_Params params;
	params.Velocity = Velocity;
	params.degree = degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetReverseRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetReverseRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetReverseRate");

	ABP_ST_Arrow_C_SetReverseRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetArrowLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowLength");

	ABP_ST_Arrow_C_SetArrowLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_Arrow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.Initialize");

	ABP_ST_Arrow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.UpdateVisibleArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::UpdateVisibleArrow(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.UpdateVisibleArrow");

	ABP_ST_Arrow_C_UpdateVisibleArrow_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetVisibleArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetVisibleArrow(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetVisibleArrow");

	ABP_ST_Arrow_C_SetVisibleArrow_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetGradationPower(float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationPower");

	ABP_ST_Arrow_C_SetGradationPower_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetGradationSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationSpeed");

	ABP_ST_Arrow_C_SetGradationSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetSplinePos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetSplinePos(float Velocity, float degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetSplinePos");

	ABP_ST_Arrow_C_SetSplinePos_Params params;
	params.Velocity = Velocity;
	params.degree = degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.GetXYZ
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_ST_Arrow_C::GetXYZ(float Time, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.GetXYZ");

	ABP_ST_Arrow_C_GetXYZ_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.GetHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::GetHeight(float Time, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.GetHeight");

	ABP_ST_Arrow_C_GetHeight_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.getDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::getDistance(float Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.getDistance");

	ABP_ST_Arrow_C_getDistance_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ST_Arrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.UserConstructionScript");

	ABP_ST_Arrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ST_Arrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveBeginPlay");

	ABP_ST_Arrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveTick");

	ABP_ST_Arrow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetRenderTargetTickEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetRenderTargetTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetRenderTargetTickEnabled");

	ABP_ST_Arrow_C_SetRenderTargetTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.ExecuteUbergraph_BP_ST_Arrow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::ExecuteUbergraph_BP_ST_Arrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.ExecuteUbergraph_BP_ST_Arrow");

	ABP_ST_Arrow_C_ExecuteUbergraph_BP_ST_Arrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
