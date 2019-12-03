
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

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.SetActiveLight
// (NetReliable, NetRequest, Exec, Event, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::SetActiveLight(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.SetActiveLight");

	ABP_S3ReflectorBoardActor_C_SetActiveLight_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ToggleActive
// (Net, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::STATIC_ToggleActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ToggleActive");

	ABP_S3ReflectorBoardActor_C_ToggleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UpdateLightActive
// (Native, Event, NetMulticast, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_S3ReflectorBoardActor_C::UpdateLightActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UpdateLightActive");

	ABP_S3ReflectorBoardActor_C_UpdateLightActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPos
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 pelvis                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnPos                      (Parm, OutParm, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::STATIC_CalcLightPos(const struct FVector& pelvis, struct FVector* ReturnPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPos");

	ABP_S3ReflectorBoardActor_C_CalcLightPos_Params params;
	params.pelvis = pelvis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnPos != nullptr)
		*ReturnPos = params.ReturnPos;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPosition
// (Net, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3ReflectorBoardActor_C::STATIC_CalcLightPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPosition");

	ABP_S3ReflectorBoardActor_C_CalcLightPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UserConstructionScript
// (NetRequest, Exec, Native, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3ReflectorBoardActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UserConstructionScript");

	ABP_S3ReflectorBoardActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndCutscene
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndCutscene");

	ABP_S3ReflectorBoardActor_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartCutscene
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartCutscene");

	ABP_S3ReflectorBoardActor_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartTalk
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_StartTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartTalk");

	ABP_S3ReflectorBoardActor_C_StartTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndTalk
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_EndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndTalk");

	ABP_S3ReflectorBoardActor_C_EndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ChangeTalkCamera
// (Net, Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_ChangeTalkCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ChangeTalkCamera");

	ABP_S3ReflectorBoardActor_C_ChangeTalkCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UnbindEventDispacher
// (Net, Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_UnbindEventDispacher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UnbindEventDispacher");

	ABP_S3ReflectorBoardActor_C_UnbindEventDispacher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.BindEventDispatcher
// (Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_BindEventDispatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.BindEventDispatcher");

	ABP_S3ReflectorBoardActor_C_BindEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveBeginPlay
// (Exec, Event, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ReflectorBoardActor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveBeginPlay");

	ABP_S3ReflectorBoardActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveTick
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveTick");

	ABP_S3ReflectorBoardActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndOwner
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::STATIC_EndOwner(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndOwner");

	ABP_S3ReflectorBoardActor_C_EndOwner_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveEndPlay
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveEndPlay");

	ABP_S3ReflectorBoardActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ExecuteUbergraph_BP_S3ReflectorBoardActor
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::ExecuteUbergraph_BP_S3ReflectorBoardActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ExecuteUbergraph_BP_S3ReflectorBoardActor");

	ABP_S3ReflectorBoardActor_C_ExecuteUbergraph_BP_S3ReflectorBoardActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
