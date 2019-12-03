
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

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.InitSet
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            UseItemset_ID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Inventory_C::InitSet(int UseItemset_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.InitSet");

	ABP_Hakkason_Inventory_C_InitSet_Params params;
	params.UseItemset_ID = UseItemset_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_Inventory_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.UserConstructionScript");

	ABP_Hakkason_Inventory_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.RenewalActorCount
// (NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Inventory_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.RenewalActorCount");

	ABP_Hakkason_Inventory_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.ReceiveTick
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Inventory_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.ReceiveTick");

	ABP_Hakkason_Inventory_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.TickChangeCheckKill
// (Net, NetReliable, Event, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_Inventory_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.TickChangeCheckKill");

	ABP_Hakkason_Inventory_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.Result_Inventory
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_UseItemResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Inventory_C::Result_Inventory(TEnumAsByte<EN_UseItemResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.Result_Inventory");

	ABP_Hakkason_Inventory_C_Result_Inventory_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.ExecuteUbergraph_BP_Hakkason_Inventory
// (NetReliable, Event, Static, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Inventory_C::STATIC_ExecuteUbergraph_BP_Hakkason_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.ExecuteUbergraph_BP_Hakkason_Inventory");

	ABP_Hakkason_Inventory_C_ExecuteUbergraph_BP_Hakkason_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
