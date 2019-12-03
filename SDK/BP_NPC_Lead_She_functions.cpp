
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

// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.CanEnterBuilding
// (NetRequest, Exec, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_S3BuildingStaticMeshActor_C* Building                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPC_Lead_She_C::STATIC_CanEnterBuilding(class ABP_S3BuildingStaticMeshActor_C* Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.CanEnterBuilding");

	ABP_NPC_Lead_She_C_CanEnterBuilding_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.UserConstructionScript
// (Net, Exec, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_NPC_Lead_She_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.UserConstructionScript");

	ABP_NPC_Lead_She_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NPC_Lead_She_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.ReceiveBeginPlay");

	ABP_NPC_Lead_She_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.ExecuteUbergraph_BP_NPC_Lead_She
// (Exec, NetResponse, NetMulticast, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_She_C::ExecuteUbergraph_BP_NPC_Lead_She(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.ExecuteUbergraph_BP_NPC_Lead_She");

	ABP_NPC_Lead_She_C_ExecuteUbergraph_BP_NPC_Lead_She_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
