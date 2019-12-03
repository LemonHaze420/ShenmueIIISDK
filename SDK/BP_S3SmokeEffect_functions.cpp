
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

// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.UpdateVelocity
// (Native, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           IsEditor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SmokeEffect_C::UpdateVelocity(bool IsEditor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.UpdateVelocity");

	ABP_S3SmokeEffect_C_UpdateVelocity_Params params;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.UserConstructionScript
// (Net, NetReliable, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_S3SmokeEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.UserConstructionScript");

	ABP_S3SmokeEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ReceiveBeginPlay
// (NetReliable, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_S3SmokeEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ReceiveBeginPlay");

	ABP_S3SmokeEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ReceiveTick
// (Net, NetReliable, Event, NetResponse, NetMulticast, Public, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SmokeEffect_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ReceiveTick");

	ABP_S3SmokeEffect_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ExecuteUbergraph_BP_S3SmokeEffect
// (NetRequest, Exec, Event, MulticastDelegate, Public, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SmokeEffect_C::ExecuteUbergraph_BP_S3SmokeEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ExecuteUbergraph_BP_S3SmokeEffect");

	ABP_S3SmokeEffect_C_ExecuteUbergraph_BP_S3SmokeEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
