
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

// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetEffectMesh
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BellTowerKeySelectEffect_C::STATIC_SetEffectMesh(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetEffectMesh");

	ABP_BellTowerKeySelectEffect_C_SetEffectMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UpdateEffect
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable)

void ABP_BellTowerKeySelectEffect_C::UpdateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UpdateEffect");

	ABP_BellTowerKeySelectEffect_C_UpdateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetupEffectMaterial
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_BellTowerKeySelectEffect_C::STATIC_SetupEffectMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetupEffectMaterial");

	ABP_BellTowerKeySelectEffect_C_SetupEffectMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UserConstructionScript
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_BellTowerKeySelectEffect_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UserConstructionScript");

	ABP_BellTowerKeySelectEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.ReceiveBeginPlay
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_BellTowerKeySelectEffect_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.ReceiveBeginPlay");

	ABP_BellTowerKeySelectEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.ExecuteUbergraph_BP_BellTowerKeySelectEffect
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BellTowerKeySelectEffect_C::ExecuteUbergraph_BP_BellTowerKeySelectEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.ExecuteUbergraph_BP_BellTowerKeySelectEffect");

	ABP_BellTowerKeySelectEffect_C_ExecuteUbergraph_BP_BellTowerKeySelectEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
