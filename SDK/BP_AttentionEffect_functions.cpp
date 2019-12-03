
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

// Function BP_AttentionEffect.BP_AttentionEffect_C.IsFinished
// (NetRequest, Exec, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsFinished                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionEffect_C::IsFinished(bool* IsFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionEffect.BP_AttentionEffect_C.IsFinished");

	ABP_AttentionEffect_C_IsFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinished != nullptr)
		*IsFinished = params.IsFinished;
}


// Function BP_AttentionEffect.BP_AttentionEffect_C.UpdateEffect
// (Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_AttentionEffect_C::STATIC_UpdateEffect(class UCameraComponent* Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionEffect.BP_AttentionEffect_C.UpdateEffect");

	ABP_AttentionEffect_C_UpdateEffect_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionEffect.BP_AttentionEffect_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_AttentionEffect_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionEffect.BP_AttentionEffect_C.UserConstructionScript");

	ABP_AttentionEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
