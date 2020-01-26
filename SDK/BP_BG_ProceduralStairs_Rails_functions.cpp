
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

// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.SpawnRailsAndPoles
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpawnRight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnLeft                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PoleOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    StepBounds                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BG_ProceduralStairs_Rails_C::SpawnRailsAndPoles(bool SpawnRight, bool SpawnLeft, bool PoleOnly, struct FBox* StepBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.SpawnRailsAndPoles");

	ABP_BG_ProceduralStairs_Rails_C_SpawnRailsAndPoles_Params params;
	params.SpawnRight = SpawnRight;
	params.SpawnLeft = SpawnLeft;
	params.PoleOnly = PoleOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepBounds != nullptr)
		*StepBounds = params.StepBounds;
}


// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.SpawnRailAndPole
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RightSide                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PoleOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    StepBounds                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BG_ProceduralStairs_Rails_C::SpawnRailAndPole(bool RightSide, bool PoleOnly, struct FBox* StepBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.SpawnRailAndPole");

	ABP_BG_ProceduralStairs_Rails_C_SpawnRailAndPole_Params params;
	params.RightSide = RightSide;
	params.PoleOnly = PoleOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepBounds != nullptr)
		*StepBounds = params.StepBounds;
}


// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.GetScaledMeshBoundingBox
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutBounds                      (Parm, OutParm, IsPlainOldData)

void ABP_BG_ProceduralStairs_Rails_C::GetScaledMeshBoundingBox(class UStaticMesh* Mesh, struct FBox* OutBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.GetScaledMeshBoundingBox");

	ABP_BG_ProceduralStairs_Rails_C_GetScaledMeshBoundingBox_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBounds != nullptr)
		*OutBounds = params.OutBounds;
}


// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.GenerateRandomMeshRotation
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Random                         (Parm, OutParm, IsPlainOldData)

void ABP_BG_ProceduralStairs_Rails_C::GenerateRandomMeshRotation(struct FRotator* Random)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.GenerateRandomMeshRotation");

	ABP_BG_ProceduralStairs_Rails_C_GenerateRandomMeshRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
}


// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BG_ProceduralStairs_Rails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.UserConstructionScript");

	ABP_BG_ProceduralStairs_Rails_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
