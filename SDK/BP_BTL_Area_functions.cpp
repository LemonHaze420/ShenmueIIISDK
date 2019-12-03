
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

// Function BP_BTL_Area.BP_BTL_Area_C.InsideEntireArea
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bIsInside                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_Area_C::InsideEntireArea(const struct FVector& Point, bool* bIsInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.InsideEntireArea");

	ABP_BTL_Area_C_InsideEntireArea_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInside != nullptr)
		*bIsInside = params.bIsInside;
}


// Function BP_BTL_Area.BP_BTL_Area_C.GetPathfindingRefLocation
// (NetRequest, Exec, NetResponse, Static, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_BTL_Area_C::STATIC_GetPathfindingRefLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.GetPathfindingRefLocation");

	ABP_BTL_Area_C_GetPathfindingRefLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_Area.BP_BTL_Area_C.TestStraightPathInside
// (Native, Event, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BTL_Area_C::TestStraightPathInside(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.TestStraightPathInside");

	ABP_BTL_Area_C_TestStraightPathInside_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_Area.BP_BTL_Area_C.ClampLocation
// (Net, NetReliable, Exec, Event, Static, Public, Delegate)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_BTL_Area_C::STATIC_ClampLocation(const struct FVector& InLocation, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.ClampLocation");

	ABP_BTL_Area_C_ClampLocation_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function BP_BTL_Area.BP_BTL_Area_C.NudgeDirTowardsCenter
// (Net, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ToCenter                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_BTL_Area_C::NudgeDirTowardsCenter(const struct FVector& Direction, const struct FVector& ToCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.NudgeDirTowardsCenter");

	ABP_BTL_Area_C_NudgeDirTowardsCenter_Params params;
	params.Direction = Direction;
	params.ToCenter = ToCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BTL_Area.BP_BTL_Area_C.EnableCollision
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_Area_C::EnableCollision(bool Enabled, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.EnableCollision");

	ABP_BTL_Area_C_EnableCollision_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BTL_Area.BP_BTL_Area_C.IsReturnedInside
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Returned                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_Area_C::IsReturnedInside(const struct FVector& InLocation, bool* Returned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.IsReturnedInside");

	ABP_BTL_Area_C_IsReturnedInside_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Returned != nullptr)
		*Returned = params.Returned;
}


// Function BP_BTL_Area.BP_BTL_Area_C.ScaleMovement
// (Net, NetReliable, NetRequest, Exec, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Redirected                     (Parm, OutParm, IsPlainOldData)

void ABP_BTL_Area_C::STATIC_ScaleMovement(const struct FVector& Location, const struct FVector& Direction, struct FVector* Redirected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.ScaleMovement");

	ABP_BTL_Area_C_ScaleMovement_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Redirected != nullptr)
		*Redirected = params.Redirected;
}


// Function BP_BTL_Area.BP_BTL_Area_C.InsideFreeArea
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bIsInside                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BTL_Area_C::InsideFreeArea(const struct FVector& Point, bool* bIsInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.InsideFreeArea");

	ABP_BTL_Area_C_InsideFreeArea_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInside != nullptr)
		*bIsInside = params.bIsInside;
}


// Function BP_BTL_Area.BP_BTL_Area_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_BTL_Area_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTL_Area.BP_BTL_Area_C.UserConstructionScript");

	ABP_BTL_Area_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
