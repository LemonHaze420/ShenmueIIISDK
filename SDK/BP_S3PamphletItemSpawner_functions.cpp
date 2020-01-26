
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

// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.CalcUniqueCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3PamphletItemSpawner_C::CalcUniqueCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.CalcUniqueCamera");

	ABP_S3PamphletItemSpawner_C_CalcUniqueCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3PamphletItemSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.UserConstructionScript");

	ABP_S3PamphletItemSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3PamphletItemSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ReceiveBeginPlay");

	ABP_S3PamphletItemSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.SetEnabledHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PamphletItemSpawner_C::SetEnabledHelp(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.SetEnabledHelp");

	ABP_S3PamphletItemSpawner_C_SetEnabledHelp_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ExecuteUbergraph_BP_S3PamphletItemSpawner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PamphletItemSpawner_C::ExecuteUbergraph_BP_S3PamphletItemSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C.ExecuteUbergraph_BP_S3PamphletItemSpawner");

	ABP_S3PamphletItemSpawner_C_ExecuteUbergraph_BP_S3PamphletItemSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
