
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

// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.GetStairsGimmickInfo
// (Net, NetReliable, NetRequest, Native, Delegate, NetServer, NetClient, Const)
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
	fn->FunctionFlags |= 0x400;

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
// (Net, NetReliable, Exec, Native, Event, Static, Private, Protected, Delegate, NetClient, Const)

void ABP_NavLink_Stairs_C::STATIC_UpdateStairsInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateStairsInfo");

	ABP_NavLink_Stairs_C_UpdateStairsInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateDebugStairs
// (NetReliable, NetRequest, Exec, Event, NetResponse, Delegate, NetClient, Const)

void ABP_NavLink_Stairs_C::UpdateDebugStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UpdateDebugStairs");

	ABP_NavLink_Stairs_C_UpdateDebugStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_NavLink_Stairs_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.UserConstructionScript");

	ABP_NavLink_Stairs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ReceiveSmartLinkReached
// (Net, NetReliable, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NavLink_Stairs_C::STATIC_ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination)
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
// (Exec, Native, Event, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NavLink_Stairs_C::ExecuteUbergraph_BP_NavLink_Stairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavLink_Stairs.BP_NavLink_Stairs_C.ExecuteUbergraph_BP_NavLink_Stairs");

	ABP_NavLink_Stairs_C_ExecuteUbergraph_BP_NavLink_Stairs_Params params;
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
