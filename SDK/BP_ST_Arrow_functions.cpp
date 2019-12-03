
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

// Function BP_ST_Arrow.BP_ST_Arrow_C.EnabledSplineMesh
// (NetRequest, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
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
// (Net, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetArrowNumRate(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowNumRate");

	ABP_ST_Arrow_C_SetArrowNumRate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowMaskSize
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Delegate, BlueprintCallable)
// Parameters:
// struct FVector2D               InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ST_Arrow_C::SetArrowMaskSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowMaskSize");

	ABP_ST_Arrow_C_SetArrowMaskSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetHorizonTaperedScale
// (Exec, Native, Event, NetResponse, Static, Public, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetHorizonTaperedScale(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetHorizonTaperedScale");

	ABP_ST_Arrow_C_SetHorizonTaperedScale_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetMaxAlpha
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxAlpha                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetMaxAlpha(float MaxAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetMaxAlpha");

	ABP_ST_Arrow_C_SetMaxAlpha_Params params;
	params.MaxAlpha = MaxAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.Reset
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_Reset(float Velocity, float Degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.Reset");

	ABP_ST_Arrow_C_Reset_Params params;
	params.Velocity = Velocity;
	params.Degree = Degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetReverseRate
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetReverseRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetReverseRate");

	ABP_ST_Arrow_C_SetReverseRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowLength
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetArrowLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowLength");

	ABP_ST_Arrow_C_SetArrowLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.Initialize
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)

void ABP_ST_Arrow_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.Initialize");

	ABP_ST_Arrow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.UpdateVisibleArrow
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_UpdateVisibleArrow(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.UpdateVisibleArrow");

	ABP_ST_Arrow_C_UpdateVisibleArrow_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetVisibleArrow
// (NetRequest, Native, Event, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::SetVisibleArrow(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetVisibleArrow");

	ABP_ST_Arrow_C_SetVisibleArrow_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationPower
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetGradationPower(float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationPower");

	ABP_ST_Arrow_C_SetGradationPower_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationSpeed
// (Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
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
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetSplinePos(float Velocity, float Degree, float Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetSplinePos");

	ABP_ST_Arrow_C_SetSplinePos_Params params;
	params.Velocity = Velocity;
	params.Degree = Degree;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.GetXYZ
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_GetXYZ(float Time, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.GetXYZ");

	ABP_ST_Arrow_C_GetXYZ_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.GetHeight
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_GetHeight(float Time, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.GetHeight");

	ABP_ST_Arrow_C_GetHeight_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.getDistance
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_getDistance(float Time, float* Distance)
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
// (Net, Exec, Event, Static, MulticastDelegate, NetServer, HasDefaults, DLLImport, BlueprintEvent)

void ABP_ST_Arrow_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.UserConstructionScript");

	ABP_ST_Arrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveBeginPlay
// (Net, Exec, Event, NetResponse, Static, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ST_Arrow_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveBeginPlay");

	ABP_ST_Arrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveTick
// (Native, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveTick");

	ABP_ST_Arrow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.SetRenderTargetTickEnabled
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_SetRenderTargetTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.SetRenderTargetTickEnabled");

	ABP_ST_Arrow_C_SetRenderTargetTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_Arrow.BP_ST_Arrow_C.ExecuteUbergraph_BP_ST_Arrow
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_Arrow_C::STATIC_ExecuteUbergraph_BP_ST_Arrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_Arrow.BP_ST_Arrow_C.ExecuteUbergraph_BP_ST_Arrow");

	ABP_ST_Arrow_C_ExecuteUbergraph_BP_ST_Arrow_Params params;
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
