
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

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.DebugPrintMobility
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BG_ProceduralStairs_Base_C::DebugPrintMobility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.DebugPrintMobility");

	ABP_BG_ProceduralStairs_Base_C_DebugPrintMobility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.EnsureMeshActor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsStep                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Parent                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::EnsureMeshActor(bool IsStep, class AActor** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.EnsureMeshActor");

	ABP_BG_ProceduralStairs_Base_C_EnsureMeshActor_Params params;
	params.IsStep = IsStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parent != nullptr)
		*Parent = params.Parent;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.GetGimmickInitInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ActorTransform                 (Parm, OutParm, IsPlainOldData)
// struct FTransform              RelativeTransform              (Parm, OutParm, IsPlainOldData)
// struct FVector                 StepDimensions                 (Parm, OutParm, IsPlainOldData)
// int                            StepCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::GetGimmickInitInfo(struct FTransform* ActorTransform, struct FTransform* RelativeTransform, struct FVector* StepDimensions, int* StepCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.GetGimmickInitInfo");

	ABP_BG_ProceduralStairs_Base_C_GetGimmickInitInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;
	if (StepDimensions != nullptr)
		*StepDimensions = params.StepDimensions;
	if (StepCount != nullptr)
		*StepCount = params.StepCount;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.EnsureStaticMeshComponent
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFloor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInstancedStaticMeshComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInstancedStaticMeshComponent* ABP_BG_ProceduralStairs_Base_C::EnsureStaticMeshComponent(class UStaticMesh* Mesh, class UMaterialInterface* Material, bool IsFloor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.EnsureStaticMeshComponent");

	ABP_BG_ProceduralStairs_Base_C_EnsureStaticMeshComponent_Params params;
	params.Mesh = Mesh;
	params.Material = Material;
	params.IsFloor = IsFloor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.SpawnMesh
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UInstancedStaticMeshComponent* Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::SpawnMesh(class UStaticMesh* NewMesh, class UMaterialInterface* Material, bool bIsStep, const struct FTransform& RelativeTransform, class UInstancedStaticMeshComponent** Component, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.SpawnMesh");

	ABP_BG_ProceduralStairs_Base_C_SpawnMesh_Params params;
	params.NewMesh = NewMesh;
	params.Material = Material;
	params.bIsStep = bIsStep;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CalcChildScaleFix
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNeedFix                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FixScale                       (Parm, OutParm, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::CalcChildScaleFix(bool* bNeedFix, struct FVector* FixScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CalcChildScaleFix");

	ABP_BG_ProceduralStairs_Base_C_CalcChildScaleFix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNeedFix != nullptr)
		*bNeedFix = params.bNeedFix;
	if (FixScale != nullptr)
		*FixScale = params.FixScale;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.PostConstruction
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BG_ProceduralStairs_Base_C::PostConstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.PostConstruction");

	ABP_BG_ProceduralStairs_Base_C_PostConstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CreateGimmick
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BG_ProceduralStairs_Base_C::CreateGimmick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CreateGimmick");

	ABP_BG_ProceduralStairs_Base_C_CreateGimmick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.SetModifierBox
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BG_ProceduralStairs_Base_C::SetModifierBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.SetModifierBox");

	ABP_BG_ProceduralStairs_Base_C_SetModifierBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CreateLink
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_StairsNavLink       StairsNavLink                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::CreateLink(struct FST_StairsNavLink* StairsNavLink, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CreateLink");

	ABP_BG_ProceduralStairs_Base_C_CreateLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StairsNavLink != nullptr)
		*StairsNavLink = params.StairsNavLink;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.InitializeFromLegacyChild
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StepDepth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StepWidth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StepHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSteps__1_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumbWidths__1_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::InitializeFromLegacyChild(float StepDepth, float StepWidth, float StepHeight, int NumSteps__1_, int NumbWidths__1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.InitializeFromLegacyChild");

	ABP_BG_ProceduralStairs_Base_C_InitializeFromLegacyChild_Params params;
	params.StepDepth = StepDepth;
	params.StepWidth = StepWidth;
	params.StepHeight = StepHeight;
	params.NumSteps__1_ = NumSteps__1_;
	params.NumbWidths__1_ = NumbWidths__1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CalculateBaseRelativeTransform
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::CalculateBaseRelativeTransform(struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CalculateBaseRelativeTransform");

	ABP_BG_ProceduralStairs_Base_C_CalculateBaseRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BG_ProceduralStairs_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.UserConstructionScript");

	ABP_BG_ProceduralStairs_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.ExecuteUbergraph_BP_BG_ProceduralStairs_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BG_ProceduralStairs_Base_C::ExecuteUbergraph_BP_BG_ProceduralStairs_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.ExecuteUbergraph_BP_BG_ProceduralStairs_Base");

	ABP_BG_ProceduralStairs_Base_C_ExecuteUbergraph_BP_BG_ProceduralStairs_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
