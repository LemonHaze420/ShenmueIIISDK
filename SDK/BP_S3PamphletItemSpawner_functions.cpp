
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

// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.CalcUniqueCamera
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)

void ABP_S3PamphletItemSpawner_C::STATIC_CalcUniqueCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.CalcUniqueCamera");

	ABP_S3PamphletItemSpawner_C_CalcUniqueCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.UserConstructionScript
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3PamphletItemSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.UserConstructionScript");

	ABP_S3PamphletItemSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ReceiveBeginPlay
// (Net, Exec, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3PamphletItemSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ReceiveBeginPlay");

	ABP_S3PamphletItemSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.SetEnabledHelp
// (Net, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PamphletItemSpawner_C::STATIC_SetEnabledHelp(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.SetEnabledHelp");

	ABP_S3PamphletItemSpawner_C_SetEnabledHelp_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ExecuteUbergraph_BP_S3PamphletItemSpawner
// (Net, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PamphletItemSpawner_C::STATIC_ExecuteUbergraph_BP_S3PamphletItemSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ExecuteUbergraph_BP_S3PamphletItemSpawner");

	ABP_S3PamphletItemSpawner_C_ExecuteUbergraph_BP_S3PamphletItemSpawner_Params params;
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
