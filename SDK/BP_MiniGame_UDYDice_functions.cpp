
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

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.StopRollingSE
// (Native, NetResponse, Static, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_UDYDice_C::STATIC_StopRollingSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.StopRollingSE");

	ABP_MiniGame_UDYDice_C_StopRollingSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.InitializeSE
// (Static, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UDYDice_C::STATIC_InitializeSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.InitializeSE");

	ABP_MiniGame_UDYDice_C_InitializeSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsPerfectStop
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Stop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::STATIC_IsPerfectStop(bool* Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsPerfectStop");

	ABP_MiniGame_UDYDice_C_IsPerfectStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stop != nullptr)
		*Stop = params.Stop;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UpdateRollingSE
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UDYDice_C::UpdateRollingSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UpdateRollingSE");

	ABP_MiniGame_UDYDice_C_UpdateRollingSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsHitSEPlaying
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_UDYDice_C::STATIC_IsHitSEPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsHitSEPlaying");

	ABP_MiniGame_UDYDice_C_IsHitSEPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsStopped
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::STATIC_IsStopped(bool* bStop)
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
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UDYDice_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UserConstructionScript");

	ABP_MiniGame_UDYDice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveTick
// (Net, NetRequest, Exec, Native, Event, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveTick");

	ABP_MiniGame_UDYDice_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::STATIC_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
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
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UDYDice_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveBeginPlay");

	ABP_MiniGame_UDYDice_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveEndPlay
// (Net, NetRequest, Exec, Native, Event, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveEndPlay");

	ABP_MiniGame_UDYDice_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.PlayHitSE
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_UDYDice_C::STATIC_PlayHitSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.PlayHitSE");

	ABP_MiniGame_UDYDice_C_PlayHitSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ExecuteUbergraph_BP_MiniGame_UDYDice
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Private, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice_C::STATIC_ExecuteUbergraph_BP_MiniGame_UDYDice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ExecuteUbergraph_BP_MiniGame_UDYDice");

	ABP_MiniGame_UDYDice_C_ExecuteUbergraph_BP_MiniGame_UDYDice_Params params;
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
