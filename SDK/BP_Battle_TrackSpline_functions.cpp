
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

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.Editor_Fixup
// (Net, NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Battle_TrackSpline_C::STATIC_Editor_Fixup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.Editor_Fixup");

	ABP_Battle_TrackSpline_C_Editor_Fixup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.SetBlockDistance
// (NetReliable, NetRequest, Exec, NetResponse, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Battle_TrackSpline_C::SetBlockDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.SetBlockDistance");

	ABP_Battle_TrackSpline_C_SetBlockDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.CalculateClosestDirection
// (Exec, Native, Event, Static, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 SourceLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 SourceDirection                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          LookAheadAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)

void ABP_Battle_TrackSpline_C::STATIC_CalculateClosestDirection(const struct FVector& SourceLocation, const struct FVector& SourceDirection, float LookAheadAmount, struct FVector* OutDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.CalculateClosestDirection");

	ABP_Battle_TrackSpline_C_CalculateClosestDirection_Params params;
	params.SourceLocation = SourceLocation;
	params.SourceDirection = SourceDirection;
	params.LookAheadAmount = LookAheadAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.LookAhead
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// struct FVector                 CurrentLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DistanceAhead                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_Battle_TrackSpline_C::STATIC_LookAhead(const struct FVector& CurrentLocation, float DistanceAhead, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.LookAhead");

	ABP_Battle_TrackSpline_C_LookAhead_Params params;
	params.CurrentLocation = CurrentLocation;
	params.DistanceAhead = DistanceAhead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.FindTangent
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Tangent                        (Parm, OutParm, IsPlainOldData)

void ABP_Battle_TrackSpline_C::STATIC_FindTangent(const struct FVector& WorldLocation, struct FVector* Tangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.FindTangent");

	ABP_Battle_TrackSpline_C_FindTangent_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tangent != nullptr)
		*Tangent = params.Tangent;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.UserConstructionScript
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Battle_TrackSpline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.UserConstructionScript");

	ABP_Battle_TrackSpline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
