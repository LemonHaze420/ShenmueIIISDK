
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetEffectMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BellTowerKeySelectEffect_C::SetEffectMesh(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetEffectMesh");

	ABP_BellTowerKeySelectEffect_C_SetEffectMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UpdateEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BellTowerKeySelectEffect_C::UpdateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UpdateEffect");

	ABP_BellTowerKeySelectEffect_C_UpdateEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetupEffectMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BellTowerKeySelectEffect_C::SetupEffectMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.SetupEffectMaterial");

	ABP_BellTowerKeySelectEffect_C_SetupEffectMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BellTowerKeySelectEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.UserConstructionScript");

	ABP_BellTowerKeySelectEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BellTowerKeySelectEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.ReceiveBeginPlay");

	ABP_BellTowerKeySelectEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BellTowerKeySelectEffect.BP_BellTowerKeySelectEffect_C.ExecuteUbergraph_BP_BellTowerKeySelectEffect
// ()
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
