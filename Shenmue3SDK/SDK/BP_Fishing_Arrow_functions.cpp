
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

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeightUseVal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 HitPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::CheckWaterHeightUseVal(struct FVector* HitPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeightUseVal");

	ABP_Fishing_Arrow_C_CheckWaterHeightUseVal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitPos != nullptr)
		*HitPos = params.HitPos;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 HitPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::CheckWaterHeight(struct FVector* HitPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeight");

	ABP_Fishing_Arrow_C_CheckWaterHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitPos != nullptr)
		*HitPos = params.HitPos;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.End8Move
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_Arrow_C::End8Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.End8Move");

	ABP_Fishing_Arrow_C_End8Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Start8Move
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_Arrow_C::Start8Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Start8Move");

	ABP_Fishing_Arrow_C_Start8Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Update8Move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_Arrow_C::Update8Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Update8Move");

	ABP_Fishing_Arrow_C_Update8Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetWaterAndArrowIntersectPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 HitPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::GetWaterAndArrowIntersectPos(struct FVector* HitPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetWaterAndArrowIntersectPos");

	ABP_Fishing_Arrow_C_GetWaterAndArrowIntersectPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitPos != nullptr)
		*HitPos = params.HitPos;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::Reset(float Velocity, float degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Reset");

	ABP_Fishing_Arrow_C_Reset_Params params;
	params.Velocity = Velocity;
	params.degree = degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetReverseRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetReverseRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetReverseRate");

	ABP_Fishing_Arrow_C_SetReverseRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetArrowLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetArrowLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetArrowLength");

	ABP_Fishing_Arrow_C_SetArrowLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_Arrow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Initialize");

	ABP_Fishing_Arrow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UpdateVisibleArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::UpdateVisibleArrow(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UpdateVisibleArrow");

	ABP_Fishing_Arrow_C_UpdateVisibleArrow_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetVisibleArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetVisibleArrow(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetVisibleArrow");

	ABP_Fishing_Arrow_C_SetVisibleArrow_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetGradationPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetGradationPower(float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetGradationPower");

	ABP_Fishing_Arrow_C_SetGradationPower_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetGradationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetGradationSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetGradationSpeed");

	ABP_Fishing_Arrow_C_SetGradationSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetSplinePos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetSplinePos(float Velocity, float degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetSplinePos");

	ABP_Fishing_Arrow_C_SetSplinePos_Params params;
	params.Velocity = Velocity;
	params.degree = degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetXYZ
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::GetXYZ(float Time, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetXYZ");

	ABP_Fishing_Arrow_C_GetXYZ_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::GetHeight(float Time, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetHeight");

	ABP_Fishing_Arrow_C_GetHeight_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.getDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::getDistance(float Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.getDistance");

	ABP_Fishing_Arrow_C_getDistance_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_Arrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UserConstructionScript");

	ABP_Fishing_Arrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Fishing_Arrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveBeginPlay");

	ABP_Fishing_Arrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveTick");

	ABP_Fishing_Arrow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ExecuteUbergraph_BP_Fishing_Arrow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::ExecuteUbergraph_BP_Fishing_Arrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ExecuteUbergraph_BP_Fishing_Arrow");

	ABP_Fishing_Arrow_C_ExecuteUbergraph_BP_Fishing_Arrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
