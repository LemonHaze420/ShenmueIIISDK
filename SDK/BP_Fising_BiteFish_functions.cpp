
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::DisableBite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DisableBite");

	ABP_Fising_BiteFish_C_DisableBite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.MoveToTargetInTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::MoveToTargetInTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.MoveToTargetInTime");

	ABP_Fising_BiteFish_C_MoveToTargetInTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.SetTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Output_Get                     (Parm, OutParm, IsPlainOldData)

void ABP_Fising_BiteFish_C::SetTargetLocation(const struct FVector& TargetLocation, struct FVector* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.SetTargetLocation");

	ABP_Fising_BiteFish_C_SetTargetLocation_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UpdateBite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::UpdateBite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UpdateBite");

	ABP_Fising_BiteFish_C_UpdateBite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.UserConstructionScript");

	ABP_Fising_BiteFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fising_BiteFish_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveTick");

	ABP_Fising_BiteFish_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.Initialize");

	ABP_Fising_BiteFish_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Fising_BiteFish_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ReceiveBeginPlay");

	ABP_Fising_BiteFish_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DestroyReady
// (BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::DestroyReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.DestroyReady");

	ABP_Fising_BiteFish_C_DestroyReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ExecuteUbergraph_BP_Fising_BiteFish
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fising_BiteFish_C::ExecuteUbergraph_BP_Fising_BiteFish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.ExecuteUbergraph_BP_Fising_BiteFish");

	ABP_Fising_BiteFish_C_ExecuteUbergraph_BP_Fising_BiteFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fising_BiteFish.BP_Fising_BiteFish_C.OnPerfectBiteDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Fising_BiteFish_C::OnPerfectBiteDispacher__DelegateSignature()
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
