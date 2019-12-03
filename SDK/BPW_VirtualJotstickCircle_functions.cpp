
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

// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetInputZones
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Radii                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeadZone                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RunZone                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_VirtualJotstickCircle_C::STATIC_SetInputZones(float Radii, float DeadZone, float RunZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetInputZones");

	UBPW_VirtualJotstickCircle_C_SetInputZones_Params params;
	params.Radii = Radii;
	params.DeadZone = DeadZone;
	params.RunZone = RunZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.GetDeltaPosition
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               FindMyRelativePos              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Relative                       (Parm, OutParm, IsPlainOldData)

void UBPW_VirtualJotstickCircle_C::STATIC_GetDeltaPosition(const struct FVector2D& FindMyRelativePos, struct FVector2D* Relative)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.GetDeltaPosition");

	UBPW_VirtualJotstickCircle_C_GetDeltaPosition_Params params;
	params.FindMyRelativePos = FindMyRelativePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relative != nullptr)
		*Relative = params.Relative;
}


// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.MakeAxii
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Axii                           (Parm, OutParm, IsPlainOldData)

void UBPW_VirtualJotstickCircle_C::MakeAxii(const struct FVector2D& Position, struct FVector2D* Axii)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.MakeAxii");

	UBPW_VirtualJotstickCircle_C_MakeAxii_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Axii != nullptr)
		*Axii = params.Axii;
}


// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetRadius
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius_Pixels_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_VirtualJotstickCircle_C::SetRadius(float Radius_Pixels_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetRadius");

	UBPW_VirtualJotstickCircle_C_SetRadius_Params params;
	params.Radius_Pixels_ = Radius_Pixels_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetCenterPosition
// (Net, NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_VirtualJotstickCircle_C::STATIC_SetCenterPosition(const struct FVector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.SetCenterPosition");

	UBPW_VirtualJotstickCircle_C_SetCenterPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.ConstrainPosition
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBPW_VirtualJotstickCircle_C::STATIC_ConstrainPosition(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.ConstrainPosition");

	UBPW_VirtualJotstickCircle_C_ConstrainPosition_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.PreConstruct
// (NetRequest, Native, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_VirtualJotstickCircle_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.PreConstruct");

	UBPW_VirtualJotstickCircle_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.ExecuteUbergraph_BPW_VirtualJotstickCircle
// (Net, Native, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_VirtualJotstickCircle_C::STATIC_ExecuteUbergraph_BPW_VirtualJotstickCircle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_VirtualJotstickCircle.BPW_VirtualJotstickCircle_C.ExecuteUbergraph_BPW_VirtualJotstickCircle");

	UBPW_VirtualJotstickCircle_C_ExecuteUbergraph_BPW_VirtualJotstickCircle_Params params;
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
