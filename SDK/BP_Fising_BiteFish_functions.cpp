
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

// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DisableBite
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::STATIC_DisableBite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DisableBite");

	ABP_Fising_BiteFish_C_DisableBite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.MoveToTargetInTime
// (NetRequest, Exec, Native, NetResponse, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Fising_BiteFish_C::MoveToTargetInTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.MoveToTargetInTime");

	ABP_Fising_BiteFish_C_MoveToTargetInTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.SetTargetLocation
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Output_Get                     (Parm, OutParm, IsPlainOldData)

void ABP_Fising_BiteFish_C::STATIC_SetTargetLocation(const struct FVector& TargetLocation, struct FVector* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.SetTargetLocation");

	ABP_Fising_BiteFish_C_SetTargetLocation_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UpdateBite
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Fising_BiteFish_C::UpdateBite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UpdateBite");

	ABP_Fising_BiteFish_C_UpdateBite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UserConstructionScript
// (Net, NetRequest, NetResponse, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Fising_BiteFish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UserConstructionScript");

	ABP_Fising_BiteFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveTick
// (NetReliable, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fising_BiteFish_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveTick");

	ABP_Fising_BiteFish_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.Initialize
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Fising_BiteFish_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.Initialize");

	ABP_Fising_BiteFish_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Fising_BiteFish_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveBeginPlay");

	ABP_Fising_BiteFish_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DestroyReady
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Fising_BiteFish_C::STATIC_DestroyReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DestroyReady");

	ABP_Fising_BiteFish_C_DestroyReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ExecuteUbergraph_BP_Fising_BiteFish
// (NetReliable, Native, Event, Static, NetMulticast, Public, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fising_BiteFish_C::STATIC_ExecuteUbergraph_BP_Fising_BiteFish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ExecuteUbergraph_BP_Fising_BiteFish");

	ABP_Fising_BiteFish_C_ExecuteUbergraph_BP_Fising_BiteFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.OnPerfectBiteDispacher__DelegateSignature
// (Net, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::STATIC_OnPerfectBiteDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.OnPerfectBiteDispacher__DelegateSignature");

	ABP_Fising_BiteFish_C_OnPerfectBiteDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
