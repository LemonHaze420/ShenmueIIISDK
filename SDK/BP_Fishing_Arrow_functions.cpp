
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

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeightUseVal
// (Exec, Static, NetMulticast, MulticastDelegate, Public, NetServer)
// Parameters:
// struct FVector                 HitPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_CheckWaterHeightUseVal(struct FVector* HitPos)
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
// (NetRequest, Native, Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FVector                 HitPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_CheckWaterHeight(struct FVector* HitPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeight");

	ABP_Fishing_Arrow_C_CheckWaterHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitPos != nullptr)
		*HitPos = params.HitPos;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.End8Move
// (Event, Public, Delegate)

void ABP_Fishing_Arrow_C::End8Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.End8Move");

	ABP_Fishing_Arrow_C_End8Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Start8Move
// (Net, NetReliable, NetRequest, Exec, Native, Public, Delegate)

void ABP_Fishing_Arrow_C::Start8Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Start8Move");

	ABP_Fishing_Arrow_C_Start8Move_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Update8Move
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer)

void ABP_Fishing_Arrow_C::STATIC_Update8Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Update8Move");

	ABP_Fishing_Arrow_C_Update8Move_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetWaterAndArrowIntersectPos
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 HitPos                         (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_GetWaterAndArrowIntersectPos(struct FVector* HitPos)
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
// (Net, NetReliable, NetRequest, Native, Static, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_Reset(float Velocity, float Degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Reset");

	ABP_Fishing_Arrow_C_Reset_Params params;
	params.Velocity = Velocity;
	params.Degree = Degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetReverseRate
// (NetReliable, NetRequest, Native, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetReverseRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetReverseRate");

	ABP_Fishing_Arrow_C_SetReverseRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetArrowLength
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_SetArrowLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetArrowLength");

	ABP_Fishing_Arrow_C_SetArrowLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Initialize
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_Fishing_Arrow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Initialize");

	ABP_Fishing_Arrow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UpdateVisibleArrow
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Exec, NetMulticast, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
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
// (NetReliable, Exec, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_SetGradationSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetGradationSpeed");

	ABP_Fishing_Arrow_C_SetGradationSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetSplinePos
// (Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::SetSplinePos(float Velocity, float Degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetSplinePos");

	ABP_Fishing_Arrow_C_SetSplinePos_Params params;
	params.Velocity = Velocity;
	params.Degree = Degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetXYZ
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_GetXYZ(float Time, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetXYZ");

	ABP_Fishing_Arrow_C_GetXYZ_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetHeight
// (Native, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::GetHeight(float Time, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetHeight");

	ABP_Fishing_Arrow_C_GetHeight_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.getDistance
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_getDistance(float Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.getDistance");

	ABP_Fishing_Arrow_C_getDistance_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_Fishing_Arrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UserConstructionScript");

	ABP_Fishing_Arrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveBeginPlay
// (NetReliable, Event, Public, Delegate)

void ABP_Fishing_Arrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveBeginPlay");

	ABP_Fishing_Arrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveTick
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveTick");

	ABP_Fishing_Arrow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ExecuteUbergraph_BP_Fishing_Arrow
// (Net, Native, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Arrow_C::STATIC_ExecuteUbergraph_BP_Fishing_Arrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ExecuteUbergraph_BP_Fishing_Arrow");

	ABP_Fishing_Arrow_C_ExecuteUbergraph_BP_Fishing_Arrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
