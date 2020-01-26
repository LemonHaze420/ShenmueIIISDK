
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

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.StopRollingSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_UDYDice_C::StopRollingSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.StopRollingSE");

	ABP_MiniGame_UDYDice_C_StopRollingSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.InitializeSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_UDYDice_C::InitializeSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.InitializeSE");

	ABP_MiniGame_UDYDice_C_InitializeSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsPerfectStop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Stop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::IsPerfectStop(bool* Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsPerfectStop");

	ABP_MiniGame_UDYDice_C_IsPerfectStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stop != nullptr)
		*Stop = params.Stop;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UpdateRollingSE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_UDYDice_C::UpdateRollingSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UpdateRollingSE");

	ABP_MiniGame_UDYDice_C_UpdateRollingSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsHitSEPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_UDYDice_C::IsHitSEPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsHitSEPlaying");

	ABP_MiniGame_UDYDice_C_IsHitSEPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsStopped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::IsStopped(bool* bStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsStopped");

	ABP_MiniGame_UDYDice_C_IsStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_UDYDice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UserConstructionScript");

	ABP_MiniGame_UDYDice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveTick");

	ABP_MiniGame_UDYDice_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_UDYDice_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_UDYDice_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveBeginPlay");

	ABP_MiniGame_UDYDice_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveEndPlay");

	ABP_MiniGame_UDYDice_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.PlayHitSE
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_UDYDice_C::PlayHitSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.PlayHitSE");

	ABP_MiniGame_UDYDice_C_PlayHitSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ExecuteUbergraph_BP_MiniGame_UDYDice
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::ExecuteUbergraph_BP_MiniGame_UDYDice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ExecuteUbergraph_BP_MiniGame_UDYDice");

	ABP_MiniGame_UDYDice_C_ExecuteUbergraph_BP_MiniGame_UDYDice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
