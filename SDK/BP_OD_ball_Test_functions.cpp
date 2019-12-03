
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

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.EnabledBall
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_OD_ball_Test_C::EnabledBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.EnabledBall");

	ABP_OD_ball_Test_C_EnabledBall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.IsErrorStopping
// (Native, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsStopping                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_ball_Test_C::IsErrorStopping(bool* IsStopping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.IsErrorStopping");

	ABP_OD_ball_Test_C_IsErrorStopping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStopping != nullptr)
		*IsStopping = params.IsStopping;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.PlayHitFallSE
// (Exec, Event, NetResponse, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_ball_Test_C::PlayHitFallSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.PlayHitFallSE");

	ABP_OD_ball_Test_C_PlayHitFallSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.PlayHitWallSE
// (NetReliable, NetRequest, Event, NetResponse, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_OD_ball_Test_C::PlayHitWallSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.PlayHitWallSE");

	ABP_OD_ball_Test_C_PlayHitWallSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.CheckAllVelocity
// (NetReliable, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           result1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_ball_Test_C::STATIC_CheckAllVelocity(bool* result1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.CheckAllVelocity");

	ABP_OD_ball_Test_C_CheckAllVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result1 != nullptr)
		*result1 = params.result1;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.SaveVelocity
// (Net, NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure)

void ABP_OD_ball_Test_C::STATIC_SaveVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.SaveVelocity");

	ABP_OD_ball_Test_C_SaveVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.SetFallArea
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bInFallArea                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_ball_Test_C::STATIC_SetFallArea(bool bInFallArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.SetFallArea");

	ABP_OD_ball_Test_C_SetFallArea_Params params;
	params.bInFallArea = bInFallArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.IsFinished
// (Net, NetReliable, Native, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_ball_Test_C::IsFinished(bool* bStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.IsFinished");

	ABP_OD_ball_Test_C_IsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.UserConstructionScript
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_OD_ball_Test_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.UserConstructionScript");

	ABP_OD_ball_Test_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.ReceiveTick
// (NetRequest, Event, NetResponse, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_ball_Test_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.ReceiveTick");

	ABP_OD_ball_Test_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (Net, NetRequest, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_OD_ball_Test_C::BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_OD_ball_Test_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.DelayedStopCheckLocation
// (Native, Event, Static, NetMulticast, Public, Protected, NetServer)

void ABP_OD_ball_Test_C::STATIC_DelayedStopCheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.DelayedStopCheckLocation");

	ABP_OD_ball_Test_C_DelayedStopCheckLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_ball_Test.BP_OD_ball_Test_C.ExecuteUbergraph_BP_OD_ball_Test
// (Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_ball_Test_C::STATIC_ExecuteUbergraph_BP_OD_ball_Test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_ball_Test.BP_OD_ball_Test_C.ExecuteUbergraph_BP_OD_ball_Test");

	ABP_OD_ball_Test_C_ExecuteUbergraph_BP_OD_ball_Test_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
