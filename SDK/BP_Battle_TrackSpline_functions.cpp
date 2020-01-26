
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.Editor_Fixup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Battle_TrackSpline_C::Editor_Fixup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.Editor_Fixup");

	ABP_Battle_TrackSpline_C_Editor_Fixup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.SetBlockDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SourceLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 SourceDirection                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          LookAheadAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutDirection                   (Parm, OutParm, IsPlainOldData)

void ABP_Battle_TrackSpline_C::CalculateClosestDirection(const struct FVector& SourceLocation, const struct FVector& SourceDirection, float LookAheadAmount, struct FVector* OutDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.CalculateClosestDirection");

	ABP_Battle_TrackSpline_C_CalculateClosestDirection_Params params;
	params.SourceLocation = SourceLocation;
	params.SourceDirection = SourceDirection;
	params.LookAheadAmount = LookAheadAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.LookAhead
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CurrentLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DistanceAhead                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_Battle_TrackSpline_C::LookAhead(const struct FVector& CurrentLocation, float DistanceAhead, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.LookAhead");

	ABP_Battle_TrackSpline_C_LookAhead_Params params;
	params.CurrentLocation = CurrentLocation;
	params.DistanceAhead = DistanceAhead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.FindTangent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Tangent                        (Parm, OutParm, IsPlainOldData)

void ABP_Battle_TrackSpline_C::FindTangent(const struct FVector& WorldLocation, struct FVector* Tangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.FindTangent");

	ABP_Battle_TrackSpline_C_FindTangent_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tangent != nullptr)
		*Tangent = params.Tangent;
}


// Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Battle_TrackSpline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Battle_TrackSpline.BP_Battle_TrackSpline_C.UserConstructionScript");

	ABP_Battle_TrackSpline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
