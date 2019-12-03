
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

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.GetUpFaceNum
// (NetReliable, Exec, Native, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice2_C::GetUpFaceNum(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.GetUpFaceNum");

	ABP_MiniGame_UDYDice2_C_GetUpFaceNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.UpdateRollingSE
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport)

void ABP_MiniGame_UDYDice2_C::STATIC_UpdateRollingSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.UpdateRollingSE");

	ABP_MiniGame_UDYDice2_C_UpdateRollingSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.IsHitSEPlaying
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_UDYDice2_C::STATIC_IsHitSEPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.IsHitSEPlaying");

	ABP_MiniGame_UDYDice2_C_IsHitSEPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.IsStopped
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice2_C::IsStopped(bool* bStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.IsStopped");

	ABP_MiniGame_UDYDice2_C_IsStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.UserConstructionScript
// (NetReliable, Native, Event, NetMulticast, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_UDYDice2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.UserConstructionScript");

	ABP_MiniGame_UDYDice2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)

void ABP_MiniGame_UDYDice2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ReceiveBeginPlay");

	ABP_MiniGame_UDYDice2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_UDYDice2_C::BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_MiniGame_UDYDice2_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ReceiveTick
// (Net, Event, NetResponse, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ReceiveTick");

	ABP_MiniGame_UDYDice2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.Throw
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FVector                 dir                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice2_C::Throw(const struct FVector& dir, float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.Throw");

	ABP_MiniGame_UDYDice2_C_Throw_Params params;
	params.dir = dir;
	params.Power = Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ExecuteUbergraph_BP_MiniGame_UDYDice2
// (Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_UDYDice2_C::STATIC_ExecuteUbergraph_BP_MiniGame_UDYDice2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ExecuteUbergraph_BP_MiniGame_UDYDice2");

	ABP_MiniGame_UDYDice2_C_ExecuteUbergraph_BP_MiniGame_UDYDice2_Params params;
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
