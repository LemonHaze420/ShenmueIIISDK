
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

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.GetStairsGimmickInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  StairsGimmick                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              ActorTransform                 (Parm, OutParm, IsPlainOldData)
// struct FTransform              RelativeTransform              (Parm, OutParm, IsPlainOldData)
// struct FVector                 StepDimensions                 (Parm, OutParm, IsPlainOldData)
// int                            Steps                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Widths                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NavLink_Stairs_C::GetStairsGimmickInfo(class AActor** StairsGimmick, struct FTransform* ActorTransform, struct FTransform* RelativeTransform, struct FVector* StepDimensions, int* Steps, int* Widths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.GetStairsGimmickInfo");

	ABP_NavLink_Stairs_C_GetStairsGimmickInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StairsGimmick != nullptr)
		*StairsGimmick = params.StairsGimmick;
	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;
	if (StepDimensions != nullptr)
		*StepDimensions = params.StepDimensions;
	if (Steps != nullptr)
		*Steps = params.Steps;
	if (Widths != nullptr)
		*Widths = params.Widths;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateStairsInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NavLink_Stairs_C::UpdateStairsInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateStairsInfo");

	ABP_NavLink_Stairs_C_UpdateStairsInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateDebugStairs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NavLink_Stairs_C::UpdateDebugStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateDebugStairs");

	ABP_NavLink_Stairs_C_UpdateDebugStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NavLink_Stairs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UserConstructionScript");

	ABP_NavLink_Stairs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ReceiveSmartLinkReached
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NavLink_Stairs_C::ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ReceiveSmartLinkReached");

	ABP_NavLink_Stairs_C_ReceiveSmartLinkReached_Params params;
	params.Agent = Agent;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ExecuteUbergraph_BP_NavLink_Stairs
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NavLink_Stairs_C::ExecuteUbergraph_BP_NavLink_Stairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ExecuteUbergraph_BP_NavLink_Stairs");

	ABP_NavLink_Stairs_C_ExecuteUbergraph_BP_NavLink_Stairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
